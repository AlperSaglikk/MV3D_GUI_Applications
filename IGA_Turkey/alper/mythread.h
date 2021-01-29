#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QObject>
#include <QDateTime>


class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = 0);
    void run();
    bool runThread;
signals:
    void endlessloop(int ,int, QDateTime, QString, QString);
};

#endif // MYTHREAD_H
