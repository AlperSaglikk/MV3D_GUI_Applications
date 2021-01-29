#ifndef WORKER_DCB_H
#define WORKER_DCB_H

#include <QObject>
#include <QThread>

class worker_dcb : public QThread
{
    Q_OBJECT
public:
    explicit worker_dcb(QObject *parent = 0);
    void run();
    bool runThread;
signals:
    void dcb_sender(QString, int);
    void dc_init();
};

#endif // WORKER_DCB_H
