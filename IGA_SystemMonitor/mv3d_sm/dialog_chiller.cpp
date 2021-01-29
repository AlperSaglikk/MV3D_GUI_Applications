#include "dialog_chiller.h"
#include "ui_dialog_chiller.h"
#include <QDebug>
#include <QTableWidgetItem>
#include <QCloseEvent>

int ch[12];

dialog_chiller::dialog_chiller(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::dialog_chiller)
{
    ui->setupUi(this);
    ch_worker = new worker_chiller(this);
    connect(ch_worker, SIGNAL(ch_sender(QString, int)), this, SLOT(ch_taker(QString, int)));
    connect(ch_worker, SIGNAL(ch_init()), this, SLOT(initilazer()));
    //Flow Switch Menu
    flowWindow = new QWidget;
    flowWindow->setFixedSize(286,319);
    flowWindow->setWindowTitle("FLOW SWITCH");
    QPixmap background(":/imag/flowswitch_table.jpg");
    background = background.scaled(flowWindow->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    flowWindow->setPalette(palette);
    flowWindow->hide();

}

dialog_chiller::~dialog_chiller()
{
    delete ui;
}

void dialog_chiller::closeEvent(QCloseEvent *event)
{
    flowWindow->hide();
    event->accept();
}


void dialog_chiller::initilazer()  {
    for(int var = 0; var <= 12; var++)   {
        ch[var] = 1;
    }
}

void dialog_chiller::ch_taker(QString state, int workNo)
{
    if(state == "") {}
    else    {
        QList<QLabel *>labelNo;
        labelNo.append(ui->flow_sw_1);          //0
        labelNo.append(ui->flow_sw_2);          //1
        labelNo.append(ui->flow_sw_3);          //2
        labelNo.append(ui->flow_sw_4);          //3
        labelNo.append(ui->flow_sw_5);          //4
        labelNo.append(ui->flow_sw_6);          //5
        labelNo.append(ui->flow_sw_7);          //6
        labelNo.append(ui->flow_sw_8);          //7
        labelNo.append(ui->flow_sw_9);          //8
        labelNo.append(ui->chiller_temp_1);     //9
        labelNo.append(ui->chiller_temp_2);     //10
        labelNo.append(ui->chiller_temp_3);     //11
        labelNo.append(ui->chiller_interlock);  //12



        if(workNo <= 8)    {
            if(state == "PASS") {
                labelNo.at(workNo)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
                ch[workNo] = 1;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
                ch[workNo] = 0;
            }
        }

        else if(workNo >= 9 && workNo <= 11)       {
            if(state.toDouble() >= 15.000 && state.toDouble() <= 40.000)  {
                labelNo.at(workNo)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; border-radius: 3px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
                labelNo.at(workNo)->setText(state);
                ch[workNo] = 1;
            }
            else if(state.toDouble() > 40.000 && state.toDouble() < 45.000) {
                labelNo.at(workNo)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; border-radius: 3px; min-height: 20px; min-width: 20px; background-color: yellow");
                labelNo.at(workNo)->setText(state);
                ch[workNo] = 2;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 1px; margin-bottom: 1px; border-radius: 3px; min-height: 20px; min-width: 20px; background-color: red");
                labelNo.at(workNo)->setText(state);
                ch[workNo] = 0;
            }
        }

        else    {
            if(state == "PASS") {
                labelNo.at(workNo)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: rgb(0, 145, 0)");
                ch[workNo] = 1;
            }
            else    {
                labelNo.at(workNo)->setStyleSheet("margin-top: 3px; margin-bottom: 3px; border-radius: 10px; min-height: 20px; min-width: 20px; background-color: red");
                ch[workNo] = 0;
            }
        }
    }
    if(workNo == 12)    {
        int faultState = 1;
        for(int var = 0; var <= 12; var++)  {
            faultState *= ch[var];
        }
        emit chfaultState(faultState, 0);
    }
}
void dialog_chiller::on_pushButton_clicked()
{
    flowWindow->show();
}
