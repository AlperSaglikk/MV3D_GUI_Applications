#ifndef BAG_THREAD_H
#define BAG_THREAD_H
#include <QObject>
#include <QThread>

class bag_thread : public QThread
{
    Q_OBJECT
public:
    explicit bag_thread(QObject *parent = 0);
    void run();
    int area;
    int log;
    bool option;
    int mv3d;
    bool runThread;
    QString bag;
    QString date;
private:
    void func(int);
signals:
    void sender();
    void textSender(int);
public slots:

};

#endif // BAG_THREAD_H
