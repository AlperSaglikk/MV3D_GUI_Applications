#include "dialog_systic.h"
#include "ui_dialog_systic.h"
#include <QDebug>

int sy[62];

dialog_systic::dialog_systic(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::dialog_systic)
{
    ui->setupUi(this);
    sy_worker = new worker_systic(this);
    connect(sy_worker, SIGNAL(sy_sender(QString, int)), this, SLOT(sy_taker(QString, int)));
    connect(sy_worker, SIGNAL(sy_init()), this, SLOT(initilazer()));
}

dialog_systic::~dialog_systic()
{
    delete ui;
}

void dialog_systic::initilazer()  {
    for(int var = 0; var <= 62; var++)   {
        sy[var] = 1;
    }
}

void dialog_systic::sy_taker(QString state, int workNo)
{
    if (state == "")    {}
    else    {
        /*
        workNo = 0 interlock
        workNo = 1 estop
        workNo = 2 EPhotocells
        workNo = 3 SDBTEMP
        workNo = 4 SYSTICTEMP
        workNo = 5 lowBlock
        workNo = 6 highBlock
        workNo = 7 DCB0 haelthy
        workNo = 8 DCB0 ready
        workNo = 9 DCB0 connected
        workNo = 10 DCB0 active
        .
        .
        workNo = 31 DCB6 haelthy
        workNo = 32 DCB6 ready
        workNo = 33 DCB6 connected
        workNo = 34 DCB6 active.
        workNo = 35 HVPS0 haelthy
        workNo = 36 HVPS0 ready
        workNo = 37 HVPS0 connected
        workNo = 38 HVPS0 active
        .
        .
        workNo = 43 HVPS2 haelthy
        workNo = 44 HVPS2 ready
        workNo = 45 HVPS2 connected
        workNo = 46 HVPS2 active
        workNo = 47 UPS1 model
        workNo = 48 UPS2 model
        workNo = 49 UPS1 input_freq
        workNo = 50 UPS2 input_freq
        .
        .
        workNo = 59 UPS1 load
        workNo = 60 UPS2 load
        workNo = 61 UPS1 charge
        workNo = 62 UPS2 charge
    */
        if (workNo == 0)    {       //INTERLOCK
            QList<QLabel *>labelNo;
            labelNo.append(ui->interlock_6);   //5
            labelNo.append(ui->interlock_5);   //4
            labelNo.append(ui->interlock_4);   //3
            labelNo.append(ui->interlock_3);   //2
            labelNo.append(ui->interlock_2);   //1
            labelNo.append(ui->interlock_1);   //0
            bool ok;
            QString dec = QString("%1").arg(state.toULongLong(&ok, 16), 6, 2, QChar('0'));
            for (int var = 0; var < dec.size(); ++var) {
                sy[workNo] *= dec.data()[var].digitValue();
                if(dec.data()[var] == '1')  {
                    labelNo.at(var)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
                }
                else    {
                    labelNo.at(var)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
                }
            }
        }

        else if (workNo == 1)    {       //ESTOP
            QList<QLabel *>labelNo;
            labelNo.append(ui->estop_8);   //7
            labelNo.append(ui->estop_7);   //6
            labelNo.append(ui->estop_6);   //5
            labelNo.append(ui->estop_5);   //4
            labelNo.append(ui->estop_4);   //3
            labelNo.append(ui->estop_3);   //2
            labelNo.append(ui->estop_2);   //1
            labelNo.append(ui->estop_1);   //0
            bool ok;
            QString dec = QString("%1").arg(state.toULongLong(&ok, 16), 8, 2, QChar('0'));
            for (int var = 0; var < dec.size(); ++var) {
                sy[workNo] *= dec.data()[var].digitValue();
                if(dec.data()[var] == '1')
                    labelNo.at(var)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
                else
                    labelNo.at(var)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
            }
        }

        else if (workNo == 2)  {            //PHOTOCELLS
            int ph = state.toInt();
            if(ph == 3)    {
                ui->systic_ent_ph->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
                ui->systic_ent_ph2->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
            }
            else  {
                ui->systic_ent_ph->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
                ui->systic_ent_ph2->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
            }
        }

        else if (workNo > 2 && workNo <= 4)   {       //TEMPERATURE
            QList<QLabel *>labelNo;
            labelNo.append(ui->sdb_temp_value);    //3
            labelNo.append(ui->systic_temp_value);    //4

            if(state.toDouble() >= 15.000 && state.toDouble() <= 40.000)  {
                labelNo.at(workNo-3)->setStyleSheet("border-radius:3px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo-3)->setText(state);
                sy[workNo] = 1;

            }
            else if(state.toDouble() > 40.000 && state.toDouble() < 45.000) {
                labelNo.at(workNo-3)->setStyleSheet("border-radius:3px; background-color: yellow");
                labelNo.at(workNo-3)->setText(state);
                sy[workNo] = 2;
            }
            else    {
                labelNo.at(workNo-3)->setStyleSheet("border-radius:3px; background-color: red");
                labelNo.at(workNo-3)->setText(state);
                sy[workNo] = 0;
            }
        }


        else if (workNo == 5)    {       //LOW BLOCK
            QList<QLabel *>labelNo;
            labelNo.append(ui->systic_lowBlock);      //0
            labelNo.append(ui->systic_lowBlock_2);    //1
            labelNo.append(ui->systic_lowBlock_3);    //2
            labelNo.append(ui->systic_lowBlock_4);    //3
            labelNo.append(ui->systic_lowBlock_5);    //4
            labelNo.append(ui->systic_lowBlock_6);    //5
            labelNo.append(ui->systic_lowBlock_7);    //6
            labelNo.append(ui->systic_lowBlock_8);    //7
            labelNo.append(ui->systic_lowBlock_9);    //8
            labelNo.append(ui->systic_lowBlock_10);   //9
            labelNo.append(ui->systic_lowBlock_11);   //10
            labelNo.append(ui->systic_lowBlock_12);   //11
            labelNo.append(ui->systic_lowBlock_13);   //12
            labelNo.append(ui->systic_lowBlock_14);   //13
            labelNo.append(ui->systic_lowBlock_15);   //14
            labelNo.append(ui->systic_lowBlock_16);   //15
            bool ok;
            QString dec = QString("%1").arg(state.toULongLong(&ok, 16), 16, 2, QChar('0'));

            for (int var = 0; var < dec.size(); ++var) {
                if(dec.data()[var] == '1')
                    labelNo.at(var)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; margin-left: 0px; margin-right: 0px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: red");
                else
                    labelNo.at(var)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; margin-left: 0px; margin-right: 0px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
            }
        }

        else if (workNo == 6)    {       //HIGH BLOCK
            QList<QLabel *>labelNo;
            labelNo.append(ui->systic_highBlock);      //0
            labelNo.append(ui->systic_highBlock_2);    //1
            labelNo.append(ui->systic_highBlock_3);    //2
            labelNo.append(ui->systic_highBlock_4);    //3
            labelNo.append(ui->systic_highBlock_5);    //4
            labelNo.append(ui->systic_highBlock_6);    //5
            labelNo.append(ui->systic_highBlock_7);    //6
            labelNo.append(ui->systic_highBlock_8);    //7
            labelNo.append(ui->systic_highBlock_9);    //8
            labelNo.append(ui->systic_highBlock_10);   //9
            labelNo.append(ui->systic_highBlock_11);   //10
            labelNo.append(ui->systic_highBlock_12);   //11
            labelNo.append(ui->systic_highBlock_13);   //12
            labelNo.append(ui->systic_highBlock_14);   //13
            labelNo.append(ui->systic_highBlock_15);   //14
            labelNo.append(ui->systic_highBlock_16);   //15
            bool ok;
            QString dec = QString("%1").arg(state.toULongLong(&ok, 16), 16, 2, QChar('0'));

            for (int var = 0; var < dec.size(); ++var) {
                if(dec.data()[var] == '1')
                    labelNo.at(var)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; margin-left: 0px; margin-right: 0px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: red");
                else
                    labelNo.at(var)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; margin-left: 0px; margin-right: 0px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
            }
        }

        else if (workNo > 6 && workNo <= 34)  {
            QList<QLabel *>labelNo;
            labelNo.append(ui->health_dcb1);    //7
            labelNo.append(ui->ready_dcb1);    //8
            labelNo.append(ui->con_dcb1);    //9
            labelNo.append(ui->actv_dcb1);    //10

            labelNo.append(ui->health_dcb2);    //11
            labelNo.append(ui->ready_dcb2);    //12
            labelNo.append(ui->con_dcb2);    //13
            labelNo.append(ui->actv_dcb2);    //14

            labelNo.append(ui->health_dcb3);    //15
            labelNo.append(ui->ready_dcb3);    //16
            labelNo.append(ui->con_dcb3);    //17
            labelNo.append(ui->actv_dcb3);    //18

            labelNo.append(ui->health_dcb4);    //19
            labelNo.append(ui->ready_dcb4);    //20
            labelNo.append(ui->con_dcb4);    //21
            labelNo.append(ui->actv_dcb4);    //22

            labelNo.append(ui->health_dcb5);    //23
            labelNo.append(ui->ready_dcb5);    //24
            labelNo.append(ui->con_dcb5);    //25
            labelNo.append(ui->actv_dcb5);    //26

            labelNo.append(ui->health_dcb6);    //27
            labelNo.append(ui->ready_dcb6);    //28
            labelNo.append(ui->con_dcb6);    //29
            labelNo.append(ui->actv_dcb6);    //30

            labelNo.append(ui->health_dcb7);    //31
            labelNo.append(ui->ready_dcb7);    //32
            labelNo.append(ui->con_dcb7);    //33
            labelNo.append(ui->actv_dcb7);    //34

            if(state == "YES")  {
                labelNo.at(workNo-7)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; margin-left: 25px; margin-right: 25px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                sy[workNo] = 1;
            }
            else    {
                labelNo.at(workNo-7)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; margin-left: 25px; margin-right: 25px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: red");
                sy[workNo] = 0;
            }
        }
        else if(workNo > 34 && workNo <= 46)    {
            QList<QLabel *>labelNo;
            labelNo.append(ui->hlt_hvps1);    //35
            labelNo.append(ui->rdy_hvps1);    //36
            labelNo.append(ui->con_hvps1);    //37
            labelNo.append(ui->actv_hvps1);    //38

            labelNo.append(ui->hlt_hvps2);    //39
            labelNo.append(ui->rdy_hvps2);    //40
            labelNo.append(ui->con_hvps2);    //41
            labelNo.append(ui->actv_hvps2);    //42

            labelNo.append(ui->hlt_hvps3);    //43
            labelNo.append(ui->rdy_hvps3);    //44
            labelNo.append(ui->con_hvps3);    //45
            labelNo.append(ui->actv_hvps3);    //46
                if(state == "YES")  {
                    labelNo.at(workNo-35)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; margin-left: 25px; margin-right: 25px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: rgb(0, 145, 0)");
                    sy[workNo] = 1;
                }
                else    {
                    labelNo.at(workNo-35)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; margin-left: 25px; margin-right: 25px; border-radius:7px; min-height: 10px; min-width: 15px; background-color: red");
                    if(workNo != 38 && workNo != 42 && workNo != 46)    {
                    sy[workNo] = 0;
                }
            }
        }
        else   {
            double ups = state.toDouble();
            QList<QLabel *>labelNo;
            labelNo.append(ui->ups1_model);    //47
            labelNo.append(ui->ups2_model);    //48
            labelNo.append(ui->ups1_input_freq);    //49
            labelNo.append(ui->ups2_input_freq);    //50
            labelNo.append(ui->ups1_input_vol);    //51
            labelNo.append(ui->ups2_input_vol);    //52
            labelNo.append(ui->ups1_output_vol);    //53
            labelNo.append(ui->ups2_output_vol);    //54
            labelNo.append(ui->ups1_status);    //55
            labelNo.append(ui->ups2_status);    //56
            labelNo.append(ui->ups1_temp);    //57
            labelNo.append(ui->ups2_temp);    //58
            labelNo.append(ui->ups1_load);    //59
            labelNo.append(ui->ups2_load);    //60
            labelNo.append(ui->ups1_charge);    //61
            labelNo.append(ui->ups2_charge);    //62

            //        labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: grey");
            labelNo.at(workNo-47)->setText(state);
            if(workNo == 47 || workNo == 48)    {
                labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px;");
                sy[workNo] = 1;
            }
            else if(workNo == 49 || workNo == 50)    {
                if(ups > 45.0 && ups < 55.0)    {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: rgb(0, 145, 0)");
                    sy[workNo] = 1;
                }
                else    {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: red");
                    sy[workNo] = 0;
                }
            }
            else if(workNo > 50 && workNo <= 54)    {
                if(ups > 210.0 && ups < 235.0)  {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: rgb(0, 145, 0)");
                    sy[workNo] = 1;
                }
                else    {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: red");
                    sy[workNo] = 0;
                }
            }
            else if(workNo == 55 || workNo == 56)   {
                if(state == "ONLINE")   {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: rgb(0, 145, 0)");
                    sy[workNo] = 1;
                }
                else    {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: red");
                    sy[workNo] = 0;
                }
            }
            else if(workNo == 57 || workNo == 58)   {
                if(ups >= 15.000 && ups <= 35.000)  {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: rgb(0, 145, 0)");
                    sy[workNo] = 1;
                }
                else if(ups > 35.000 && ups < 45.000) {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: yellow");
                    sy[workNo] = 2;
                }
                else    {
                    labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: red");
                    sy[workNo] = 0;
                }
            }
            else
                labelNo.at(workNo-47)->setStyleSheet("font: bold 9pt 'Sans Serif'; border-radius: 3px; background-color: rgb(0, 145, 0)");
        }
    }

    int faultState = 1;
    if(workNo == 3)    {
        for(int var = 0; var <= 3; var++)  {
            faultState *= sy[var];
        }
        emit syfaultState(faultState, 1);
    }
    else if(workNo == 46)    {
        for(int var = 4; var <= 46; var++)  {
            faultState *= sy[var];
        }
        emit syfaultState(faultState, 2);
    }
    else if(workNo == 62)    {
        for(int var = 47; var <= 62; var++)  {
            faultState *= sy[var];
        }
        emit syfaultState(faultState, 13);
        emit syfaultState(faultState, 14);
    }
}
