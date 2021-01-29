#ifndef DIALOG_DCB_H
#define DIALOG_DCB_H
#include "worker_dcb.h"
#include <QDialog>

namespace Ui {
class dialog_dcb;
}

class dialog_dcb : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_dcb(QWidget *parent = 0);
    ~dialog_dcb();
    worker_dcb *dcb_worker;
//    int dcb[314];
signals:
    void dcfaultState(int, int);
public slots:
    void dcb_taker(QString, int);
    void dcbOpenTab(int);
    void initilazer();
private:
    Ui::dialog_dcb *ui;
};

#endif // DIALOG_DCB_H
