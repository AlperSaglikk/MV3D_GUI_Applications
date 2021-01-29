#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = 0);
    void run();
    int mv3d_no;
    bool runThread;
signals:
    void ch_showStarter();
    void dc_showStarter();
    void hv_showStarter();
    void sy_showStarter();
    void mainStatus(int);
public slots:

};

#endif // MYTHREAD_H
