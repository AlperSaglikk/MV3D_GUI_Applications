#include "worker_hvps.h"
#include <QtCore>
#include <QDebug>
#include <QFile>
#include <QTextStream>

worker_hvps::worker_hvps(QObject *parent) : QThread(parent)
{
}

void worker_hvps::run()
{
    emit hv_init();
    QStringList hvpsList;
    hvpsList << "DM/connected" << "faultFl" << "busOut" << "arcCo" << "ectorState" << "nalTemp" << "beam_kV";
    QStringList tubeList;
    tubeList << "beam_mA" << "ment_A " << "A_set" << "ment_V";
    QStringList tubeNo;
    tubeNo << "A" << "B" << "C";
    QString fileName = ("bit4hv");

    while (runThread)    {
        QString hvLog = "";
        int workNo = 0;
        for(int hvpsNo = 0; hvpsNo < 3 && runThread; hvpsNo++)   {  //HVPS NO
            for(int var = 0; var < 7 && runThread; var++)   {   //UPPER STATES
                QString command = ("cat /tmp/.sm_logs/" + fileName + " | grep '" + hvpsList.at(var) + "' | grep HVPS" + QString::number(hvpsNo) + " | tail -n 1 | sed -e 's/=       /= /' -e 's/=      /= /' -e 's/=     /= /' -e 's/=    /= /' -e 's/=   /= /' -e 's/=  /= /' | cut -d' ' -f6 > /tmp/.sm_logs/bit_hv");
                char* hv = new char[command.length() + 1];
                strcpy(hv, command.toLatin1().constData());
                system(hv);

                QFile hv_file("//tmp//.sm_logs//bit_hv");
                if(!hv_file.open(QIODevice::ReadOnly | QIODevice::Text))
                    qDebug() << "File Not Opened";
                QTextStream hvout(&hv_file);
                hvout >> hvLog;

                emit hv_sender(hvLog, workNo);
                hv_file.close();
                workNo++;
                msleep(30);
            }
            for(int var = 0; var < 4 && runThread; var++)   {       //TUBE STATES
                for(int tube = 0; tube < 3 && runThread; tube++)  { //TUBE NO
                    QString comTube = ("cat /tmp/.sm_logs/" + fileName + " | grep 'TUBE_" + tubeNo.at(tube) + "' | grep '" + tubeList.at(var) + "' | grep HVPS" + QString::number(hvpsNo) + " | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_hv");
                    char* tb = new char[comTube.length() + 1];
                    strcpy(tb, comTube.toLatin1().constData());
                    system(tb);

                    QFile tb_file("//tmp//.sm_logs//bit_hv");
                    if(!tb_file.open(QIODevice::ReadOnly | QIODevice::Text))
                        qDebug() << "File Not Opened";
                    QTextStream tbout(&tb_file);
                    tbout >> hvLog;

                    emit hv_sender(hvLog, workNo);
                    tb_file.close();
                    workNo++;
                    msleep(30);
                }
            }
        }
        if(!runThread) break;
        sleep(1);
        fileName = ("bit_all");
    }
}
