//This interface shows machine faults, status and logs of MV3D and allows to restart computers of MV3Ds
//Created by Alper SAGLIK
//Created for IGA Airport

#include "alper.h"
#include "ui_alper.h"
#include <iostream>
#include <QString>
#include <QComboBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include <QDateTime>
#include <QPushButton>
#include <QPixmap>
#include <QLabel>
#include <QTableWidget>
#include <QScrollBar>
#include <QStringList>
#include <QCloseEvent>

QList<QComboBox *>pc;
QString a5[27] = " ";
QString b5[27] = " ";
QString c5[27] = " ";
int d[27] = {0};
bool bl[27] = {false};
int cnt[27] = {0};
int r = 0;
bool checked = true;
QDateTime deyt[27];
QDateTime deyt1[27];
alper::alper(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::alper)
{
    ui->setupUi(this);
    ui->info->setText("INFO:");
    QPixmap background(":/imag/leidos.png");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);
    mthread = new mythread(this);
    connect(mthread, SIGNAL(endlessloop(int,int, QDateTime, QString, QString)), this, SLOT(writer(int,int, QDateTime, QString, QString)));
    mthread->start();
    ui->FAULTS->setFloating(true);
    ui->FAULTS->hide();
    ui->bagdec->hide();
    ui->faulttable->setColumnWidth(0,95);
    ui->faulttable->setColumnWidth(1,180);
    ui->faulttable->setColumnWidth(2,170);
    ui->faulttable->setColumnWidth(3,170);
    ui->faulttable->setColumnWidth(4,330);
    ui->disp_faulttable->setColumnWidth(0,100);
    ui->disp_faulttable->setColumnWidth(1,95);
    ui->disp_faulttable->setColumnWidth(2,170);
    ui->disp_faulttable->setColumnWidth(3,155);
    ui->disp_faulttable->setColumnWidth(4,155);
    ui->disp_faulttable->setColumnWidth(5,270);
    ui->grepperbox->setEnabled(true);
    ui->manuelcombo->setEnabled(false);
    ui->manuellabel->setEnabled(false);
    ui->quickactive->setChecked(true);
    ui->faulttable->horizontalHeader()->show();
    ui->disp_faulttable->horizontalHeader()->show();
}

void alper::stopProcess()   {
    mthread->runThread = false;
    while(mthread->isRunning()) {}
    disconnect(mthread, SIGNAL(endlessloop(int,int, QDateTime, QString, QString)), this, SLOT(writer(int,int, QDateTime, QString, QString)));
    mthread->terminate();
}

void alper::closeEvent(QCloseEvent *event)
{
    stopProcess();
    event->accept();
}
void alper::writer(int mv3d, int ed, QDateTime date, QString log, QString log1)
{
    pc.append(ui->comboBox_8);
    pc.append(ui->comboBox_13);
    pc.append(ui->comboBox_15);
    pc.append(ui->comboBox_10);
    pc.append(ui->comboBox_9);
    pc.append(ui->comboBox_18);
    pc.append(ui->comboBox_7);
    pc.append(ui->comboBox_16);
    pc.append(ui->comboBox_17);
    pc.append(ui->comboBox_14);
    pc.append(ui->comboBox_12);
    pc.append(ui->comboBox_11);
    pc.append(ui->comboBox_3);
    pc.append(ui->comboBox_4);
    pc.append(ui->comboBox);
    pc.append(ui->comboBox_5);
    pc.append(ui->comboBox_6);
    pc.append(ui->comboBox_2);
    pc.append(ui->comboBox_23);
    pc.append(ui->comboBox_24);
    pc.append(ui->comboBox_21);
    pc.append(ui->comboBox_19);
    pc.append(ui->comboBox_22);
    pc.append(ui->comboBox_20);

    QList<QPushButton *>rstbtn;
    rstbtn.append(ui->pushButton_8);
    rstbtn.append(ui->pushButton_13);
    rstbtn.append(ui->pushButton_15);
    rstbtn.append(ui->pushButton_10);
    rstbtn.append(ui->pushButton_9);
    rstbtn.append(ui->pushButton_18);
    rstbtn.append(ui->pushButton_7);
    rstbtn.append(ui->pushButton_16);
    rstbtn.append(ui->pushButton_17);
    rstbtn.append(ui->pushButton_14);
    rstbtn.append(ui->pushButton_12);
    rstbtn.append(ui->pushButton_11);
    rstbtn.append(ui->pushButton_3);
    rstbtn.append(ui->pushButton_4);
    rstbtn.append(ui->pushButton);
    rstbtn.append(ui->pushButton_5);
    rstbtn.append(ui->pushButton_6);
    rstbtn.append(ui->pushButton_2);
    rstbtn.append(ui->pushButton_23);
    rstbtn.append(ui->pushButton_24);
    rstbtn.append(ui->pushButton_21);
    rstbtn.append(ui->pushButton_19);
    rstbtn.append(ui->pushButton_22);
    rstbtn.append(ui->pushButton_20);

    QList<QLabel *>comp;
    comp.append(ui->com_8);
    comp.append(ui->com_13);
    comp.append(ui->com_15);
    comp.append(ui->com_10);
    comp.append(ui->com_9);
    comp.append(ui->com_18);
    comp.append(ui->com_7);
    comp.append(ui->com_16);
    comp.append(ui->com_17);
    comp.append(ui->com_14);
    comp.append(ui->com_12);
    comp.append(ui->com_11);
    comp.append(ui->com_3);
    comp.append(ui->com_4);
    comp.append(ui->com);
    comp.append(ui->com_5);
    comp.append(ui->com_6);
    comp.append(ui->com_2);
    comp.append(ui->com_23);
    comp.append(ui->com_24);
    comp.append(ui->com_21);
    comp.append(ui->com_19);
    comp.append(ui->com_22);
    comp.append(ui->com_20);

    QList<QLabel *>fault;
    fault.append(ui->ED_10_FAULT);
    fault.append(ui->ED_15_FAULT);
    fault.append(ui->ED_17_FAULT);
    fault.append(ui->ED_12_FAULT);
    fault.append(ui->ED_11_FAULT);
    fault.append(ui->ED_20_FAULT);
    fault.append(ui->ED_9_FAULT);
    fault.append(ui->ED_18_FAULT);
    fault.append(ui->ED_19_FAULT);
    fault.append(ui->ED_16_FAULT);
    fault.append(ui->ED_14_FAULT);
    fault.append(ui->ED_13_FAULT);
    fault.append(ui->ED_3_FAULT);
    fault.append(ui->ED_4_FAULT);
    fault.append(ui->ED_1_FAULT);
    fault.append(ui->ED_5_FAULT);
    fault.append(ui->ED_6_FAULT);
    fault.append(ui->ED_2_FAULT);
    fault.append(ui->ED_27_FAULT);
    fault.append(ui->ED_28_FAULT);
    fault.append(ui->ED_25_FAULT);
    fault.append(ui->ED_23_FAULT);
    fault.append(ui->ED_26_FAULT);
    fault.append(ui->ED_24_FAULT);

    QList<QLabel *>state;
    state.append(ui->ED_10_STATE);
    state.append(ui->ED_15_STATE);
    state.append(ui->ED_17_STATE);
    state.append(ui->ED_12_STATE);
    state.append(ui->ED_11_STATE);
    state.append(ui->ED_20_STATE);
    state.append(ui->ED_9_STATE);
    state.append(ui->ED_18_STATE);
    state.append(ui->ED_19_STATE);
    state.append(ui->ED_16_STATE);
    state.append(ui->ED_14_STATE);
    state.append(ui->ED_13_STATE);
    state.append(ui->ED_3_STATE);
    state.append(ui->ED_4_STATE);
    state.append(ui->ED_1_STATE);
    state.append(ui->ED_5_STATE);
    state.append(ui->ED_6_STATE);
    state.append(ui->ED_2_STATE);
    state.append(ui->ED_27_STATE);
    state.append(ui->ED_28_STATE);
    state.append(ui->ED_25_STATE);
    state.append(ui->ED_23_STATE);
    state.append(ui->ED_26_STATE);
    state.append(ui->ED_24_STATE);

    QList<QLabel *>m_no;
    m_no.append(ui->ED_10);  //0
    m_no.append(ui->ED_15);  //1
    m_no.append(ui->ED_17);  //2
    m_no.append(ui->ED_12);  //3
    m_no.append(ui->ED_11);  //4
    m_no.append(ui->ED_20);  //5
    m_no.append(ui->ED_9);   //6
    m_no.append(ui->ED_18);  //7
    m_no.append(ui->ED_19);  //8
    m_no.append(ui->ED_16);  //9
    m_no.append(ui->ED_14);  //10
    m_no.append(ui->ED_13);  //11
    m_no.append(ui->ED_3);   //12
    m_no.append(ui->ED_4);   //13
    m_no.append(ui->ED_1);   //14
    m_no.append(ui->ED_5);   //15
    m_no.append(ui->ED_6);   //16
    m_no.append(ui->ED_2);   //17
    m_no.append(ui->ED_27);  //18
    m_no.append(ui->ED_28);  //19
    m_no.append(ui->ED_25);  //20
    m_no.append(ui->ED_23);  //21
    m_no.append(ui->ED_26);  //22
    m_no.append(ui->ED_24);  //23

    ui->dateTimeEdit->setDateTime(date);

    state.at(ed)->setText("STATE: " + log1);
    fault.at(ed)->setText("FAULT: " + log);
    ui->crntmac->setText("CURRENT MV3D: 3D00" + QString::number(mv3d));
    QFile faultcsv("//home//eds_cm//.eds_cs_files//log_eds_control_station//.mv3d_faults//faults.csv");
    if(!faultcsv.open(QIODevice::ReadWrite | QIODevice::Append))
        qDebug() << "File Not Found";

    QTextStream output(&faultcsv);

    if(log1 == "FAULT" || log1 == "IDLE" || log1 == "FLUSH_TUNNEL" || log == "BMS_ENTRANCE_BAG_JAM@" || log == "DPP_HIGH_WATERMARK" || log == "IAC_SUBSYS_MISSING" || log1 == "PLC_CONNECTION_LOSS" || log == "DPP_SUBSYS_MISSING" || log == "LIGHT_CURTAIN@" || log == "DARKCAL_REQUESTED" || log1 == "ILOCK" || log == "ILOCK" || log == "ILOCK@" || log == "ESTOP")    {
        m_no.at(ed)->setStyleSheet("background-color:red");
        comp.at(ed)->setStyleSheet("background-color:red");
        fault.at(ed)->setStyleSheet("background-color:rbg(5,85,250)");
        state.at(ed)->setStyleSheet("background-color:rbg(5,85,250)");
        pc.at(ed)->setStyleSheet("background-color:rbg(5,85,250)");
        rstbtn.at(ed)->setStyleSheet("color:white; background-color:red");
        cnt[ed]++;
        if(log != a5[ed] || log1 != c5[ed])    {
            if(bl[ed])  {
                QString dt1 = date.toString("dd.MM.yyyy hh:mm:ss");
                ui->faulttable->setItem(d[ed], 3, new QTableWidgetItem(dt1));
                deyt1[ed] = date;
                int yu = deyt[ed].secsTo(deyt1[ed]);
                int day = yu / 86400;
                int hour = (yu % 86400) / 3600;
                int minute = (yu % 3600) / 60;
                int sec = yu % 60;
                ui->faulttable->setItem(d[ed], 4, new QTableWidgetItem(QString::number(day) + " days,  " +  QString::number(hour) + " hours,  " + QString::number(minute) + " minutes,  " +  QString::number(sec) + " seconds"));
                QString last = (deyt[ed].toString("dd-MM-yyyy") + ";" + "3D00" + QString::number(mv3d) + ";" + b5[ed] + ";" + deyt[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + deyt1[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + QString::number(day) + " days " + QString::number(hour) + " hours " + QString::number(minute) + " minutes " + QString::number(sec) + " seconds.");
                output << last << "\n";
                cnt[ed] = 1;
            }
            ui->faulttable->insertRow(r);
            QString dt = date.toString("dd.MM.yyyy hh:mm:ss");
            ui->faulttable->setItem(r, 0, new QTableWidgetItem("3D00" + QString::number(mv3d)));
            ui->faulttable->setItem(r, 1, new QTableWidgetItem(log));
            ui->faulttable->setItem(r, 2, new QTableWidgetItem(dt));
            d[ed] = r;
            r++;
            deyt[ed] = date;
        }

        if(checked && cnt[ed] % 5 == 1)    {
            if(log == a5[ed])
                system("beep -f 400 -l 75");
            else
                system("beep -f 1000 -l 100");
        }
        b5[ed] = log;
        bl[ed] = true;
    }

    else if(log1 == "STANDBY" || log1 == "DIEBACK")  {
        m_no.at(ed)->setStyleSheet("background-color:cyan");
        comp.at(ed)->setStyleSheet("background-color:cyan");
        fault.at(ed)->setStyleSheet("background-color:skyblue");
        state.at(ed)->setStyleSheet("background-color:skyblue");
        pc.at(ed)->setStyleSheet("background-color:skyblue");
        rstbtn.at(ed)->setStyleSheet("color:black; background-color:skyblue");
        if(bl[ed])  {
            QString dt1 = date.toString("dd.MM.yyyy hh:mm:ss");
            ui->faulttable->setItem(d[ed], 3, new QTableWidgetItem(dt1));
            bl[ed] = false;
            deyt1[ed] = date;
            int yu = deyt[ed].secsTo(deyt1[ed]);
            int day = yu / 86400;
            int hour = (yu % 86400) / 3600;
            int minute = (yu % 3600) / 60;
            int sec = yu % 60;
            ui->faulttable->setItem(d[ed], 4, new QTableWidgetItem(QString::number(day) + " days,  " +  QString::number(hour) + " hours,  " + QString::number(minute) + " minutes,  " +  QString::number(sec) + " seconds"));
            QString last = (deyt[ed].toString("dd-MM-yyyy") + ";" + "3D00" + QString::number(mv3d) + ";" + b5[ed] + ";" + deyt[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + deyt1[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + QString::number(day) + " days " + QString::number(hour) + " hours " + QString::number(minute) + " minutes " + QString::number(sec) + " seconds.");
            output << last << "\n";
            cnt[ed] = 0;
        }
    }

    else if(log1 == "SCAN") {
        m_no.at(ed)->setStyleSheet("background-color:lime");
        comp.at(ed)->setStyleSheet("background-color:lime");
        fault.at(ed)->setStyleSheet("background-color:rbg(145,200,190)");
        state.at(ed)->setStyleSheet("background-color:rbg(145,200,190)");
        pc.at(ed)->setStyleSheet("background-color:rbg(145,200,190)");
        rstbtn.at(ed)->setStyleSheet("color:black; background-color:rbg(145,200,190)");
        if(bl[ed])  {
            QString dt1 = date.toString("dd.MM.yyyy hh:mm:ss");
            ui->faulttable->setItem(d[ed], 3, new QTableWidgetItem(dt1));
            bl[ed] = false;
            deyt1[ed] = date;
            int yu = deyt[ed].secsTo(deyt1[ed]);
            int day = yu / 86400;
            int hour = (yu % 86400) / 3600;
            int minute = (yu % 3600) / 60;
            int sec = yu % 60;
            ui->faulttable->setItem(d[ed], 4, new QTableWidgetItem(QString::number(day) + " days,  " +  QString::number(hour) + " hours,  " + QString::number(minute) + " minutes,  " +  QString::number(sec) + " seconds"));
            QString last = (deyt[ed].toString("dd-MM-yyyy") + ";" + "3D00" + QString::number(mv3d) + ";" + b5[ed] + ";" + deyt[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + deyt1[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + QString::number(day) + " days " + QString::number(hour) + " hours " + QString::number(minute) + " minutes " + QString::number(sec) + " seconds.");
            output << last << "\n";
            cnt[ed] = 0;
        }
    }

    else if(log1 == "STARTUP" || log1 == "SYSTEM_CHECK" || log1 == "DIAGNOSTIC")    {
        m_no.at(ed)->setStyleSheet("background-color:gold");
        comp.at(ed)->setStyleSheet("background-color:gold");
        fault.at(ed)->setStyleSheet("background-color:rbg(50,120,250)");
        state.at(ed)->setStyleSheet("background-color:rbg(50,120,250)");
        pc.at(ed)->setStyleSheet("background-color:rbg(50,120,250)");
        rstbtn.at(ed)->setStyleSheet("color:black; background-color:rbg(50,120,250)");
        if(c5[ed] == "FAULT" || c5[ed] == "IDLE" || c5[ed] == "FLUSH_TUNNEL")  {
            if(a5[ed] == "NONE")    {
                QString dt1 = date.toString("dd.MM.yyyy hh:mm:ss");
                ui->faulttable->setItem(d[ed], 3, new QTableWidgetItem(dt1));
                bl[ed] = false;
                deyt1[ed] = date;
                int yu = deyt[ed].secsTo(deyt1[ed]);
                int day = yu / 86400;
                int hour = (yu % 86400) / 3600;
                int minute = (yu % 3600) / 60;
                int sec = yu % 60;
                ui->faulttable->setItem(d[ed], 4, new QTableWidgetItem(QString::number(day) + " days,  " +  QString::number(hour) + " hours,  " + QString::number(minute) + " minutes,  " +  QString::number(sec) + " seconds"));
                QString last = (deyt[ed].toString("dd-MM-yyyy") + ";" + "3D00" + QString::number(mv3d) + ";" + b5[ed] + ";" + deyt[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + deyt1[ed].toString("dd.MM.yyyy hh:mm:ss") + ";" + QString::number(day) + " days " + QString::number(hour) + " hours " + QString::number(minute) + " minutes " + QString::number(sec) + " seconds.");
                output << last << "\n";
                cnt[ed] = 0;
            }
        }
    }

    else    {
        m_no.at(ed)->setStyleSheet("background-color:grey");
        comp.at(ed)->setStyleSheet("background-color:grey");
        fault.at(ed)->setStyleSheet("background-color:silver");
        fault.at(ed)->setText("No data to read");
        state.at(ed)->setStyleSheet("background-color:silver");
        state.at(ed)->setText("No data to read");
        pc.at(ed)->setStyleSheet("background-color:silver");
        rstbtn.at(ed)->setStyleSheet("color:black; background-color:grey");
        cnt[ed] = 0;
    }
    a5[ed] = log;
    c5[ed] = log1;
}

alper::~alper()
{
    delete ui;
}

void alper::reset(int cmbno, int sn)
{
    QString pcstring;
    if(pc.at(cmbno)->currentIndex() == 0)   {
        pcstring = "ssh -qo ConnectTimeout=1 -t 10.1.10." + QString::number(sn) + " ssh -qo ConnectTimeout=1 -t scc svc -k /service/scs/";
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
        ui->info->setText("INFO:    SCC service of 3D00" + QString::number(sn) + " is restarted..");
    }
    else if(pc.at(cmbno)->currentIndex() == 1)  {
        pcstring = "ssh -qo ConnectTimeout=1 -t 10.1.10." + QString::number(sn) + " ssh -qo ConnectTimeout=1 -t iac svc -k /service/imp/";
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
        ui->info->setText("INFO:    IAC service of 3D00" + QString::number(sn) + " is restarted..");
    }
    else if(pc.at(cmbno)->currentIndex() == 2)  {
        pcstring = "ssh -qo ConnectTimeout=1 -t 10.1.10." + QString::number(sn) + " ssh -qo ConnectTimeout=1 -t dpp svc -k /service/dpp/";
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);
        ui->info->setText("INFO:    DPP service of 3D00" + QString::number(sn) + " is restarted..");
    }
    else if(pc.at(cmbno)->currentIndex() == 3)  {
        pcstring = "ssh -qo ConnectTimeout=1 -t 10.1.10." + QString::number(sn) + " ssh -qo ConnectTimeout=1 -t dpp svc -k /service/dpp/";
        char* p = new char[pcstring.length() + 1];
        strcpy(p, pcstring.toLatin1().constData());
        system(p);

        pcstring = "ssh -qo ConnectTimeout=1 -t 10.1.10." + QString::number(sn) + " ssh -qo ConnectTimeout=1 -t iac svc -k /service/imp/";
        char* p1 = new char[pcstring.length() + 1];
        strcpy(p1, pcstring.toLatin1().constData());
        system(p1);

        pcstring = "ssh -qo ConnectTimeout=1 -t 10.1.10." + QString::number(sn) + " ssh -qo ConnectTimeout=1 -t scc svc -k /service/scs/";
        char* p2 = new char[pcstring.length() + 1];
        strcpy(p2, pcstring.toLatin1().constData());
        system(p2);
        ui->info->setText("INFO:    All computer services of 3D00" + QString::number(sn) + " are restarted..");
    }
    QTime dietime = QTime::currentTime().addSecs(10);
    while(QTime::currentTime() < dietime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    ui->info->setText("INFO:");
}

void alper::con_lcc(int mv_sn)
{
    QString conn = "ssh -qo ConnectTimeout=1 -Y 10.1.10." + QString::number(mv_sn) + " sed -i '/scc/d' /root/.ssh/known_hosts; nohup  ssh -qo ConnectTimeout=1 -Y 10.1.10." + QString::number(mv_sn) + " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/lcc & disown";
    char* con_char = new char[conn.length() + 1];
    strcpy(con_char, conn.toLatin1().constData());
    system(con_char);
}


void alper::on_pushButton_clicked()
{
    reset(14, 37);
}

void alper::on_pushButton_2_clicked()
{
    reset(17, 40);
}

void alper::on_pushButton_3_clicked()
{
    reset(12, 35);
}

void alper::on_pushButton_4_clicked()
{
    reset(13, 36);
}

void alper::on_pushButton_5_clicked()
{
    reset(15, 38);
}

void alper::on_pushButton_6_clicked()
{
    reset(16, 39);
}

void alper::on_pushButton_7_clicked()
{
    reset(6, 25);
}

void alper::on_pushButton_8_clicked()
{
    reset(0, 17);
}

void alper::on_pushButton_9_clicked()
{
    reset(4, 23);
}

void alper::on_pushButton_10_clicked()
{
    reset(3, 22);
}

void alper::on_pushButton_11_clicked()
{
    reset(11, 33);
}

void alper::on_pushButton_12_clicked()
{
    reset(10, 32);
}

void alper::on_pushButton_13_clicked()
{
    reset(1, 20);
}

void alper::on_pushButton_14_clicked()
{
    reset(9, 28);
}

void alper::on_pushButton_15_clicked()
{
    reset(2, 21);
}

void alper::on_pushButton_16_clicked()
{
    reset(7, 26);
}

void alper::on_pushButton_17_clicked()
{
    reset(8, 27);
}

void alper::on_pushButton_18_clicked()
{
    reset(5, 24);
}

void alper::on_pushButton_19_clicked()
{
    reset(21, 44);
}
void alper::on_pushButton_20_clicked()
{
    reset(23, 46);
}

void alper::on_pushButton_21_clicked()
{
    reset(20, 43);
}

void alper::on_pushButton_22_clicked()
{
    reset(22, 45);
}

void alper::on_pushButton_23_clicked()
{
    reset(18, 41);
}

void alper::on_pushButton_24_clicked()
{
    reset(19, 42);
}

void alper::on_fault_screen_button_clicked()
{
    ui->faultstartdate->setDateTime(QDateTime::currentDateTime());
    ui->faultenddate->setDateTime(QDateTime::currentDateTime());
    ui->faultstartdate_disp->setDateTime(QDateTime::currentDateTime());
    ui->faultenddate_disp->setDateTime(QDateTime::currentDateTime());
    ui->FAULTS->show();
}

void alper::on_terminal_clicked()
{
    system("xterm & disown");  //gnome-terminal command is better than xterm but this operating system doesnt include gnome-terminal command
}

void alper::on_bag_finder_bt_clicked()
{
    //    system("xterm -ls /home/eds_cm/.eds_cs_files/bag_finder -xrm 'XTerm.vt100.allowTitleOps: false' -T 'BAG FINDER' & disown");
    system("pkill -f bag_finder");
    system("nohup /home/eds_cm/.eds_cs_files/bag_finder & disown");
}

void alper::on_screenshot_bt_clicked()
{
    system("scrot /tmp/ecs_screenshots/$(date +'screenshot_%F__%H%M%S.png')");
    ui->info->setText("INFO:  Screenshot has saved to /tmp/ecs_screenshots/");
    QTime dietime = QTime::currentTime().addSecs(10);
    while(QTime::currentTime() < dietime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    ui->info->setText("INFO:");
}

void alper::on_call_button_clicked()
{
    ui->bagdecision->clear();
    QDateTime date = ui->grepdate->dateTime();
    QString eds = ui->grep_mv3d->currentText().remove("3D00");
    QString dt = "";
    QString fire = "";
    QString log = "";
    int count= 0;
    if(ui->log_selection_box->currentIndex() == 0)  {
        log = "tail -n 10000";
        count = 1;
    }
    else if(ui->log_selection_box->currentIndex() == 1) {
        log = "less";
        count = 2;
    }
    else if(ui->log_selection_box->currentIndex() == 2) {
        log = "less";
        count = 10;
    }
    if(ui->manuelactive->isChecked())    {
        QTextDocument *manueltext = ui->manuellabel->document();
        QString html = manueltext->toPlainText();
        if (ui->manuelcombo->currentIndex() == 0)    {           //DIAGSERV
            dt = date.toString("yyyy.MM.dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/diag/trace/diagserv_* | tail -" + QString::number(count) + ") | grep '" + dt + "' | grep -i '" + html + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if (ui->manuelcombo->currentIndex() == 1)    {      //BHS LOG
            dt = date.toString("ddd MMM dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/bhs.log* | tail -" + QString::number(count) + ") | grep '" + dt + "' | grep -i '" + html + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if (ui->manuelcombo->currentIndex() == 2)    {      //BMS LOG
            dt = date.toString("ddd MMM dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/bms.log* | tail -" + QString::number(count) + ") | grep '" + dt + "' | grep -i '" + html + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if (ui->manuelcombo->currentIndex() == 3)    {      //BIT LOG
            dt = date.toString("yyyy.MM.dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/diag/bit/bit_* | tail -" + QString::number(count) + ") | grep '" + dt + "' | grep -i '" + html + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else    {                                                //SCS LOG
            dt = date.toString("ddd MMM dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/scs.log* | tail -" + QString::number(count) + ") | grep '" + dt + "' | grep -i '" + html + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
    }
    else    {
        if (ui->grepperbox->currentIndex() == 0)    {           //BAG DECISION
            dt = date.toString("ddd MMM dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/bhs.log* | tail -" + QString::number(count) + ") | grep 'bag disposition' | grep '" + dt + "' | sed -e 's/- 1;/- 1 - MACHINE ALARM;/' -e 's/- 2;/- 2 - MACHINE CLEAR;/' -e 's/- 3;/- 3 - BAG NOT ANALYZED;/' -e 's/- 4;/- 4 - PENDING DECISION;/' -e 's/- 5;/- 5 - TIMEOUT;/' -e 's/- 6;/- 6 - BAG SPACING ERROR;/' -e 's/- 7;/- 7 - FORCE REJECTED;/' -e 's/- 8;/- 8 - EDS ID PENDING;/' -e 's/- 9;/- 9 - EDS EXIT MISS-TRACK;/' -e 's/- 11;/- 11 - OPERATOR ALARM;/' -e 's/- 12;/- 12 - OPERATOR CLEAR;/' -e 's/- 13;/- 13 - OPERATOR OBVIOUS THREAT;/' -e 's/ \\[bhs.*.disposition/- Bag Decision/' -e 's/ \\[bhs.*.for bag/- Bag ID\\:/' -e 's/IATA decimal.*//''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if(ui->grepperbox->currentIndex() == 1)    {       //ARRAY
            dt = date.toString("yyyy.MM.dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/diag/trace/diagserv_* | tail -" + QString::number(count) + ") | grep -E 'BDM|Array' | grep '" + dt + "' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if(ui->grepperbox->currentIndex() == 2)    {       //Flow Switch
            dt = date.toString("yyyy.MM.dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/diag/trace/diagserv_* | tail -" + QString::number(count) + ") | grep Flow | grep '" + dt + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if(ui->grepperbox->currentIndex() == 3)    {       //HVPS
            dt = date.toString("yyyy.MM.dd");
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc " + log + " $(ssh -qo ConnectTimeout=1 10.1.10." + eds + " ssh -qo ConnectTimeout=1 scc ls -dtr -1 /opt/eds/log/diag/trace/diagserv_* | tail -" + QString::number(count) + ") | grep HVPS | grep Arc | grep '" + dt + "''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else if(ui->grepperbox->currentIndex() == 4)    {       //BAD DETECTORS
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " 'ssh -qo ConnectTimeout=1 dpp 'less /opt/eds/etc/bad_detectors.dat'' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
        else    {                                               //IQTK Log
            fire = ("ssh -qo ConnectTimeout=1 10.1.10." + eds + " tail -n 100 /opt/eds/log/iqtk.log | nl -w 1 -s ')   ' | tr '\\n' '@' | sed 's/@/\\n\\n****************************************************************************\\n\\n/g' | sed -e 's/: /\\n\\n/' -e 's/ Bag/\\nBag/g' -e 's/ Nylon/\\n\\nNylon/' -e 's/{/\\n{/g' -e 's/ Alum/\\n\\nAlum/' -e 's/Belt Speed/\\nBelt Speed/' -e 's/ FINAL/\\n\\nFINAL/' -e 's/{//g' -e 's/}//g' -e 's/pass/=> PASS/g' -e 's/fail/=> FAIL/g' -e 's/  INVALID/\\nINVALID/g' -e 's/  BAG ANGLE/\\nBAG ANGLE/g' > //home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
        }
    }
    char* s = new char[fire.length() + 1];
    strcpy(s, fire.toLatin1().constData());
    system(s);

    QFile dosya("//home//eds_cm//.eds_cs_files//log_eds_control_station//scc.txt");
    if(!dosya.open(QIODevice::ReadOnly))
        qDebug() << "File Not Found";

    QTextStream in(&dosya);
    ui->bagdecision->setText(in.readAll());
    ui->bagdecision->append("                                                                                                                                                             END OF THE LINE..");
    ui->bagdecision->verticalScrollBar()->setValue(ui->bagdecision->verticalScrollBar()->maximum());
}

void alper::on_log_finder_button_clicked()
{
    ui->grepdate->setDateTime(QDateTime::currentDateTime());
    ui->bagdec->show();
}


void alper::on_usb_mount_clicked()
{
    system("ls /dev/sd* | tail -n 1 > //home//eds_cm//.eds_cs_files//log_eds_control_station//usblocation.txt");
    QFile usb("//home//eds_cm//.eds_cs_files//log_eds_control_station//usblocation.txt");
    if(!usb.open(QIODevice::ReadOnly))
        qDebug() << "File Not Found";

    QTextStream usbin(&usb);

    QString loc = "";
    usbin >> loc;

    QString fnl = ("mount /" + loc + " /mnt");
    char* u = new char[fnl.length() + 1];
    strcpy(u, fnl.toLatin1().constData());
    system(u);
    system("ls /mnt/ | tail -n 1 > //home//eds_cm//.eds_cs_files//log_eds_control_station//usbcontrol.txt");
    QFile usbc("//home//eds_cm//.eds_cs_files//log_eds_control_station//usbcontrol.txt");
    if(!usbc.open(QIODevice::ReadOnly))
        qDebug() << "File Not Found";

    QTextStream uscnt(&usbc);

    QString loc1 = "";
    uscnt >> loc1;
    if(loc1 != "")  {
        ui->info->setText("INFO:    USB mounted to /mnt/..");
        QTime dietime = QTime::currentTime().addSecs(10);
        while(QTime::currentTime() < dietime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        ui->info->setText("INFO:");
    }
}

void alper::on_usb_unmount_clicked()
{
    system("sync");
    system("umount /mnt/");
    system("ls /mnt/ | tail -n 1 > //home//eds_cm//.eds_cs_files//log_eds_control_station//usbcontrol.txt");
    QFile usbc("//home//eds_cm//.eds_cs_files//log_eds_control_station//usbcontrol.txt");
    if(!usbc.open(QIODevice::ReadOnly))
        qDebug() << "File Not Found";

    QTextStream uscnt(&usbc);

    QString loc1 = "";
    uscnt >> loc1;
    if(loc1 == "")  {
        ui->info->setText("INFO:    USB unmounted..");
        QTime dietime = QTime::currentTime().addSecs(10);
        while(QTime::currentTime() < dietime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        ui->info->setText("INFO:");
    }
}

void alper::on_silentmode_bt_clicked()
{
    checked = !checked;
    if(!checked)
        ui->silentmode_bt->setStyleSheet("background-color: rgb(248, 248, 248);image: url(:/imag/mute.png); background-image: url(:/imag/mute.png); border: 0px;");
    else
        ui->silentmode_bt->setStyleSheet("background-color: rgb(248, 248, 248);image: url(:/imag/unmute.png); background-image: url(:/imag/unmute.png); border: 0px;");
}

void alper::on_save_flt_button_clicked()
{
    QDateTime t_sdt = ui->faultstartdate->dateTime();
    QDateTime t_edt = ui->faultenddate->dateTime();

    if(t_sdt <= t_edt && t_sdt <= QDateTime::currentDateTime())
    {
        ui->info->setText("INFO: Records are exporting, please wait..");
        QTime dietime = QTime::currentTime().addMSecs(1);
        while(QTime::currentTime() < dietime)   {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
        QString sdt = t_sdt.toString("dd-MM-yyyy");
        QString edt = t_edt.addDays(1).toString("dd-MM-yyyy");
        QString control = "";
        bool there = true;
        int i = 1;

        while(there && t_sdt <= t_edt)    {
            QString grep = ("grep '" + sdt + "' /home/eds_cm/.eds_cs_files/log_eds_control_station/.mv3d_faults/faults.csv | wc -l > /tmp/temp_log.txt");
            char* c_grep = new char[grep.length() + 1];
            strcpy(c_grep, grep.toLatin1().constData());
            system(c_grep);
            QFile temp_log("/tmp/temp_log.txt");

            if (temp_log.open(QFile::ReadOnly))
            {
                QTextStream cnt(&temp_log);
                cnt >> control;
                temp_log.close();
                if(control != "0")    {
                    there = false;
                    QString eds = ui->grep_mv3d_exp->currentText().remove("3D").remove("ALL");
                    QString filename = ui->faultstartdate->dateTime().toString("yyyyMMdd") + "-" + ui->faultenddate->dateTime().toString("yyyyMMdd") + "_" + ui->grep_mv3d_exp->currentText() + "_fault_log.csv";
                    QString alm = ("sed -n '/" + sdt + "/,/" + edt + "/{/" + edt + "/d; p}' /home/eds_cm/.eds_cs_files/log_eds_control_station/.mv3d_faults/faults.csv | grep '" + eds + "' > /tmp/ecs_fault_logs/" + filename);
                    char* alem = new char[alm.length() + 1];
                    strcpy(alem, alm.toLatin1().constData());
                    system(alem);
                    ui->crntmac->hide();
                    ui->info->setText("INFO: File saved into /tmp/ecs_fault_logs/ as " + filename);
                    QTime dietime = QTime::currentTime().addSecs(10);
                    while(QTime::currentTime() < dietime)
                        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
                    ui->info->setText("INFO:");
                    ui->crntmac->show();
                }
                else    {
                    t_sdt = ui->faultstartdate->dateTime().addDays(i);
                    sdt = ui->faultstartdate->dateTime().addDays(i).toString("dd-MM-yyyy");
                }
                i++;
            }
        }
        QString remover = "rm -f /tmp/temp_log.txt";
        char* totheEnd = new char[remover.length() + 1];
        strcpy(totheEnd, remover.toLatin1().constData());
        system(totheEnd);
        if(there)  {
            ui->info->setText("INFO: No fault record found..");
            QTime dietime = QTime::currentTime().addSecs(10);
            while(QTime::currentTime() < dietime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            ui->info->setText("INFO:");
        }
    }
}

void alper::on_fault_display_button_clicked()
{
    QDateTime t_sdt = ui->faultstartdate_disp->dateTime();
    QDateTime t_edt = ui->faultenddate_disp->dateTime();

    if(t_sdt <= t_edt && t_sdt <= QDateTime::currentDateTime())
    {
        ui->info->setText("INFO: Records are fetching please wait..");
        QTime dietime = QTime::currentTime().addMSecs(1);
        while(QTime::currentTime() < dietime)   {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
        QString sdt = ui->faultstartdate_disp->dateTime().toString("dd-MM-yyyy");
        QString edt = ui->faultenddate_disp->dateTime().addDays(1).toString("dd-MM-yyyy");
        QString filename = "tmp_fault_log.csv";
        QString control = "";
        bool there = true;
        int i = 1;

        while(there && t_sdt <= t_edt)    {
            QString grep = ("grep '" + sdt + "' /home/eds_cm/.eds_cs_files/log_eds_control_station/.mv3d_faults/faults.csv | wc -l > /tmp/temp_log.txt");
            char* c_grep = new char[grep.length() + 1];
            strcpy(c_grep, grep.toLatin1().constData());
            system(c_grep);
            QFile temp_log("/tmp/temp_log.txt");
            if (temp_log.open(QFile::ReadOnly))
            {
                QTextStream cnt(&temp_log);
                cnt >> control;
                temp_log.close();
                if(control != "0")    {
                    there = false;
                    QString eds = ui->grep_mv3d_disp->currentText().remove("3D").remove("ALL");
                    QString enivici = ("sed -n '/" + sdt + "/,/" + edt + "/{/" + edt + "/d; p}' /home/eds_cm/.eds_cs_files/log_eds_control_station/.mv3d_faults/faults.csv | grep '" + eds + "' > /tmp/ecs_fault_logs/" + filename);
                    char* vokke = new char[enivici.length() + 1];
                    strcpy(vokke, enivici.toLatin1().constData());
                    system(vokke);
                    QFile faultCSV("/tmp/ecs_fault_logs/" + filename);
                    QString csvOUT = "";
                    QString row4split = "";
                    QStringList rowCounter;
                    QStringList rowData;
                    csvOUT.clear();
                    rowCounter.clear();
                    rowData.clear();
                    int r = 0;
                    if (faultCSV.open(QFile::ReadOnly))
                    {
                        for (int row_cnt = ui->disp_faulttable->rowCount(); row_cnt >= 0; row_cnt--)   {
                            ui->disp_faulttable->removeRow(row_cnt);
                        }
                        csvOUT = faultCSV.readAll();
                        rowCounter = csvOUT.split("\n");
                        faultCSV.close();

                        for (int x = 0; x < rowCounter.size() - 1; x++)
                        {
                            row4split = rowCounter.at(x);
                            rowData = row4split.split(";");
                            ui->disp_faulttable->insertRow(r);
                            for (int y = 0; y < rowData.size(); y++)
                            {
                                ui->disp_faulttable->setItem(x, y, new QTableWidgetItem(rowData[y]));
                            }
                            r++;
                        }

                    }
                    faultCSV.close();
                }
                else    {
                    t_sdt = ui->faultstartdate_disp->dateTime().addDays(i);
                    sdt = ui->faultstartdate_disp->dateTime().addDays(i).toString("dd-MM-yyyy");
                }
                i++;
            }
            QString remover = "rm -f /tmp/temp_log.txt /tmp/ecs_fault_logs/" + filename;
            char* totheEnd = new char[remover.length() + 1];
            strcpy(totheEnd, remover.toLatin1().constData());
            system(totheEnd);
        }
        ui->info->setText("INFO:");
    }
}

void alper::on_fault_browser_button_clicked()
{
    QString dosyaa = QFileDialog::getOpenFileName(this, ("Open File"), "/tmp/ecs_fault_logs/", ("csv File(*.csv)"));
    QString csvOUT = "";
    QString row4split = "";
    QFile faultCSV(dosyaa);
    QStringList rowCounter;
    QStringList rowData;
    csvOUT.clear();
    rowCounter.clear();
    rowData.clear();
    int r = 0;
    if (faultCSV.open(QFile::ReadOnly))
    {
        for (int row_cnt = ui->disp_faulttable->rowCount(); row_cnt >= 0; row_cnt--)   {
            ui->disp_faulttable->removeRow(row_cnt);
        }
        csvOUT = faultCSV.readAll();
        rowCounter = csvOUT.split("\n");
        faultCSV.close();
    }

    for (int x = 0; x < rowCounter.size() - 1; x++)
    {
        row4split = rowCounter.at(x);
        rowData = row4split.split(";");
        ui->disp_faulttable->insertRow(r);
        for (int y = 0; y < rowData.size(); y++)
        {
            ui->disp_faulttable->setItem(x, y, new QTableWidgetItem(rowData[y]));
        }
        r++;
    }
}

void alper::on_system_monitor_clicked()
{
    system("pkill -f mv3d_system_monitor");
    system("nohup /home/eds_cm/.eds_cs_files/mv3d_system_monitor & disown");
}

void alper::on_quickactive_clicked()
{
    ui->grepperbox->setEnabled(true);
    ui->manuelcombo->setEnabled(false);
    ui->manuellabel->setEnabled(false);
}

void alper::on_manuelactive_clicked()
{
    ui->grepperbox->setEnabled(false);
    ui->manuelcombo->setEnabled(true);
    ui->manuellabel->setEnabled(true);
}

void alper::on_ED_01_lcc_clicked()
{
    con_lcc(37);
}

void alper::on_ED_02_lcc_clicked()
{
    con_lcc(40);
}

void alper::on_ED_03_lcc_clicked()
{
    con_lcc(35);
}

void alper::on_ED_04_lcc_clicked()
{
    con_lcc(36);
}

void alper::on_ED_05_lcc_clicked()
{
    con_lcc(38);
}

void alper::on_ED_06_lcc_clicked()
{
    con_lcc(39);
}

void alper::on_ED_09_lcc_clicked()
{
    con_lcc(25);
}

void alper::on_ED_10_lcc_clicked()
{
    con_lcc(17);
}

void alper::on_ED_11_lcc_clicked()
{
    con_lcc(23);
}

void alper::on_ED_12_lcc_clicked()
{
    con_lcc(22);
}

void alper::on_ED_13_lcc_clicked()
{
    con_lcc(33);
}

void alper::on_ED_14_lcc_clicked()
{
    con_lcc(32);
}

void alper::on_ED_15_lcc_clicked()
{
    con_lcc(20);
}

void alper::on_ED_16_lcc_clicked()
{
    con_lcc(28);
}

void alper::on_ED_17_lcc_clicked()
{
    con_lcc(21);
}

void alper::on_ED_18_lcc_clicked()
{
    con_lcc(26);
}

void alper::on_ED_19_lcc_clicked()
{
    con_lcc(27);
}

void alper::on_ED_20_lcc_clicked()
{
    con_lcc(24);
}

void alper::on_ED_23_lcc_clicked()
{
    con_lcc(44);
}

void alper::on_ED_24_lcc_clicked()
{
    con_lcc(46);
}

void alper::on_ED_25_lcc_clicked()
{
    con_lcc(43);
}

void alper::on_ED_26_lcc_clicked()
{
    con_lcc(45);
}

void alper::on_ED_27_lcc_clicked()
{
    con_lcc(41);
}

void alper::on_ED_28_lcc_clicked()
{
    con_lcc(42);
}
