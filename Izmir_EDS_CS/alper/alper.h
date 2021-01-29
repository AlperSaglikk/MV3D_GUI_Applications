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
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void on_system_monitor_clicked();
    void on_reset_78_clicked();
    void on_reset_70_clicked();
    void on_reset_69_clicked();
    void on_reset_68_clicked();
    void on_terminal_clicked();
    void on_usb_mount_clicked();
    void on_call_button_clicked();
    void on_usb_unmount_clicked();
    void on_bag_finder_bt_clicked();
    void on_screenshot_bt_clicked();
    void on_silentmode_bt_clicked();
    void on_save_flt_button_clicked();
    void on_log_finder_button_clicked();
    void on_fault_screen_button_clicked();
    void on_fault_display_button_clicked();
    void on_fault_browser_button_clicked();
    void on_manuelactive_toggled(bool checked);
};

#endif // ALPER_H
