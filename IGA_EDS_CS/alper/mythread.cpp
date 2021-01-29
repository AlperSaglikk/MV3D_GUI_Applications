#include "mythread.h"
#include <QtCore>
#include <QDebug>

mythread::mythread(QObject *parent) :
        QThread(parent)
{
    runThread = true;
}

void mythread::run()
{
    int ed_no = 0;
    int array[] = {17, 20, 21, 22, 23, 24, 25, 26, 27, 28, 32, 33, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    system("mkdir -p /home/eds_cm/.eds_cs_files/log_eds_control_station/.mv3d_faults && mkdir -p /tmp/ecs_screenshots && mkdir -p /tmp/ecs_fault_logs && touch /home/eds_cm/.eds_cs_files/log_eds_control_station/eds_log.txt && touch /home/eds_cm/.eds_cs_files/log_eds_control_station/scc.txt && touch /home/eds_cm/.eds_cs_files/log_eds_control_station/usbcontrol.txt && touch /home/eds_cm/.eds_cs_files/log_eds_control_station/usblocation.txt && touch /home/eds_cm/.eds_cs_files/log_eds_control_station/.mv3d_faults/faults.csv");
    while(runThread)    {
        QString log;
        QString log1;
        QString a1 = ("ssh -qo ConnectTimeout=1 10.1.10." + QString::number(array[ed_no]) + " 'ssh -qo ConnectTimeout=1 scc 'tail -n 200 /opt/eds/log/bms.log'' | grep -E 'got SCS Opstate = |scs_fault_cause = ' | tail -n 2 | tr '\n' '@' | sed -e 's/.*scs_fault_//' -e 's/cause = 10/USERREQUESTED/' -e 's/cause = 11/SUBSYSTEMMISSING/' -e 's/cause = 12/PASSTHROUGH/' -e 's/cause = 13/DCBOFFSET_FAILURE/' -e 's/cause = 14/DARKCAL_REQUESTED/' -e 's/cause = 15/ENCODERCNT_EXCEEDED/' -e 's/cause = 16/ESTOP/' -e 's/cause = 17/ILOCK/' -e 's/cause = 18/HVPS_RAMPUP/' -e 's/cause = 19/STANDBY/' -e 's/cause = 20/REBOOT/' -e 's/cause = 21/WATCHDOG/' -e 's/cause = 22/SYSTIC_FAULT/' -e 's/cause = 23/ENCODER_FAULT/' -e 's/cause = 24/LIGHT_CURTAIN_FAULT/' -e 's/cause = 25/GALIL_FAULT/' -e 's/cause = 26/ACUVIM_FAULT/' -e 's/cause = 27/YASKAWA_FAULT/' -e 's/cause = 28/MFORCE_FAULT/' -e 's/cause = 29/UPS_FAULT/' -e 's/cause = 30/HVPS_FAULT/' -e 's/cause = 31/DCB_FAULT/' -e 's/cause = 32/SYSTEM_VERIFY_FAULT/' -e 's/cause = 33/BMS_ENTRANCE_BAG_JAM/' -e 's/cause = 34/BMS_BHS_FAULT/' -e 's/cause = 35/SYSTIC_TIMEOUT/' -e 's/cause = 36/SDB2_TIMEOUT/' -e 's/cause = 37/DCB_TIMEOUT/' -e 's/cause = 38/DPP_RTR_DOWN/' -e 's/cause = 39/BMS_RTR_DOWN/' -e 's/cause = 40/IAC_RTR_DOWN/' -e 's/cause = 41/DPP_OPSTATE_FAULT/' -e 's/cause = 42/IAC_OPSTATE_FAULT/' -e 's/cause = 43/INIT_TIMEOUT_FAULT/' -e 's/cause = 44/SEASONING_FAILED/' -e 's/cause = 45/TRANSIENTS_FAILED/' -e 's/cause = 46/ARRAYTESTS_FAILED/' -e 's/cause = 47/BMS_SUBSYS_MISSING/' -e 's/cause = 48/IAC_SUBSYS_MISSING/' -e 's/cause = 49/DPP_SUBSYS_MISSING/' -e 's/cause = 50/DIAGS_SUBSYS_MISSING/' -e 's/cause = 51/PLC_CONNECTION_LOSS/' -e 's/cause = 52/DPP_HIGH_WATERMARK/' -e 's/cause = 54/CHILLER_FAULT/' -e 's/cause = 0/NONE/' -e 's/cause = 1/WAITINGFORDEVICES/' -e 's/cause = 2/DEVICEUNINITILAZED/' -e 's/cause = 3/KEYPOWEROFF/' -e 's/cause = 4/SDB2FAULT/' -e 's/cause = 5/BIT_FAULT/' -e 's/cause = 6/DIAG_FAULT/' -e 's/cause = 7/DIAG_POST_TIMEOUT/' -e 's/cause = 8/SRC_FAILED/' -e 's/cause = 9/ISHWFAULTCONDITION/' -e 's/@.*SCS Opstate =/ /' -e 's/ 11@$/DIEBACK/' -e 's/ 21@$/STANDBY/' -e 's/ 2@$/FAULT/' -e 's/ 8@$/IDLE/' -e 's/ 28@$/FAULT/' -e 's/ 29@$/FLUSH_TUNNEL/' -e 's/ 7@$/DIAGNOSTIC/' -e 's/ 9@$/STARTUP/' -e 's/ 10@$/SYSTEM_CHECK/' -e 's/ 23@$/STARTUP/' -e 's/ 25@$/STARTUP/' -e 's/ 1@$/SCAN/' -e 's/ 0@$/IDLE/' -e 's/ 24@$/STARTUP/' -e 's/ 5@$/STARTUP/' -e 's/ 4@$/FAULT/''' > //home//eds_cm//.eds_cs_files//log_eds_control_station//eds_log.txt");

        char* c = new char[a1.length() + 1];
        strcpy(c, a1.toLatin1().constData());
        system(c);

        QFile dosya("//home//eds_cm//.eds_cs_files//log_eds_control_station//eds_log.txt");
        if(!dosya.open(QIODevice::ReadOnly))
            qDebug() << "File Not Found";

        QTextStream in(&dosya);
        in >> log;
        in >> log1;

        QDateTime dt = QDateTime::currentDateTime();
        emit endlessloop(array[ed_no], ed_no, dt, log, log1);
        ed_no++;
        msleep(10);

        if(ed_no == 24)
            ed_no = 0;
    }
}
