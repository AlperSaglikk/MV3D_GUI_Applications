#include "worker_chiller.h"
#include <QtCore>
#include <QDebug>
#include <QFile>
#include <QTextStream>

worker_chiller::worker_chiller(QObject *parent) : QThread(parent)
{
}

void worker_chiller::run()
{
    emit ch_init();
    QString fileName = ("bit4ch");
    while (runThread) {
        QString log = "";
        int workNo = 0;
        for (int var = 1; var <= 9 && runThread; var++) {

            QString command = ("cat /tmp/.sm_logs/" + fileName + " | grep flow_switch_" + QString::number(var) + " | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_ch");
            char* c = new char[command.length() + 1];
            strcpy(c, command.toLatin1().constData());
            system(c);

            QFile file_fs("//tmp//.sm_logs//bit_ch");
            if(!file_fs.open(QIODevice::ReadOnly | QIODevice::Text))  {
                qDebug() << "File Not Opened";
            }
            QTextStream out_fs(&file_fs);
            out_fs >> log;
            file_fs.close();

            emit ch_sender(log, workNo);
            msleep(10);
            workNo++;
        }
        for (int var = 1; var <= 3 && runThread; var++) {
            QString command = ("cat /tmp/.sm_logs/" + fileName + " | grep chiller" + QString::number(var) + " | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_ch");

            char* c1 = new char[command.length() + 1];
            strcpy(c1, command.toLatin1().constData());
            system(c1);

            QFile file_tm("//tmp//.sm_logs//bit_ch");
            if(!file_tm.open(QIODevice::ReadOnly | QIODevice::Text))  {
                qDebug() << "File Not Opened";
            }
            QTextStream out_tm(&file_tm);
            out_tm >> log;
            file_tm.close();

            emit ch_sender(log, workNo);
            msleep(10);
            workNo++;
        }
        if(!runThread) break;
        QString command = ("cat /tmp/.sm_logs/" + fileName + " | grep chiller_interlock | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_ch");

        char* c2 = new char[command.length() + 1];
        strcpy(c2, command.toLatin1().constData());
        system(c2);

        QFile file_i("//tmp//.sm_logs//bit_ch");
        if(!file_i.open(QIODevice::ReadOnly | QIODevice::Text))  {
            qDebug() << "File Not Opened";
        }
        QTextStream out_i(&file_i);
        out_i >> log;
        file_i.close();

        fileName = ("bit_all");

        emit ch_sender(log, workNo);
        sleep(1);
    }
}

