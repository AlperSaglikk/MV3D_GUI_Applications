#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QCloseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainToolBar->close();
    ui->date_selection_box->setDateTime(QDateTime::currentDateTime());
    ui->area_radioButton->setChecked(true);
    b_thread = new bag_thread(this);
    connect(b_thread, SIGNAL(sender()), this, SLOT(taker()));
    connect(b_thread, SIGNAL(textSender(int)), this, SLOT(textFunc(int)));
    ui->comboBox_mv3d->setEnabled(false);
    b_thread->option = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    b_thread->runThread = false;
    while(b_thread->isRunning())    {}
    b_thread->terminate();
    QString remover = "rm -f /tmp/.bag_finder";
    char* c = new char[remover.length() + 1];
    strcpy(c, remover.toLatin1().constData());
    system(c);
    event->accept();
}

void MainWindow::taker()
{
    QFile dosya("//tmp//.bag_finder");

    if (dosya.open(QIODevice::ReadWrite | QIODevice::Text))    {
    QTextStream in(&dosya);
    QString input = in.readAll();
    ui->textEdit->append(input);
    dosya.close();
    ui->textEdit->append("SEARCHED\n\n");
}
}

void MainWindow::textFunc(int mv3d_no)
{
    ui->textEdit->append("SEARCHING MV3D 3D00" + QString::number(mv3d_no) + "\n");
}

void MainWindow::on_call_pushButton_clicked()
{

    b_thread->runThread = false;
    while(b_thread->isRunning())    {}
    b_thread->bag = ui->lineEdit_bag_no->text();
    b_thread->log = ui->comboBox_logs->currentIndex();
    b_thread->mv3d = ui->comboBox_mv3d->currentIndex();
    b_thread->area = ui->comboBox_area->currentIndex();
    if(ui->date_checkBox->isChecked())
        b_thread->date = ui->date_selection_box->dateTime().toString("ddd MMM dd");
    else
        b_thread->date = "";
    ui->textEdit->clear();
    b_thread->start();
}

void MainWindow::on_date_checkBox_clicked(bool date_checked)
{
    ui->date_selection_box->setEnabled(date_checked);
}

void MainWindow::on_mv3d_radioButton_clicked()
{
    ui->comboBox_mv3d->setEnabled(true);
    ui->comboBox_area->setEnabled(false);
    b_thread->option = true;
}

void MainWindow::on_area_radioButton_clicked()
{
    ui->comboBox_mv3d->setEnabled(false);
    ui->comboBox_area->setEnabled(true);
    b_thread->option = false;
}
