#include "mythread.h"
#include <QtCore>
#include <QDebug>

mythread::mythread(QObject *parent) : QThread(parent)
{
    runThread = true;
    system("mkdir -p /tmp/.sm_logs/; touch /tmp/.sm_logs/bit_all; touch /tmp/.sm_logs/bit_ch; touch /tmp/.sm_logs/bit_dcb; touch /tmp/.sm_logs/bit_hv; touch /tmp/.sm_logs/bit_sy; touch /tmp/.sm_logs/bit4dcb; touch /tmp/.sm_logs/bit4ch; touch /tmp/.sm_logs/bit4hv; touch /tmp/.sm_logs/bit4sy; touch /tmp/.sm_logs/lineNo.txt");
}

void mythread::run()
{
    QString firestarter = ("ssh 10.50.0." + QString::number(mv3d_no) + " ssh scc cat /opt/eds/log/diag/bit/bit_20* | grep -E 'S:DISCRETES|HVPS|FPGA|CHILLER|SYSTIC|Photocells|boardTemp|UPS' | grep -Ev ':ENCODER|:VIN' > /tmp/.sm_logs/bit_all");
    char* f = new char[firestarter.length() + 1];
    strcpy(f, firestarter.toLatin1().constData());
    system(f);
    //SEPERATORS
    QString kokusuchilleregeldi = ("cat /tmp/.sm_logs/bit_all | grep CHILLER > /tmp/.sm_logs/bit4ch");
    char* ch = new char[kokusuchilleregeldi.length() + 1];
    strcpy(ch, kokusuchilleregeldi.toLatin1().constData());
    system(ch);

    QString dcbcimegelsin = ("cat /tmp/.sm_logs/bit_all | grep FPGA > /tmp/.sm_logs/bit4dcb");
    char* dc = new char[dcbcimegelsin.length() + 1];
    strcpy(dc, dcbcimegelsin.toLatin1().constData());
    system(dc);

    QString hvpsninbiyerisiser = ("cat /tmp/.sm_logs/bit_all | grep HVPS > /tmp/.sm_logs/bit4hv");
    char* hv = new char[hvpsninbiyerisiser.length() + 1];
    strcpy(hv, hvpsninbiyerisiser.toLatin1().constData());
    system(hv);

    QString systicdururmu = ("cat /tmp/.sm_logs/bit_all | grep -E 'S:DISCRETES|SYSTIC|Photocells|boardTemp|UPS' | grep -Ev 'ENCODER|VIN' > /tmp/.sm_logs/bit4sy");
    char* sy = new char[systicdururmu.length() + 1];
    strcpy(sy, systicdururmu.toLatin1().constData());
    system(sy);
    //
    emit mainStatus(1);
    emit ch_showStarter();
    emit dc_showStarter();
    emit hv_showStarter();
    emit sy_showStarter();

    while(runThread) {
        QString secfirestarter = ("ssh 10.50.0." + QString::number(mv3d_no) + " ssh scc tail -1000 `ssh 10.50.0." + QString::number(mv3d_no) + "  scc ls -d -1 /opt/eds/log/diag/bit/bit_20* | tail -n 1` | grep -E 'S:DISCRETES|HVPS|FPGA|CHILLER|SYSTIC|Photocells|boardTemp|UPS' | grep -Ev ':ENCODER|:VIN' >  /tmp/.sm_logs/bit_all");
        char* f1 = new char[secfirestarter.length() + 1];
        strcpy(f1, secfirestarter.toLatin1().constData());
        system(f1);
        sleep(1);
    }
}
