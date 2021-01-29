#include "dialog_dcb.h"
#include "ui_dialog_dcb.h"
#include <QDebug>

int dcb[314];

dialog_dcb::dialog_dcb(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::dialog_dcb)
{
    ui->setupUi(this);
    dcb_worker = new worker_dcb(this);
    connect(dcb_worker, SIGNAL(dcb_sender(QString, int)), this, SLOT(dcb_taker(QString, int)));
    connect(dcb_worker, SIGNAL(dc_init()), this, SLOT(initilazer()));

}

dialog_dcb::~dialog_dcb()
{
    delete ui;
}

void dialog_dcb::initilazer()  {
    for(int var = 0; var <= 314; var++)   {
        dcb[var] = 1;

    }
}

void dialog_dcb::dcb_taker(QString state, int workNo)
{
    if(state == "") {}
    else    {
        QList<QLabel *>labelNo;
        //DCB1
        labelNo.append(ui->fpga1_con_dcb_1);    //0
        labelNo.append(ui->fpga1_hlt_dcb_1);
        labelNo.append(ui->fpga1_rdy_dcb_1);
        labelNo.append(ui->fpga1_d18_dcb_1);
        labelNo.append(ui->fpga1_d25_dcb_1);
        labelNo.append(ui->fpga1_d33_dcb_1);
        labelNo.append(ui->fpga1_d5_dcb_1);
        labelNo.append(ui->fpga1_a18_dcb_1);
        labelNo.append(ui->fpga1_a33_dcb_1);

        labelNo.append(ui->fpga2_con_dcb_1);
        labelNo.append(ui->fpga2_hlt_dcb_1);
        labelNo.append(ui->fpga2_rdy_dcb_1);
        labelNo.append(ui->fpga2_d18_dcb_1);
        labelNo.append(ui->fpga2_d25_dcb_1);
        labelNo.append(ui->fpga2_d33_dcb_1);
        labelNo.append(ui->fpga2_d5_dcb_1);
        labelNo.append(ui->fpga2_a18_dcb_1);
        labelNo.append(ui->fpga2_a33_dcb_1);

        labelNo.append(ui->fpga3_con_dcb_1);
        labelNo.append(ui->fpga3_hlt_dcb_1);
        labelNo.append(ui->fpga3_rdy_dcb_1);
        labelNo.append(ui->fpga3_d18_dcb_1);
        labelNo.append(ui->fpga3_d25_dcb_1);
        labelNo.append(ui->fpga3_d33_dcb_1);
        labelNo.append(ui->fpga3_d5_dcb_1);
        labelNo.append(ui->fpga3_a18_dcb_1);
        labelNo.append(ui->fpga3_a33_dcb_1);

        labelNo.append(ui->fpga4_con_dcb_1);
        labelNo.append(ui->fpga4_hlt_dcb_1);
        labelNo.append(ui->fpga4_rdy_dcb_1);
        labelNo.append(ui->fpga4_d18_dcb_1);
        labelNo.append(ui->fpga4_d25_dcb_1);
        labelNo.append(ui->fpga4_d33_dcb_1);
        labelNo.append(ui->fpga4_d5_dcb_1);
        labelNo.append(ui->fpga4_a18_dcb_1);
        labelNo.append(ui->fpga4_a33_dcb_1);

        labelNo.append(ui->fpga5_con_dcb_1);
        labelNo.append(ui->fpga5_hlt_dcb_1);
        labelNo.append(ui->fpga5_rdy_dcb_1);
        labelNo.append(ui->fpga5_d18_dcb_1);
        labelNo.append(ui->fpga5_d25_dcb_1);
        labelNo.append(ui->fpga5_d33_dcb_1);
        labelNo.append(ui->fpga5_d5_dcb_1);
        labelNo.append(ui->fpga5_a18_dcb_1);
        labelNo.append(ui->fpga5_a33_dcb_1);    //44
        //DCB2
        labelNo.append(ui->fpga1_con_dcb_2);    //45
        labelNo.append(ui->fpga1_hlt_dcb_2);
        labelNo.append(ui->fpga1_rdy_dcb_2);
        labelNo.append(ui->fpga1_d18_dcb_2);
        labelNo.append(ui->fpga1_d25_dcb_2);
        labelNo.append(ui->fpga1_d33_dcb_2);
        labelNo.append(ui->fpga1_d5_dcb_2);
        labelNo.append(ui->fpga1_a18_dcb_2);
        labelNo.append(ui->fpga1_a33_dcb_2);

        labelNo.append(ui->fpga2_con_dcb_2);
        labelNo.append(ui->fpga2_hlt_dcb_2);
        labelNo.append(ui->fpga2_rdy_dcb_2);
        labelNo.append(ui->fpga2_d18_dcb_2);
        labelNo.append(ui->fpga2_d25_dcb_2);
        labelNo.append(ui->fpga2_d33_dcb_2);
        labelNo.append(ui->fpga2_d5_dcb_2);
        labelNo.append(ui->fpga2_a18_dcb_2);
        labelNo.append(ui->fpga2_a33_dcb_2);

        labelNo.append(ui->fpga3_con_dcb_2);
        labelNo.append(ui->fpga3_hlt_dcb_2);
        labelNo.append(ui->fpga3_rdy_dcb_2);
        labelNo.append(ui->fpga3_d18_dcb_2);
        labelNo.append(ui->fpga3_d25_dcb_2);
        labelNo.append(ui->fpga3_d33_dcb_2);
        labelNo.append(ui->fpga3_d5_dcb_2);
        labelNo.append(ui->fpga3_a18_dcb_2);
        labelNo.append(ui->fpga3_a33_dcb_2);

        labelNo.append(ui->fpga4_con_dcb_2);
        labelNo.append(ui->fpga4_hlt_dcb_2);
        labelNo.append(ui->fpga4_rdy_dcb_2);
        labelNo.append(ui->fpga4_d18_dcb_2);
        labelNo.append(ui->fpga4_d25_dcb_2);
        labelNo.append(ui->fpga4_d33_dcb_2);
        labelNo.append(ui->fpga4_d5_dcb_2);
        labelNo.append(ui->fpga4_a18_dcb_2);
        labelNo.append(ui->fpga4_a33_dcb_2);

        labelNo.append(ui->fpga5_con_dcb_2);
        labelNo.append(ui->fpga5_hlt_dcb_2);
        labelNo.append(ui->fpga5_rdy_dcb_2);
        labelNo.append(ui->fpga5_d18_dcb_2);
        labelNo.append(ui->fpga5_d25_dcb_2);
        labelNo.append(ui->fpga5_d33_dcb_2);
        labelNo.append(ui->fpga5_d5_dcb_2);
        labelNo.append(ui->fpga5_a18_dcb_2);
        labelNo.append(ui->fpga5_a33_dcb_2);    //89

        //DCB3
        labelNo.append(ui->fpga1_con_dcb_3);    //90
        labelNo.append(ui->fpga1_hlt_dcb_3);
        labelNo.append(ui->fpga1_rdy_dcb_3);
        labelNo.append(ui->fpga1_d18_dcb_3);
        labelNo.append(ui->fpga1_d25_dcb_3);
        labelNo.append(ui->fpga1_d33_dcb_3);
        labelNo.append(ui->fpga1_d5_dcb_3);
        labelNo.append(ui->fpga1_a18_dcb_3);
        labelNo.append(ui->fpga1_a33_dcb_3);

        labelNo.append(ui->fpga2_con_dcb_3);
        labelNo.append(ui->fpga2_hlt_dcb_3);
        labelNo.append(ui->fpga2_rdy_dcb_3);
        labelNo.append(ui->fpga2_d18_dcb_3);
        labelNo.append(ui->fpga2_d25_dcb_3);
        labelNo.append(ui->fpga2_d33_dcb_3);
        labelNo.append(ui->fpga2_d5_dcb_3);
        labelNo.append(ui->fpga2_a18_dcb_3);
        labelNo.append(ui->fpga2_a33_dcb_3);

        labelNo.append(ui->fpga3_con_dcb_3);
        labelNo.append(ui->fpga3_hlt_dcb_3);
        labelNo.append(ui->fpga3_rdy_dcb_3);
        labelNo.append(ui->fpga3_d18_dcb_3);
        labelNo.append(ui->fpga3_d25_dcb_3);
        labelNo.append(ui->fpga3_d33_dcb_3);
        labelNo.append(ui->fpga3_d5_dcb_3);
        labelNo.append(ui->fpga3_a18_dcb_3);
        labelNo.append(ui->fpga3_a33_dcb_3);

        labelNo.append(ui->fpga4_con_dcb_3);
        labelNo.append(ui->fpga4_hlt_dcb_3);
        labelNo.append(ui->fpga4_rdy_dcb_3);
        labelNo.append(ui->fpga4_d18_dcb_3);
        labelNo.append(ui->fpga4_d25_dcb_3);
        labelNo.append(ui->fpga4_d33_dcb_3);
        labelNo.append(ui->fpga4_d5_dcb_3);
        labelNo.append(ui->fpga4_a18_dcb_3);
        labelNo.append(ui->fpga4_a33_dcb_3);

        labelNo.append(ui->fpga5_con_dcb_3);
        labelNo.append(ui->fpga5_hlt_dcb_3);
        labelNo.append(ui->fpga5_rdy_dcb_3);
        labelNo.append(ui->fpga5_d18_dcb_3);
        labelNo.append(ui->fpga5_d25_dcb_3);
        labelNo.append(ui->fpga5_d33_dcb_3);
        labelNo.append(ui->fpga5_d5_dcb_3);
        labelNo.append(ui->fpga5_a18_dcb_3);
        labelNo.append(ui->fpga5_a33_dcb_3);    //134

        //DCB4
        labelNo.append(ui->fpga1_con_dcb_4);    //135
        labelNo.append(ui->fpga1_hlt_dcb_4);
        labelNo.append(ui->fpga1_rdy_dcb_4);
        labelNo.append(ui->fpga1_d18_dcb_4);
        labelNo.append(ui->fpga1_d25_dcb_4);
        labelNo.append(ui->fpga1_d33_dcb_4);
        labelNo.append(ui->fpga1_d5_dcb_4);
        labelNo.append(ui->fpga1_a18_dcb_4);
        labelNo.append(ui->fpga1_a33_dcb_4);

        labelNo.append(ui->fpga2_con_dcb_4);
        labelNo.append(ui->fpga2_hlt_dcb_4);
        labelNo.append(ui->fpga2_rdy_dcb_4);
        labelNo.append(ui->fpga2_d18_dcb_4);
        labelNo.append(ui->fpga2_d25_dcb_4);
        labelNo.append(ui->fpga2_d33_dcb_4);
        labelNo.append(ui->fpga2_d5_dcb_4);
        labelNo.append(ui->fpga2_a18_dcb_4);
        labelNo.append(ui->fpga2_a33_dcb_4);

        labelNo.append(ui->fpga3_con_dcb_4);
        labelNo.append(ui->fpga3_hlt_dcb_4);
        labelNo.append(ui->fpga3_rdy_dcb_4);
        labelNo.append(ui->fpga3_d18_dcb_4);
        labelNo.append(ui->fpga3_d25_dcb_4);
        labelNo.append(ui->fpga3_d33_dcb_4);
        labelNo.append(ui->fpga3_d5_dcb_4);
        labelNo.append(ui->fpga3_a18_dcb_4);
        labelNo.append(ui->fpga3_a33_dcb_4);

        labelNo.append(ui->fpga4_con_dcb_4);
        labelNo.append(ui->fpga4_hlt_dcb_4);
        labelNo.append(ui->fpga4_rdy_dcb_4);
        labelNo.append(ui->fpga4_d18_dcb_4);
        labelNo.append(ui->fpga4_d25_dcb_4);
        labelNo.append(ui->fpga4_d33_dcb_4);
        labelNo.append(ui->fpga4_d5_dcb_4);
        labelNo.append(ui->fpga4_a18_dcb_4);
        labelNo.append(ui->fpga4_a33_dcb_4);

        labelNo.append(ui->fpga5_con_dcb_4);
        labelNo.append(ui->fpga5_hlt_dcb_4);
        labelNo.append(ui->fpga5_rdy_dcb_4);
        labelNo.append(ui->fpga5_d18_dcb_4);
        labelNo.append(ui->fpga5_d25_dcb_4);
        labelNo.append(ui->fpga5_d33_dcb_4);
        labelNo.append(ui->fpga5_d5_dcb_4);
        labelNo.append(ui->fpga5_a18_dcb_4);
        labelNo.append(ui->fpga5_a33_dcb_4);    //179
        //DCB5
        labelNo.append(ui->fpga1_con_dcb_5);    //180
        labelNo.append(ui->fpga1_hlt_dcb_5);
        labelNo.append(ui->fpga1_rdy_dcb_5);
        labelNo.append(ui->fpga1_d18_dcb_5);
        labelNo.append(ui->fpga1_d25_dcb_5);
        labelNo.append(ui->fpga1_d33_dcb_5);
        labelNo.append(ui->fpga1_d5_dcb_5);
        labelNo.append(ui->fpga1_a18_dcb_5);
        labelNo.append(ui->fpga1_a33_dcb_5);

        labelNo.append(ui->fpga2_con_dcb_5);
        labelNo.append(ui->fpga2_hlt_dcb_5);
        labelNo.append(ui->fpga2_rdy_dcb_5);
        labelNo.append(ui->fpga2_d18_dcb_5);
        labelNo.append(ui->fpga2_d25_dcb_5);
        labelNo.append(ui->fpga2_d33_dcb_5);
        labelNo.append(ui->fpga2_d5_dcb_5);
        labelNo.append(ui->fpga2_a18_dcb_5);
        labelNo.append(ui->fpga2_a33_dcb_5);

        labelNo.append(ui->fpga3_con_dcb_5);
        labelNo.append(ui->fpga3_hlt_dcb_5);
        labelNo.append(ui->fpga3_rdy_dcb_5);
        labelNo.append(ui->fpga3_d18_dcb_5);
        labelNo.append(ui->fpga3_d25_dcb_5);
        labelNo.append(ui->fpga3_d33_dcb_5);
        labelNo.append(ui->fpga3_d5_dcb_5);
        labelNo.append(ui->fpga3_a18_dcb_5);
        labelNo.append(ui->fpga3_a33_dcb_5);

        labelNo.append(ui->fpga4_con_dcb_5);
        labelNo.append(ui->fpga4_hlt_dcb_5);
        labelNo.append(ui->fpga4_rdy_dcb_5);
        labelNo.append(ui->fpga4_d18_dcb_5);
        labelNo.append(ui->fpga4_d25_dcb_5);
        labelNo.append(ui->fpga4_d33_dcb_5);
        labelNo.append(ui->fpga4_d5_dcb_5);
        labelNo.append(ui->fpga4_a18_dcb_5);
        labelNo.append(ui->fpga4_a33_dcb_5);

        labelNo.append(ui->fpga5_con_dcb_5);
        labelNo.append(ui->fpga5_hlt_dcb_5);
        labelNo.append(ui->fpga5_rdy_dcb_5);
        labelNo.append(ui->fpga5_d18_dcb_5);
        labelNo.append(ui->fpga5_d25_dcb_5);
        labelNo.append(ui->fpga5_d33_dcb_5);
        labelNo.append(ui->fpga5_d5_dcb_5);
        labelNo.append(ui->fpga5_a18_dcb_5);
        labelNo.append(ui->fpga5_a33_dcb_5);    //224
        //DCB6
        labelNo.append(ui->fpga1_con_dcb_6);    //225
        labelNo.append(ui->fpga1_hlt_dcb_6);
        labelNo.append(ui->fpga1_rdy_dcb_6);
        labelNo.append(ui->fpga1_d18_dcb_6);
        labelNo.append(ui->fpga1_d25_dcb_6);
        labelNo.append(ui->fpga1_d33_dcb_6);
        labelNo.append(ui->fpga1_d5_dcb_6);
        labelNo.append(ui->fpga1_a18_dcb_6);
        labelNo.append(ui->fpga1_a33_dcb_6);

        labelNo.append(ui->fpga2_con_dcb_6);
        labelNo.append(ui->fpga2_hlt_dcb_6);
        labelNo.append(ui->fpga2_rdy_dcb_6);
        labelNo.append(ui->fpga2_d18_dcb_6);
        labelNo.append(ui->fpga2_d25_dcb_6);
        labelNo.append(ui->fpga2_d33_dcb_6);
        labelNo.append(ui->fpga2_d5_dcb_6);
        labelNo.append(ui->fpga2_a18_dcb_6);
        labelNo.append(ui->fpga2_a33_dcb_6);

        labelNo.append(ui->fpga3_con_dcb_6);
        labelNo.append(ui->fpga3_hlt_dcb_6);
        labelNo.append(ui->fpga3_rdy_dcb_6);
        labelNo.append(ui->fpga3_d18_dcb_6);
        labelNo.append(ui->fpga3_d25_dcb_6);
        labelNo.append(ui->fpga3_d33_dcb_6);
        labelNo.append(ui->fpga3_d5_dcb_6);
        labelNo.append(ui->fpga3_a18_dcb_6);
        labelNo.append(ui->fpga3_a33_dcb_6);

        labelNo.append(ui->fpga4_con_dcb_6);
        labelNo.append(ui->fpga4_hlt_dcb_6);
        labelNo.append(ui->fpga4_rdy_dcb_6);
        labelNo.append(ui->fpga4_d18_dcb_6);
        labelNo.append(ui->fpga4_d25_dcb_6);
        labelNo.append(ui->fpga4_d33_dcb_6);
        labelNo.append(ui->fpga4_d5_dcb_6);
        labelNo.append(ui->fpga4_a18_dcb_6);
        labelNo.append(ui->fpga4_a33_dcb_6);

        labelNo.append(ui->fpga5_con_dcb_6);
        labelNo.append(ui->fpga5_hlt_dcb_6);
        labelNo.append(ui->fpga5_rdy_dcb_6);
        labelNo.append(ui->fpga5_d18_dcb_6);
        labelNo.append(ui->fpga5_d25_dcb_6);
        labelNo.append(ui->fpga5_d33_dcb_6);
        labelNo.append(ui->fpga5_d5_dcb_6);
        labelNo.append(ui->fpga5_a18_dcb_6);
        labelNo.append(ui->fpga5_a33_dcb_6);    //269
        //DCB7
        labelNo.append(ui->fpga1_con_dcb_7);    //270
        labelNo.append(ui->fpga1_hlt_dcb_7);
        labelNo.append(ui->fpga1_rdy_dcb_7);
        labelNo.append(ui->fpga1_d18_dcb_7);
        labelNo.append(ui->fpga1_d25_dcb_7);
        labelNo.append(ui->fpga1_d33_dcb_7);
        labelNo.append(ui->fpga1_d5_dcb_7);
        labelNo.append(ui->fpga1_a18_dcb_7);
        labelNo.append(ui->fpga1_a33_dcb_7);

        labelNo.append(ui->fpga2_con_dcb_7);
        labelNo.append(ui->fpga2_hlt_dcb_7);
        labelNo.append(ui->fpga2_rdy_dcb_7);
        labelNo.append(ui->fpga2_d18_dcb_7);
        labelNo.append(ui->fpga2_d25_dcb_7);
        labelNo.append(ui->fpga2_d33_dcb_7);
        labelNo.append(ui->fpga2_d5_dcb_7);
        labelNo.append(ui->fpga2_a18_dcb_7);
        labelNo.append(ui->fpga2_a33_dcb_7);

        labelNo.append(ui->fpga3_con_dcb_7);
        labelNo.append(ui->fpga3_hlt_dcb_7);
        labelNo.append(ui->fpga3_rdy_dcb_7);
        labelNo.append(ui->fpga3_d18_dcb_7);
        labelNo.append(ui->fpga3_d25_dcb_7);
        labelNo.append(ui->fpga3_d33_dcb_7);
        labelNo.append(ui->fpga3_d5_dcb_7);
        labelNo.append(ui->fpga3_a18_dcb_7);
        labelNo.append(ui->fpga3_a33_dcb_7);

        labelNo.append(ui->fpga4_con_dcb_7);
        labelNo.append(ui->fpga4_hlt_dcb_7);
        labelNo.append(ui->fpga4_rdy_dcb_7);
        labelNo.append(ui->fpga4_d18_dcb_7);
        labelNo.append(ui->fpga4_d25_dcb_7);
        labelNo.append(ui->fpga4_d33_dcb_7);
        labelNo.append(ui->fpga4_d5_dcb_7);
        labelNo.append(ui->fpga4_a18_dcb_7);
        labelNo.append(ui->fpga4_a33_dcb_7);

        labelNo.append(ui->fpga5_con_dcb_7);
        labelNo.append(ui->fpga5_hlt_dcb_7);
        labelNo.append(ui->fpga5_rdy_dcb_7);
        labelNo.append(ui->fpga5_d18_dcb_7);
        labelNo.append(ui->fpga5_d25_dcb_7);
        labelNo.append(ui->fpga5_d33_dcb_7);
        labelNo.append(ui->fpga5_d5_dcb_7);
        labelNo.append(ui->fpga5_a18_dcb_7);
        labelNo.append(ui->fpga5_a33_dcb_7);    //314

        if(state == "YES" || state == "PASS")   {
            labelNo.at(workNo)->setStyleSheet("margin-top: 10px; margin-left: 13px; margin-right: 13px; margin-bottom: 10px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
            dcb[workNo] = 1;
        }
        else    {
            labelNo.at(workNo)->setStyleSheet("margin-top: 10px; margin-left: 13px; margin-right: 13px; margin-bottom: 10px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
            dcb[workNo] = 0;
        }
    }
    int faultState = 1;
    if(workNo == 44)    {
        for(int var = 0; var <= 44; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 3);
    }
    else if(workNo == 89)    {
        for(int var = 45; var <= 89; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 4);
    }
    else if(workNo == 134)    {
        for(int var = 90; var <= 134; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 5);
    }
    else if(workNo == 179)    {
        for(int var = 135; var <= 179; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 6);
    }
    else if(workNo == 224)    {
        for(int var = 180; var <= 224; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 7);
    }
    else if(workNo == 269)    {
        for(int var = 225; var <= 269; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 8);
    }
    else if(workNo == 314)    {
        for(int var = 270; var <= 314; var++)  {
            faultState *= dcb[var];
        }
        emit dcfaultState(faultState, 9);
    }
}

void dialog_dcb::dcbOpenTab(int tabb)
{
    ui->tab_dcb->setCurrentIndex(tabb);
    show();
}
