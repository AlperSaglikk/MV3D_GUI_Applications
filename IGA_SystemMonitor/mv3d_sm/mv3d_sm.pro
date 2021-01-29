#-------------------------------------------------
#
# Project created by QtCreator 2020-05-13T10:53:46
#
#-------------------------------------------------

QT       += core gui

TARGET = mv3d_sm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_chiller.cpp \
    dialog_dcb.cpp \
    dialog_systic.cpp \
    dialog_hvps.cpp \
    mythread.cpp \
    worker_chiller.cpp \
    worker_dcb.cpp \
    worker_hvps.cpp \
    worker_systic.cpp

HEADERS  += mainwindow.h \
    dialog_chiller.h \
    dialog_dcb.h \
    dialog_systic.h \
    dialog_hvps.h \
    mythread.h \
    worker_chiller.h \
    worker_dcb.h \
    worker_hvps.h \
    worker_systic.h

FORMS    += mainwindow.ui \
    dialog_chiller.ui \
    dialog_dcb.ui \
    dialog_systic.ui \
    dialog_hvps.ui

RESOURCES += \
    sm_images.qrc
