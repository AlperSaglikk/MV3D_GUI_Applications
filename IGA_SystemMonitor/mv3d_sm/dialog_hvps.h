#ifndef DIALOG_HVPS_H
#define DIALOG_HVPS_H
#include "worker_hvps.h"
#include <QDialog>
#include <QComboBox>
#include <QGridLayout>
#include <QLabel>

namespace Ui {
class dialog_hvps;
}

class dialog_hvps : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_hvps(QWidget *parent = 0);
    ~dialog_hvps();
    worker_hvps *hv_worker;
    int mv3d_no;
    void enableSeason();
    void disableSeason();
//    int hvps[56];
signals:
    void hvfaultState(int, int);
public slots:
    void hv_taker(QString, int);
    void hvOpenTab(int);
    void initilazer();
    void gettingWarmHuh();
protected:
    void closeEvent(QCloseEvent *event);
private:
    Ui::dialog_hvps *ui;
    void on_start_button_clicked();
    QComboBox *comboSeason;
    QWidget *window;
    QPushButton *start;
    QGridLayout *grid;
    QLabel *label;

private slots:
    void on_hvps_control_button_clicked();
};

#endif // DIALOG_HVPS_H
