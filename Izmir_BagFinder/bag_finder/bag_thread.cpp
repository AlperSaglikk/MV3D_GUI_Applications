#include "bag_thread.h"
#include <QtCore>
#include <QTextStream>
#include <QFile>
#include <QThread>

bag_thread::bag_thread(QObject *parent) :
        QThread(parent)
{
}

void bag_thread::run()
{
    int mv3d_no[] = {68, 69, 70, 78};
    runThread = true;
    if (!option)    {
        if (area == 0)    {
            for(int i=0; i <= 1 && runThread; i++)   {
                func(mv3d_no[i]);
            }
        }
        else if (area == 1)    {
            for(int i=2; i <= 3 && runThread; i++)   {
                func(mv3d_no[i]);
            }
        }
        else    {
            for(int i=0; i <= 3 && runThread; i++)   {
                func(mv3d_no[i]);
            }
        }
    }
    else    {
        func(mv3d_no[mv3d]);
    }
}

void bag_thread::func(int ed_no)
{
    QString logs = "";
    msleep(500);
    if(log == 0)
        logs = "/opt/eds/log/bhs.log";
    else if (log == 1)
        logs = "/opt/eds/log/bhs.log.2 /opt/eds/log/bhs.log.1 /opt/eds/log/bhs.log.0 /opt/eds/log/bhs.log";
    else
        logs = "/opt/eds/log/bhs.log*";

    emit textSender(ed_no);

    QString command = "ssh 10.50.0." + QString::number(ed_no) + " ssh scc less " + logs + " | grep '" + bag + "' | grep 'string' | sed -e 's/- 1;/- 1 - MACHINE ALARM;/' -e 's/- 2;/- 2 - MACHINE CLEAR;/' -e 's/- 3;/- 3 - BAG NOT ANALYZED;/' -e 's/- 4;/- 4 - PENDING DECISION;/' -e 's/- 5;/- 5 - TIMEOUT;/' -e 's/- 6;/- 6 - BAG SPACING ERROR;/' -e 's/- 7;/- 7 - FORCE REJECTED;/' -e 's/- 8;/- 8 - EDS ID PENDING;/' -e 's/- 9;/- 9 - EDS EXIT MISS-TRACK;/' -e 's/- 11;/- 11 - OPERATOR ALARM;/' -e 's/- 12;/- 12 - OPERATOR CLEAR;/' -e 's/- 13;/- 13 - OPERATOR OBVIOUS THREAT;/' -e 's/ \\[bhs.*.disposition/- Bag Decision/' -e 's/ \\[bhs.*.for bag/- Bag ID\\:/' -e 's/IATA decimal.*//''' | grep '" + date + "' > /tmp/.bag_finder";
    char* c = new char[command.length() + 1];
    strcpy(c, command.toLatin1().constData());
    system(c);

    emit sender();
}
