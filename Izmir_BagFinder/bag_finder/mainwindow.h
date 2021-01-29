#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <bag_thread.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bag_thread *b_thread;
public slots:
    void taker();
    void textFunc(int);
private:
    Ui::MainWindow *ui;
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void on_area_radioButton_clicked();
    void on_mv3d_radioButton_clicked();
    void on_date_checkBox_clicked(bool date_checked);
    void on_call_pushButton_clicked();
};

#endif // MAINWINDOW_H
