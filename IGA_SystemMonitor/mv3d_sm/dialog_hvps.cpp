#include "dialog_hvps.h"
#include "ui_dialog_hvps.h"
#include <QDebug>
#include <QComboBox>
#include <QWidget>
#include <QFile>
#include <QCloseEvent>
#include <QMessageBox>

int hvps[56];

dialog_hvps::dialog_hvps(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::dialog_hvps)
{
    ui->setupUi(this);
    hv_worker = new worker_hvps(this);
    connect(hv_worker, SIGNAL(hv_sender(QString, int)), this, SLOT(hv_taker(QString, int)));
    connect(hv_worker, SIGNAL(hv_init()), this, SLOT(initilazer()));
    ui->hvps_control_button->setEnabled(false);
    //Seasoning Menu
    window = new QWidget;
    comboSeason = new QComboBox;
    window->setStyleSheet("background-color: white");

    window->setWindowTitle("SEASONING MENU");
    start = new QPushButton("START");
    grid = new QGridLayout;
    label =new QLabel;

    label->setStyleSheet("font: 75 bold 8pt 'MS Shell Dlg 2';");
    comboSeason->addItem("Short(6 mins)");
    comboSeason->addItem("Medium(18 mins)");
    comboSeason->addItem("Long(90 mins)");

    grid->addWidget(comboSeason, 1, 0, 1, 3);
    grid->addWidget(start, 1, 3, 1, 1);
    window->setLayout(grid);
    connect(start, SIGNAL(clicked()), this, SLOT(gettingWarmHuh()));
    window->setWindowFlags( Qt::Dialog | Qt::WindowTitleHint | Qt::WindowCloseButtonHint );
    window->hide();
    //
}

dialog_hvps::~dialog_hvps()
{
    delete ui;
}

void dialog_hvps::closeEvent(QCloseEvent *event)
{
    window->hide();
    event->accept();
}

void dialog_hvps::initilazer()  {
    for(int var = 0; var <= 56; var++)   {
        hvps[var] = 1;
    }
}

void dialog_hvps::hv_taker(QString state, int workNo)
{
    if (state == "")    {}
    else    {
        QList<QLabel *>labelNo;
        //HVPS1
        labelNo.append(ui->hvps1_connection);   //0
        labelNo.append(ui->hvps1_fault_state);   //1
        labelNo.append(ui->hvps1_bus);   //2
        labelNo.append(ui->hvps1_arc_count);   //3
        labelNo.append(ui->hvps1_connector_state);   //4
        labelNo.append(ui->hvps1_temp);   //5
        labelNo.append(ui->hvps1_voltage);   //6
        labelNo.append(ui->hvps1_tube1_beam_cur);   //7
        labelNo.append(ui->hvps1_tube2_beam_cur);   //8
        labelNo.append(ui->hvps1_tube3_beam_cur);   //9
        labelNo.append(ui->hvps1_tube1_fil_cur);   //10
        labelNo.append(ui->hvps1_tube2_fil_cur);   //11
        labelNo.append(ui->hvps1_tube3_fil_cur);   //12
        labelNo.append(ui->hvps1_tube1_fil_cur_set);   //13
        labelNo.append(ui->hvps1_tube2_fil_cur_set);   //14
        labelNo.append(ui->hvps1_tube3_fil_cur_set);   //15
        labelNo.append(ui->hvps1_tube1_fil_vol);   //16
        labelNo.append(ui->hvps1_tube2_fil_vol);   //17
        labelNo.append(ui->hvps1_tube3_fil_vol);   //18

        //HVPS2
        labelNo.append(ui->hvps2_connection);   //19
        labelNo.append(ui->hvps2_fault_state);   //20
        labelNo.append(ui->hvps2_bus);   //21
        labelNo.append(ui->hvps2_arc_count);   //22
        labelNo.append(ui->hvps2_connector_state);   //23
        labelNo.append(ui->hvps2_temp);   //24
        labelNo.append(ui->hvps2_voltage);   //25
        labelNo.append(ui->hvps2_tube1_beam_cur);   //26
        labelNo.append(ui->hvps2_tube2_beam_cur);   //27
        labelNo.append(ui->hvps2_tube3_beam_cur);   //28
        labelNo.append(ui->hvps2_tube1_fil_cur);   //29
        labelNo.append(ui->hvps2_tube2_fil_cur);   //30
        labelNo.append(ui->hvps2_tube3_fil_cur);   //31
        labelNo.append(ui->hvps2_tube1_fil_cur_set);   //32
        labelNo.append(ui->hvps2_tube2_fil_cur_set);   //33
        labelNo.append(ui->hvps2_tube3_fil_cur_set);   //34
        labelNo.append(ui->hvps2_tube1_fil_vol);   //35
        labelNo.append(ui->hvps2_tube2_fil_vol);   //36
        labelNo.append(ui->hvps2_tube3_fil_vol);   //37

        //HVPS3
        labelNo.append(ui->hvps3_connection);   //38
        labelNo.append(ui->hvps3_fault_state);   //39
        labelNo.append(ui->hvps3_bus);   //40
        labelNo.append(ui->hvps3_arc_count);   //41
        labelNo.append(ui->hvps3_connector_state);   //42
        labelNo.append(ui->hvps3_temp);   //43
        labelNo.append(ui->hvps3_voltage);   //44
        labelNo.append(ui->hvps3_tube1_beam_cur);   //45
        labelNo.append(ui->hvps3_tube2_beam_cur);   //46
        labelNo.append(ui->hvps3_tube3_beam_cur);   //47
        labelNo.append(ui->hvps3_tube1_fil_cur);   //48
        labelNo.append(ui->hvps3_tube2_fil_cur);   //49
        labelNo.append(ui->hvps3_tube3_fil_cur);   //50
        labelNo.append(ui->hvps3_tube1_fil_cur_set);   //51
        labelNo.append(ui->hvps3_tube2_fil_cur_set);   //52
        labelNo.append(ui->hvps3_tube3_fil_cur_set);   //53
        labelNo.append(ui->hvps3_tube1_fil_vol);   //54
        labelNo.append(ui->hvps3_tube2_fil_vol);   //55
        labelNo.append(ui->hvps3_tube3_fil_vol);   //56


        if(workNo == 0 || workNo == 19 || workNo == 38)  {                   //Connected
            if(state == "YES")  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                hvps[workNo] = 1;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: red");
                hvps[workNo] = 0;
            }
        }

        else if(workNo == 1 || workNo == 20 || workNo == 39)  //Fault Flag
        {
            if(state == "400")  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: red");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 0;
            }
        }

        else if(workNo == 2 || workNo == 21 || workNo == 40)  //Bus Output
        {
            double bus = state.toDouble();
            if(bus >= 250.000 && bus <= 350.000)  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: yellow");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 2;
            }
        }
        else if(workNo == 3 || workNo == 22 || workNo == 41)  //Arc Count
        {
            int arc = state.toInt();
            if(arc == 0)  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else    {
                labelNo.at(workNo)->setText(state);
                if(labelNo.at(1)->text() == "400" || labelNo.at(20)->text() == "400" || labelNo.at(39)->text() == "400" ) {
                    labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: yellow");
                    hvps[workNo] = 2;
                }
                else    {
                    labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: red");
                    hvps[workNo] = 0;
                }
            }
        }

        else if(workNo == 4 || workNo == 23 || workNo == 42)  //Connector State
        {
            labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
            labelNo.at(workNo)->setText(state);
        }

        else if(workNo == 5 || workNo == 24 || workNo == 43)  //Temperature
        {
            double temp = state.toDouble();
            if(temp >= 15.000 && temp <= 40.000)  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else if(temp > 40.000 && temp < 45.000) {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: yellow");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 2;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: red");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 0;
            }
        }

        else if(workNo == 6 || workNo == 25 || workNo == 44)  //beam_kV
        {
            double bkV = state.toDouble();
            if(bkV >= 48.500 && bkV <= 181.000)  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else if(bkV > 181.500) {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: red");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 0;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 6px; margin-bottom: 6px; border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(175, 175, 175)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
        }

        else if((workNo >= 7 && workNo <= 9) || (workNo >= 26 && workNo <= 28) || (workNo >= 45 && workNo <= 47))  //beam_mA
        {
            double bmA = state.toDouble();
            if(bmA >= 1.850 && bmA <= 8.100)  {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else if(bmA > 8.100 && bmA <= 8.900)  {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: yellow");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else if(bmA > 8.900) {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: red");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 0;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(175, 175, 175)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
        }


        else if((workNo >= 10 && workNo <= 12) || (workNo >= 29 && workNo <= 31) || (workNo >= 48 && workNo <= 50))  //filament_A
        {
            double fmA = state.toDouble();
            if(fmA >= 3.800 || fmA < 3.400)  {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
            else if(fmA < 3.800 && fmA >= 3.400) {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: yellow");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 2;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(175, 175, 175)");
                labelNo.at(workNo)->setText(state);
                hvps[workNo] = 1;
            }
        }


        else if((workNo >= 13 && workNo <= 15) || (workNo >= 32 && workNo <= 34) || (workNo >= 51 && workNo <= 53))  //filament_A_setpoint
        {
            labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(175, 175, 175)");
            labelNo.at(workNo)->setText(state);
        }

        else    {
            labelNo.at(workNo)->setStyleSheet("border-radius:3px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
            labelNo.at(workNo)->setText(state);
        }
    }
    int faultState = 1;
    if(workNo == 18)    {
        for(int var = 0; var <= 18; var++)  {
            faultState *= hvps[var];
        }
        emit hvfaultState(faultState, 10);
    }
    else if(workNo == 37)    {
        for(int var = 19; var <= 37; var++)  {
            faultState *= hvps[var];
        }
        emit hvfaultState(faultState, 11);
    }
    else if(workNo == 56)    {
        for(int var = 38; var <= 56; var++)  {
            faultState *= hvps[var];
        }
        emit hvfaultState(faultState, 12);
    }
}
void dialog_hvps::hvOpenTab(int tabIndex)
{
    ui->tab_hv->setCurrentIndex(tabIndex);
    show();
}

void dialog_hvps::enableSeason()
{
    ui->hvps_control_button->setEnabled(true);
}

void dialog_hvps::disableSeason()
{
    ui->hvps_control_button->setEnabled(false);
}

void dialog_hvps::on_hvps_control_button_clicked()
{
    window->show();
}

void dialog_hvps::gettingWarmHuh()  {

    QMessageBox::StandardButton reply = QMessageBox::question(window, "Are you sure",
                                                              comboSeason->currentText() + " seasoning will be start for 3D00" + QString::number(mv3d_no) + "\n" + "\tAre you sure?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)    {
        QString lineNumber;
        QString getLineNumber = ("ssh 10.1.10." + QString::number(mv3d_no) + " ssh scc grep -n seasoningRequired /opt/eds/etc/diag/calibration.info | cut -d' ' -f1 | sed 's/://' > /tmp/.sm_logs/lineNo.txt");
        char* ln = new char[getLineNumber.length() + 1];
        strcpy(ln, getLineNumber.toLatin1().constData());
        system(ln);

        QFile line("//tmp//.sm_logs//lineNo.txt");
        if(!line.open(QIODevice::ReadOnly | QIODevice::Text))  {
            qDebug() << "File Not Opened";
        }
        QTextStream out_ln(&line);
        out_ln >> lineNumber;
        line.close();

        QString startSeason = ("ssh 10.1.10." + QString::number(mv3d_no) + " ssh scc sed -i '" + QString::number(lineNumber.toInt() + 1) + "s+\\\\\\<value.*+\\\\\\<value\\\\\\>"+ QString::number(comboSeason->currentIndex()+1) +"\\\\\\</value\\\\\\>+' /opt/eds/etc/diag/calibration.info; ssh -t 10.1.10." + QString::number(mv3d_no) + " ssh -t scc svc -k /service/scs/");
        char* ss = new char[startSeason.length() + 1];
        strcpy(ss, startSeason.toLatin1().constData());
        system(ss);
//        qDebug() << ss;
        window->hide();
    }
}
