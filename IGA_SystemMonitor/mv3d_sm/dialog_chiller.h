#ifndef DIALOG_CHILLER_H
#define DIALOG_CHILLER_H
#include "worker_chiller.h"
#include <QDialog>

namespace Ui {
class dialog_chiller;
}

class dialog_chiller : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_chiller(QWidget *parent = 0);
    ~dialog_chiller();
    worker_chiller *ch_worker;
//    int ch[12];
signals:
    void chfaultState(int, int);
protected:
    void closeEvent(QCloseEvent *event);
public slots:
    void ch_taker(QString, int);
    void initilazer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog_chiller *ui;
    QWidget *flowWindow;
};

#endif // DIALOG_CHILLER_H
