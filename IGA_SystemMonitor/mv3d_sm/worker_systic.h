#ifndef WORKER_SYSTIC_H
#define WORKER_SYSTIC_H

#include <QObject>
#include <QThread>

class worker_systic : public QThread
{
    Q_OBJECT
public:
    explicit worker_systic(QObject *parent = 0);
    void run();
    bool runThread;
signals:
    void sy_sender(QString, int);
    void sy_init();
};

#endif // WORKER_SYSTIC_H
