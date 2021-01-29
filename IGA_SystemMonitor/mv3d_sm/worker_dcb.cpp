#include "worker_dcb.h"
#include <QtCore>
#include <QDebug>
#include <QFile>
#include <QTextStream>

worker_dcb::worker_dcb(QObject *parent) : QThread(parent)
{
}

void worker_dcb::run()
{
    emit dc_init();
    QString fileName=("bit4dcb");
    QStringList status;
    status << "connected" << "healthy" << "ready" << "1.8V digital" << "2.5V digital" << "3.3V digital" << "5.0V digital" << "1.8V analog" << "3.3V analog";
    while (runThread) {
        QString disibicey = "";
        int workNo = 0;
        for(int x = 0; x < 7 && runThread; x++) {
            for(int y = 0; y < 5 && runThread; y++)  {
                for(int z = 0; z < 9 && runThread; z++) {

                    QString command = ("cat /tmp/.sm_logs/" + fileName + " | grep FPGA" + QString::number(y) + " | grep DCB" + QString::number(x) + " | grep '" + status.at(z) + "' | tail -n 1 | sed -e 's/ analog/analog/' -e 's/ digital/digital/' | cut -d' ' -f6 > /tmp/.sm_logs/bit_dcb");
                    char* c1 = new char[command.length() + 1];
                    strcpy(c1, command.toLatin1().constData());
                    system(c1);

                    QFile dcb("//tmp//.sm_logs//bit_dcb");
                    if(!dcb.open(QIODevice::ReadOnly | QIODevice::Text))    {
                        qDebug() << "File Not Opened";
                    }
                    QTextStream out(&dcb);
                    out >> disibicey;
                    dcb.close();

                    emit dcb_sender(disibicey, workNo);
                    workNo++;
                    msleep(20);
                }
            }
        }
        if(!runThread) break;
        sleep(1);
        fileName = ("bit_all");
    }
}
