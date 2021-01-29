#ifndef DIALOG_SYSTIC_H
#define DIALOG_SYSTIC_H
#include <QDialog>
#include "worker_systic.h"

namespace Ui {
class dialog_systic;
}

class dialog_systic : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_systic(QWidget *parent = 0);
    ~dialog_systic();
    worker_systic *sy_worker;
//    int sy[62];
signals:
    void syfaultState(int, int);
public slots:
    void sy_taker(QString, int);
    void initilazer();
private:
    Ui::dialog_systic *ui;
};

#endif // DIALOG_SYSTIC_H
