#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dialog_hvps.h>
#include <dialog_dcb.h>
#include <dialog_systic.h>
#include <dialog_chiller.h>
#include <mythread.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void ch_showBegin();
    void dc_showBegin();
    void hv_showBegin();
    void sy_showBegin();
    void getSignal(int, int);
    void mv3d_status(int);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_stop_button_clicked();
    void on_call_Button_clicked();

    void on_button_hvps1_clicked();

    void on_button_hvps3_clicked();

    void on_button_hvps2_clicked();

    void on_button_sdb_clicked();

    void on_button_systic_clicked();

    void on_button_pdu_right_clicked();

    void on_button_pdu_left_clicked();

    void on_button_chiller_clicked();

    void on_button_dcb_1_clicked();

    void on_button_dcb_2_clicked();

    void on_button_dcb_3_clicked();

    void on_button_dcb_4_clicked();

    void on_button_dcb_5_clicked();

    void on_button_dcb_6_clicked();

    void on_button_dcb_7_clicked();

private:
    Ui::MainWindow *ui;
    mythread *main_worker;
    dialog_hvps *d_hvps;
    dialog_hvps *d_hvps_2;
    dialog_hvps *d_hvps_3;
    dialog_dcb *d_dcb;
    dialog_dcb *d_dcb_2;
    dialog_dcb *d_dcb_3;
    dialog_dcb *d_dcb_4;
    dialog_dcb *d_dcb_5;
    dialog_dcb *d_dcb_6;
    dialog_dcb *d_dcb_7;
    dialog_systic *d_systic;
    dialog_chiller *d_chiller;
    int callCount;
    void prepareProcess();
    void stopProcess();

};
#endif // MAINWINDOW_H
