#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void reset(int,int);

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_3d0061_clicked();
    void on_pushButton_3d0060_clicked();
};

#endif // MAINWINDOW_H
