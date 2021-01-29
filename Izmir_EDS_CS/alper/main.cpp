#include <QtGui/QApplication>
#include "alper.h"
#include <iostream>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    alper w;
    w.show();
    return a.exec();
}
