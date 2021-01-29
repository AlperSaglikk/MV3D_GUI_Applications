//This interface allows to restart computers of MV3D
//Created by Alper SAGLIK
//Created for Kuwait
//15.08.2019
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3d0060_clicked()
{
    reset(0, 60);
}

void MainWindow::on_pushButton_3d0061_clicked()
{
    reset(1, 61);
}

void MainWindow::reset(int cmbno, int sn)
{
    QList<QComboBox *>pc;
    pc.append(ui->cmb_3d0060);
    pc.append(ui->cmb_3d0061);

    QString pcstring;
    if(pc.at(cmbno)->currentIndex() == 0)   {
        pcstring = "ssh -t 10.1.10." + QString::number(sn) + " ssh -t scc svc -t /service/scs/";
        ui->info->setText("INFO:    SCC of 3D00" + QString::number(sn) + " is restarted..");
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
    }
    else if(pc.at(cmbno)->currentIndex() == 1)  {
        pcstring = "ssh -t 10.1.10." + QString::number(sn) + " ssh -t iac svc -t /service/imp/";
        ui->info->setText("INFO:    IAC of 3D00" + QString::number(sn) + " is restarted..");
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
    }
    else if(pc.at(cmbno)->currentIndex() == 2)  {
        pcstring = "ssh -t 10.1.10." + QString::number(sn) + " ssh -t dpp svc -t /service/dpp/";
        ui->info->setText("INFO:    DPP of 3D00" + QString::number(sn) + " is restarted..");
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
    }
    else if(pc.at(cmbno)->currentIndex() == 3)  {

        pcstring = "ssh -t 10.1.10." + QString::number(sn) + " ssh -t dpp svc -t /service/dpp/";
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);

        pcstring = "ssh -t 10.1.10." + QString::number(sn) + " ssh -t iac svc -t /service/imp/";
        p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);

        pcstring = "ssh -t 10.1.10." + QString::number(sn) + " ssh -t scc svc -t /service/scs/";
        ui->info->setText("INFO:    All computers of 3D00" + QString::number(sn) + " is restarted..");
        p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
    }

    QTime dietime = QTime::currentTime().addSecs(10);
    while(QTime::currentTime() < dietime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    ui->info->setText("INFO:");
}
