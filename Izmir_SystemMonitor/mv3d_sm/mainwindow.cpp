#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCloseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::setContentsMargins(0,0,0,-20);
    callCount = 0;
    prepareProcess();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::prepareProcess()
{
    main_worker = new mythread(this);
    d_systic = new dialog_systic();
    d_chiller = new dialog_chiller();
    d_dcb = new dialog_dcb();
    d_dcb_2 = new dialog_dcb();
    d_dcb_3 = new dialog_dcb();
    d_dcb_4 = new dialog_dcb();
    d_dcb_5 = new dialog_dcb();
    d_dcb_6 = new dialog_dcb();
    d_dcb_7 = new dialog_dcb();
    d_hvps = new dialog_hvps();
    d_hvps_2 = new dialog_hvps();
    d_hvps_3 = new dialog_hvps();
    //Show must go on
    connect(main_worker, SIGNAL(sy_showStarter()), this, SLOT(sy_showBegin()));
    connect(main_worker, SIGNAL(ch_showStarter()), this, SLOT(ch_showBegin()));
    connect(main_worker, SIGNAL(dc_showStarter()), this, SLOT(dc_showBegin()));
    connect(main_worker, SIGNAL(hv_showStarter()), this, SLOT(hv_showBegin()));
    connect(main_worker, SIGNAL(mainStatus(int)), this, SLOT(mv3d_status(int)));
    //DCB dialog connectors
    connect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_2, SLOT(dcb_taker(QString, int)));
    connect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_3, SLOT(dcb_taker(QString, int)));
    connect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_4, SLOT(dcb_taker(QString, int)));
    connect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_5, SLOT(dcb_taker(QString, int)));
    connect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_6, SLOT(dcb_taker(QString, int)));
    connect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_7, SLOT(dcb_taker(QString, int)));
    //HVPS dialog connectors
    connect(d_hvps->hv_worker, SIGNAL(hv_sender(QString, int)), d_hvps_2, SLOT(hv_taker(QString, int)));
    connect(d_hvps->hv_worker, SIGNAL(hv_sender(QString, int)), d_hvps_3, SLOT(hv_taker(QString, int)));
    //    FAULT SIGNALS
    connect(d_chiller, SIGNAL(chfaultState(int, int)), this, SLOT(getSignal(int, int)));
    connect(d_hvps, SIGNAL(hvfaultState(int, int)), this, SLOT(getSignal(int, int)));
    connect(d_dcb, SIGNAL(dcfaultState(int, int)), this, SLOT(getSignal(int, int)));
    connect(d_systic, SIGNAL(syfaultState(int, int)), this, SLOT(getSignal(int, int)));
}

void MainWindow::stopProcess()
{
    main_worker->runThread = false;
    d_systic->sy_worker->runThread = false;
    d_dcb->dcb_worker->runThread = false;
    d_hvps->hv_worker->runThread = false;
    d_chiller->ch_worker->runThread = false;

    d_hvps->disableSeason();
    d_hvps_2->disableSeason();
    d_hvps_3->disableSeason();

    disconnect(main_worker, SIGNAL(sy_showStarter()), this, SLOT(sy_showBegin()));
    disconnect(main_worker, SIGNAL(ch_showStarter()), this, SLOT(ch_showBegin()));
    disconnect(main_worker, SIGNAL(dc_showStarter()), this, SLOT(dc_showBegin()));
    disconnect(main_worker, SIGNAL(hv_showStarter()), this, SLOT(hv_showBegin()));
    disconnect(main_worker, SIGNAL(mainStatus(int)), this, SLOT(mv3d_status(int)));

    disconnect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_2, SLOT(dcb_taker(QString, int)));
    disconnect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_3, SLOT(dcb_taker(QString, int)));
    disconnect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_4, SLOT(dcb_taker(QString, int)));
    disconnect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_5, SLOT(dcb_taker(QString, int)));
    disconnect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_6, SLOT(dcb_taker(QString, int)));
    disconnect(d_dcb->dcb_worker, SIGNAL(dcb_sender(QString, int)), d_dcb_7, SLOT(dcb_taker(QString, int)));

    disconnect(d_hvps->hv_worker, SIGNAL(hv_sender(QString, int)), d_hvps_2, SLOT(hv_taker(QString, int)));
    disconnect(d_hvps->hv_worker, SIGNAL(hv_sender(QString, int)), d_hvps_3, SLOT(hv_taker(QString, int)));

    disconnect(d_chiller, SIGNAL(chfaultState(int, int)), this, SLOT(getSignal(int, int)));
    disconnect(d_hvps, SIGNAL(hvfaultState(int, int)), this, SLOT(getSignal(int, int)));
    disconnect(d_dcb, SIGNAL(dcfaultState(int, int)), this, SLOT(getSignal(int, int)));
    disconnect(d_systic, SIGNAL(syfaultState(int, int)), this, SLOT(getSignal(int, int)));

    while(main_worker->isRunning() || d_systic->sy_worker->isRunning() || d_dcb->dcb_worker->isRunning() || d_hvps->hv_worker->isRunning() || d_chiller->ch_worker->isRunning())    {}
    main_worker->terminate();
    d_systic->sy_worker->terminate();
    d_dcb->dcb_worker->terminate();
    d_hvps->hv_worker->terminate();
    d_chiller->ch_worker->terminate();
    d_dcb->close();
    d_dcb_2->close();
    d_dcb_3->close();
    d_dcb_4->close();
    d_dcb_5->close();
    d_dcb_6->close();
    d_dcb_7->close();
    d_systic->close();
    d_hvps->close();
    d_hvps_2->close();
    d_hvps_3->close();
    d_chiller->close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    stopProcess();
    event->accept();
}

void MainWindow::getSignal(int fstate, int button)
{
    QList<QPushButton *>butonNo;
    butonNo.append(ui->button_chiller); //0

    butonNo.append(ui->button_sdb); //1
    butonNo.append(ui->button_systic); //2

    butonNo.append(ui->button_dcb_1); //3
    butonNo.append(ui->button_dcb_2); //4
    butonNo.append(ui->button_dcb_3); //5
    butonNo.append(ui->button_dcb_4); //6
    butonNo.append(ui->button_dcb_5); //7
    butonNo.append(ui->button_dcb_6); //8
    butonNo.append(ui->button_dcb_7); //9

    butonNo.append(ui->button_hvps1); //10
    butonNo.append(ui->button_hvps2); //11
    butonNo.append(ui->button_hvps3); //12

    butonNo.append(ui->button_pdu_right); //13
    butonNo.append(ui->button_pdu_left); //14

    if(fstate == 0)
        butonNo.at(button)->setStyleSheet(butonNo.at(button)->styleSheet().remove("border: 0px;").remove("border: 2px solid yellow;").remove("border: 2px solid red;") + "border: 3px solid red;");
    else if(fstate == 1)
        butonNo.at(button)->setStyleSheet(butonNo.at(button)->styleSheet().remove("border: 0px;").remove("border: 2px solid yellow;").remove("border: 2px solid red;") + "border: 0px;");
    else
        butonNo.at(button)->setStyleSheet(butonNo.at(button)->styleSheet().remove("border: 0px;").remove("border: 2px solid yellow;").remove("border: 2px solid red;") + "border: 3px solid yellow;");
}

void MainWindow::ch_showBegin()
{
    d_chiller->ch_worker->runThread = true;;
    d_chiller->ch_worker->start();
}

void MainWindow::dc_showBegin()
{
    d_dcb->dcb_worker->runThread = true;
    d_dcb->dcb_worker->start();
}

void MainWindow::hv_showBegin()
{
    d_hvps->hv_worker->runThread = true;
    d_hvps->hv_worker->start();
    d_hvps->enableSeason();
    d_hvps_2->enableSeason();
    d_hvps_3->enableSeason();
}

void MainWindow::sy_showBegin()
{
    d_systic->sy_worker->runThread = true;
    d_systic->sy_worker->start();
}

void MainWindow::on_call_Button_clicked()
{
    if(callCount > 0) {
        stopProcess();
        prepareProcess();
    }
    main_worker->mv3d_no = ui->mv3d_comboBox->currentText().remove("3D00").toInt();
    d_hvps->mv3d_no = main_worker->mv3d_no;
    d_hvps_2->mv3d_no = main_worker->mv3d_no;
    d_hvps_3->mv3d_no = main_worker->mv3d_no;

    mv3d_status(2);
    main_worker->start();
    callCount++;
}

void MainWindow::on_button_hvps1_clicked()
{
    d_hvps->hvOpenTab(0);
}

void MainWindow::on_button_hvps2_clicked()
{
    d_hvps_2->hvOpenTab(1);
}

void MainWindow::on_button_hvps3_clicked()
{
    d_hvps_3->hvOpenTab(2);
}

void MainWindow::on_button_sdb_clicked()
{
    d_systic->show();
}

void MainWindow::on_button_systic_clicked()
{
    d_systic->show();
}

void MainWindow::on_button_pdu_right_clicked()
{
    d_systic->show();
}

void MainWindow::on_button_pdu_left_clicked()
{
    d_systic->show();
}

void MainWindow::on_button_chiller_clicked()
{
    d_chiller->show();
}

void MainWindow::on_button_dcb_1_clicked()
{
    d_dcb->dcbOpenTab(0);
}

void MainWindow::on_button_dcb_2_clicked()
{
    d_dcb_2->dcbOpenTab(1);
}

void MainWindow::on_button_dcb_3_clicked()
{
    d_dcb_3->dcbOpenTab(2);
}

void MainWindow::on_button_dcb_4_clicked()
{
    d_dcb_4->dcbOpenTab(3);
}

void MainWindow::on_button_dcb_5_clicked()
{
    d_dcb_5->dcbOpenTab(4);
}

void MainWindow::on_button_dcb_6_clicked()
{
    d_dcb_6->dcbOpenTab(5);
}

void MainWindow::on_button_dcb_7_clicked()
{
    d_dcb_7->dcbOpenTab(6);
}

void MainWindow::mv3d_status(int current)   {
    if(current == 0)    {
    ui->state_label->setText("STOPPED");
    ui->state_label->setStyleSheet("color: red");
    }
    else if(current == 1)   {
    ui->state_label->setText("RUNNING");
    ui->state_label->setStyleSheet("color: rgb(0, 155, 0);");
    }
    else    {
    ui->state_label->setText("FETCHING");
    ui->mv3dNo_label->setText("                          " + ui->mv3d_comboBox->currentText());
    ui->state_label->setStyleSheet("color: orange;");
    }
}

void MainWindow::on_stop_button_clicked()
{
    mv3d_status(0);
    stopProcess();
}
