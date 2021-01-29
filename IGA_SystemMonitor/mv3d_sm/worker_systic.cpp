#include "worker_systic.h"
#include <QtCore>
#include <QDebug>
#include <QFile>
#include <QTextStream>

worker_systic::worker_systic(QObject *parent) : QThread(parent)
{
}

void worker_systic::run()
{
    emit sy_init();
    QString fileName = ("bit4sy");
    QStringList syList;
    syList << "DISCRETES/int" << "DISCRETES/est" << "itPhoto" << "boardTemp" << "TEMP/b" << "lowB" << "highB";
    QStringList states;
    states << "healthy" << "ready" << "connected" << "active";
    QStringList ups_states;
    ups_states << "model" << "T/f" << "NPUT/v" << "TPUT/v" << "status" << "temp" << "load" << "charge";

    while (runThread) {
        int workNo = 0;
        QString syLog = "";
        for(int var = 0; var < 7 && runThread; var++)    {
            QString command = ("cat /tmp/.sm_logs/" + fileName + " | grep '" + syList.at(var) + "' | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_sy");
            char* sy = new char[command.length() + 1];
            strcpy(sy, command.toLatin1().constData());
            system(sy);

            QFile sy_file("//tmp//.sm_logs//bit_sy");
            if(!sy_file.open(QIODevice::ReadOnly | QIODevice::Text))
                qDebug() << "File Not Opened";
            QTextStream syout(&sy_file);
            syout >> syLog;

            emit sy_sender(syLog, workNo);
            sy_file.close();
            workNo++;
            msleep(10);
        }
        for(int var = 0; var < 7 && runThread; var++)    {               //DCB
            for(int stat = 0; stat < 4 && runThread; stat++)    {
                QString scommand = ("cat /tmp/.sm_logs/" + fileName + " | grep '" + states.at(stat) + "' | grep DCB" + QString::number(var) + " | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_sy");
                char* st = new char[scommand.length() + 1];
                strcpy(st, scommand.toLatin1().constData());
                system(st);

                QFile st_file("//tmp//.sm_logs//bit_sy");
                if(!st_file.open(QIODevice::ReadOnly | QIODevice::Text))
                    qDebug() << "File Not Opened";
                QTextStream stout(&st_file);
                stout >> syLog;

                emit sy_sender(syLog, workNo);
                st_file.close();
                workNo++;
                msleep(10);
            }
        }
        for(int var = 0; var < 3 && runThread; var++)    {               //HVPS
            for(int stat = 0; stat < 4 && runThread; stat++)    {
                QString s1command = ("cat /tmp/.sm_logs/" + fileName + " | grep '" + states.at(stat) + "' | grep HVPS" + QString::number(var) + " | tail -n 1 | cut -d' ' -f6 > /tmp/.sm_logs/bit_sy");
                char* st1 = new char[s1command.length() + 1];
                strcpy(st1, s1command.toLatin1().constData());
                system(st1);

                QFile st1_file("//tmp//.sm_logs//bit_sy");
                if(!st1_file.open(QIODevice::ReadOnly | QIODevice::Text))
                    qDebug() << "File Not Opened";
                QTextStream st1out(&st1_file);
                st1out >> syLog;
                emit sy_sender(syLog, workNo);
                st1_file.close();
                workNo++;
                msleep(10);
            }
        }
        for(int var = 0; var < 8 && runThread; var++)    {
            for(int ups_no = 1; ups_no < 3 && runThread; ups_no++)    {
                QString ucommand = ("cat /tmp/.sm_logs/" + fileName + " | grep UPS" + QString::number(ups_no) + " | grep '" + ups_states.at(var) + "' | tail -n 1 | sed -e 's/UPS /UPS-/' -e 's/=    /= /' -e 's/=   /= /' -e 's/=  /= /' | cut -d' ' -f6 > /tmp/.sm_logs/bit_sy");
                char* uch = new char[ucommand.length() + 1];
                strcpy(uch, ucommand.toLatin1().constData());
                system(uch);

                QFile u_file("//tmp//.sm_logs//bit_sy");
                if(!u_file.open(QIODevice::ReadOnly | QIODevice::Text))
                    qDebug() << "File Not Opened";
                QTextStream uout(&u_file);
                uout >> syLog;
                emit sy_sender(syLog, workNo);
                u_file.close();
                workNo++;
                msleep(10);
            }
        }
        if(!runThread) break;
        sleep(1);
        fileName = ("bit_all");
    }
}
