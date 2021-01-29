#ifndef ALPER_H
#define ALPER_H
#include "mythread.h"
#include <QMainWindow>
#include <QDateTime>
namespace Ui {
    class alper;
}

class alper : public QMainWindow
{
    Q_OBJECT
public:
    explicit alper(QWidget *parent = 0);
    ~alper();
    mythread *mthread;
private:
    Ui::alper *ui;
    void stopProcess();
public slots:
    void writer(int, int, QDateTime, QString, QString);
    void reset(int, int);
    void con_lcc(int);
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void on_ED_28_lcc_clicked();
    void on_ED_27_lcc_clicked();
    void on_ED_26_lcc_clicked();
    void on_ED_25_lcc_clicked();
    void on_ED_24_lcc_clicked();
    void on_ED_23_lcc_clicked();
    void on_ED_20_lcc_clicked();
    void on_ED_19_lcc_clicked();
    void on_ED_18_lcc_clicked();
    void on_ED_17_lcc_clicked();
    void on_ED_16_lcc_clicked();
    void on_ED_15_lcc_clicked();
    void on_ED_14_lcc_clicked();
    void on_ED_13_lcc_clicked();
    void on_ED_12_lcc_clicked();
    void on_ED_11_lcc_clicked();
    void on_ED_10_lcc_clicked();
    void on_ED_09_lcc_clicked();
    void on_ED_06_lcc_clicked();
    void on_ED_05_lcc_clicked();
    void on_ED_04_lcc_clicked();
    void on_ED_03_lcc_clicked();
    void on_ED_02_lcc_clicked();
    void on_ED_01_lcc_clicked();
    void on_manuelactive_clicked();
    void on_quickactive_clicked();
    void on_system_monitor_clicked();
    void on_silentmode_bt_clicked();
    void on_screenshot_bt_clicked();
    void on_bag_finder_bt_clicked();
    void on_terminal_clicked();
    void on_usb_unmount_clicked();
    void on_usb_mount_clicked();
    void on_save_flt_button_clicked();
    void on_log_finder_button_clicked();
    void on_call_button_clicked();
    void on_fault_screen_button_clicked();
    void on_pushButton_24_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_20_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_17_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_fault_display_button_clicked();
    void on_fault_browser_button_clicked();
};

#endif // ALPER_H
