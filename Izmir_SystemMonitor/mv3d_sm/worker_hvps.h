#ifndef WORKER_HVPS_H
#define WORKER_HVPS_H

#include <QObject>
#include <QThread>

class worker_hvps : public QThread
{
    Q_OBJECT
public:
    explicit worker_hvps(QObject *parent = 0);
    void run();
    bool runThread;
signals:
    void hv_sender(QString, int);
    void hv_init();
};

#endif // WORKER_HVPS_H
