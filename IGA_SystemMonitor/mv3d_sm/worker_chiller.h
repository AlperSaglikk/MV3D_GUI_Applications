#ifndef WORKER_CHILLER_H
#define WORKER_CHILLER_H

#include <QObject>
#include <QThread>

class worker_chiller : public QThread
{
    Q_OBJECT
public:
    explicit worker_chiller(QObject *parent = 0);
    void run();
    bool runThread;
signals:
    void ch_sender(QString, int);
    void ch_init();
};

#endif // WORKER_CHILLER_H
