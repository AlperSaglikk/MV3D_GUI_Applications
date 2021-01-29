/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Aug 10 10:54:15 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QPushButton *button_hvps1;
    QPushButton *button_dcb_2;
    QPushButton *button_hvps3;
    QPushButton *button_hvps2;
    QPushButton *button_chiller;
    QPushButton *button_pdu_right;
    QPushButton *button_pdu_left;
    QPushButton *button_sdb;
    QPushButton *button_systic;
    QPushButton *button_dcb_4;
    QPushButton *button_dcb_6;
    QPushButton *button_dcb_1;
    QPushButton *button_dcb_3;
    QPushButton *button_dcb_5;
    QPushButton *button_dcb_7;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_13;
    QLabel *label_reload;
    QLabel *label_mv3d;
    QFrame *line;
    QComboBox *mv3d_comboBox;
    QFrame *line_2;
    QPushButton *call_Button;
    QPushButton *stop_button;
    QLabel *mv3dNo_label;
    QLabel *state_label;
    QLabel *label_state;
    QLabel *Creator_Label;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(907, 809);
        MainWindow->setMinimumSize(QSize(907, 756));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/sm_mv3d_mdf.jpg);\n"
"background-repeat: no-repeat;"));
        button_hvps1 = new QPushButton(widget_3);
        button_hvps1->setObjectName(QString::fromUtf8("button_hvps1"));
        button_hvps1->setGeometry(QRect(128, 225, 66, 43));
        button_hvps1->setFocusPolicy(Qt::NoFocus);
        button_hvps1->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/hvps.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;\n"
""));
        button_hvps1->setFlat(false);
        button_dcb_2 = new QPushButton(widget_3);
        button_dcb_2->setObjectName(QString::fromUtf8("button_dcb_2"));
        button_dcb_2->setGeometry(QRect(328, 54, 73, 148));
        button_dcb_2->setFocusPolicy(Qt::NoFocus);
        button_dcb_2->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_2.png);\n"
"border: 0px;"));
        button_hvps3 = new QPushButton(widget_3);
        button_hvps3->setObjectName(QString::fromUtf8("button_hvps3"));
        button_hvps3->setGeometry(QRect(494, 226, 64, 42));
        button_hvps3->setFocusPolicy(Qt::NoFocus);
        button_hvps3->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/hvps_3.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;"));
        button_hvps3->setFlat(false);
        button_hvps2 = new QPushButton(widget_3);
        button_hvps2->setObjectName(QString::fromUtf8("button_hvps2"));
        button_hvps2->setGeometry(QRect(701, 540, 68, 44));
        button_hvps2->setFocusPolicy(Qt::NoFocus);
        button_hvps2->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/hvps_2.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;\n"
""));
        button_hvps2->setFlat(false);
        button_chiller = new QPushButton(widget_3);
        button_chiller->setObjectName(QString::fromUtf8("button_chiller"));
        button_chiller->setGeometry(QRect(268, 527, 68, 62));
        button_chiller->setFocusPolicy(Qt::NoFocus);
        button_chiller->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/chiller.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;"));
        button_chiller->setFlat(false);
        button_pdu_right = new QPushButton(widget_3);
        button_pdu_right->setObjectName(QString::fromUtf8("button_pdu_right"));
        button_pdu_right->setGeometry(QRect(736, 216, 68, 51));
        button_pdu_right->setFocusPolicy(Qt::NoFocus);
        button_pdu_right->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/pdu_right.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;\n"
""));
        button_pdu_right->setFlat(false);
        button_pdu_left = new QPushButton(widget_3);
        button_pdu_left->setObjectName(QString::fromUtf8("button_pdu_left"));
        button_pdu_left->setGeometry(QRect(93, 533, 66, 51));
        button_pdu_left->setFocusPolicy(Qt::NoFocus);
        button_pdu_left->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/pdu_left.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;\n"
""));
        button_pdu_left->setFlat(false);
        button_sdb = new QPushButton(widget_3);
        button_sdb->setObjectName(QString::fromUtf8("button_sdb"));
        button_sdb->setGeometry(QRect(277, 83, 47, 63));
        button_sdb->setFocusPolicy(Qt::NoFocus);
        button_sdb->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/sdb.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;"));
        button_sdb->setFlat(false);
        button_systic = new QPushButton(widget_3);
        button_systic->setObjectName(QString::fromUtf8("button_systic"));
        button_systic->setGeometry(QRect(606, 97, 38, 42));
        button_systic->setFocusPolicy(Qt::NoFocus);
        button_systic->setStyleSheet(QString::fromUtf8("background-image: url(:/imag/systic.png);\n"
"background-repeat: no-repeat;\n"
"border: 0px;\n"
""));
        button_systic->setFlat(false);
        button_dcb_4 = new QPushButton(widget_3);
        button_dcb_4->setObjectName(QString::fromUtf8("button_dcb_4"));
        button_dcb_4->setGeometry(QRect(401, 54, 68, 148));
        button_dcb_4->setFocusPolicy(Qt::NoFocus);
        button_dcb_4->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_4.png);\n"
"border: 0px;"));
        button_dcb_6 = new QPushButton(widget_3);
        button_dcb_6->setObjectName(QString::fromUtf8("button_dcb_6"));
        button_dcb_6->setGeometry(QRect(478, 54, 87, 148));
        button_dcb_6->setFocusPolicy(Qt::NoFocus);
        button_dcb_6->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_6.png);\n"
"border: 0px;\n"
""));
        button_dcb_1 = new QPushButton(widget_3);
        button_dcb_1->setObjectName(QString::fromUtf8("button_dcb_1"));
        button_dcb_1->setGeometry(QRect(547, 371, 67, 136));
        button_dcb_1->setFocusPolicy(Qt::NoFocus);
        button_dcb_1->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_1.png);\n"
"border: 0px;\n"
""));
        button_dcb_3 = new QPushButton(widget_3);
        button_dcb_3->setObjectName(QString::fromUtf8("button_dcb_3"));
        button_dcb_3->setGeometry(QRect(425, 371, 115, 147));
        button_dcb_3->setFocusPolicy(Qt::NoFocus);
        button_dcb_3->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_3.png);\n"
"border: 0px;\n"
""));
        button_dcb_5 = new QPushButton(widget_3);
        button_dcb_5->setObjectName(QString::fromUtf8("button_dcb_5"));
        button_dcb_5->setGeometry(QRect(354, 371, 67, 147));
        button_dcb_5->setFocusPolicy(Qt::NoFocus);
        button_dcb_5->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_5.png);\n"
"border: 0px;\n"
""));
        button_dcb_7 = new QPushButton(widget_3);
        button_dcb_7->setObjectName(QString::fromUtf8("button_dcb_7"));
        button_dcb_7->setGeometry(QRect(286, 371, 68, 147));
        button_dcb_7->setFocusPolicy(Qt::NoFocus);
        button_dcb_7->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-image: url(:/imag/dcb_7.png);\n"
"border: 0px;\n"
""));
        button_dcb_2->raise();
        button_hvps3->raise();
        button_hvps2->raise();
        button_pdu_right->raise();
        button_pdu_left->raise();
        button_systic->raise();
        button_sdb->raise();
        button_dcb_4->raise();
        button_dcb_6->raise();
        button_dcb_1->raise();
        button_dcb_3->raise();
        button_dcb_5->raise();
        button_dcb_7->raise();
        button_hvps1->raise();
        button_chiller->raise();

        gridLayout->addWidget(widget_3, 2, 0, 1, 4);

        widget_5 = new QWidget(centralWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(0, 90));
        widget_5->setMaximumSize(QSize(16777215, 90));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 98, 98);\n"
"background-color: rgb(255, 255, 255);\n"
"border: 0px solid black;"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(widget_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 30));
        widget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 0, 0);\n"
"font: 75 bold 12pt \"Sans Serif\";\n"
"border: 1px solid black"));
        gridLayout_13 = new QGridLayout(widget);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 6, -1, 6);
        label_reload = new QLabel(widget);
        label_reload->setObjectName(QString::fromUtf8("label_reload"));
        label_reload->setStyleSheet(QString::fromUtf8("font: 75 bold 12pt \"Sans Serif\";\n"
"border: 0px"));

        gridLayout_13->addWidget(label_reload, 0, 3, 1, 1);

        label_mv3d = new QLabel(widget);
        label_mv3d->setObjectName(QString::fromUtf8("label_mv3d"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_mv3d->setFont(font);
        label_mv3d->setStyleSheet(QString::fromUtf8("font: 75 bold 12pt \"Sans Serif\";\n"
"border: 0px"));

        gridLayout_13->addWidget(label_mv3d, 0, 0, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(2, 10));
        line->setMaximumSize(QSize(2, 25));
        line->setStyleSheet(QString::fromUtf8("border: 1px solid black"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::VLine);

        gridLayout_13->addWidget(line, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 5);

        mv3d_comboBox = new QComboBox(widget_5);
        mv3d_comboBox->setObjectName(QString::fromUtf8("mv3d_comboBox"));
        mv3d_comboBox->setMinimumSize(QSize(0, 22));
        mv3d_comboBox->setMaximumSize(QSize(16777215, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        mv3d_comboBox->setFont(font1);
        mv3d_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: bold 9pt  \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        mv3d_comboBox->setFrame(true);

        gridLayout_2->addWidget(mv3d_comboBox, 1, 0, 1, 2);

        line_2 = new QFrame(widget_5);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(2, 10));
        line_2->setMaximumSize(QSize(2, 25));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setMidLineWidth(2);
        line_2->setFrameShape(QFrame::VLine);

        gridLayout_2->addWidget(line_2, 1, 2, 1, 1);

        call_Button = new QPushButton(widget_5);
        call_Button->setObjectName(QString::fromUtf8("call_Button"));
        call_Button->setMinimumSize(QSize(0, 22));
        call_Button->setMaximumSize(QSize(16777215, 22));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        call_Button->setPalette(palette);
        call_Button->setFont(font1);
        call_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: bold 9pt  \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(call_Button, 1, 3, 1, 1);

        stop_button = new QPushButton(widget_5);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        stop_button->setMinimumSize(QSize(0, 22));
        stop_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: bold 9pt  \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(stop_button, 1, 4, 1, 1);


        gridLayout->addWidget(widget_5, 0, 0, 1, 4);

        mv3dNo_label = new QLabel(centralWidget);
        mv3dNo_label->setObjectName(QString::fromUtf8("mv3dNo_label"));
        mv3dNo_label->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        mv3dNo_label->setFont(font2);
        mv3dNo_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mv3dNo_label, 1, 0, 1, 2);

        state_label = new QLabel(centralWidget);
        state_label->setObjectName(QString::fromUtf8("state_label"));
        state_label->setMaximumSize(QSize(86, 16777215));
        QFont font3;
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setWeight(75);
        state_label->setFont(font3);
        state_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);"));
        state_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(state_label, 1, 3, 1, 1);

        label_state = new QLabel(centralWidget);
        label_state->setObjectName(QString::fromUtf8("label_state"));
        label_state->setMaximumSize(QSize(70, 16777215));
        label_state->setFont(font3);
        label_state->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_state, 1, 2, 1, 1);

        Creator_Label = new QLabel(centralWidget);
        Creator_Label->setObjectName(QString::fromUtf8("Creator_Label"));
        Creator_Label->setMaximumSize(QSize(16777215, 12));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Utopia"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        Creator_Label->setFont(font4);
        Creator_Label->setStyleSheet(QString::fromUtf8("font: italic 8pt \"Utopia\";\n"
"color: rgb(80, 80, 80);\n"
""));
        Creator_Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Creator_Label, 3, 0, 1, 4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 907, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        mv3d_comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SYSTEM MONITOR", 0, QApplication::UnicodeUTF8));
        button_hvps1->setText(QString());
        button_dcb_2->setText(QString());
        button_hvps3->setText(QString());
        button_hvps2->setText(QString());
        button_chiller->setText(QString());
        button_pdu_right->setText(QString());
        button_pdu_left->setText(QString());
        button_sdb->setText(QString());
        button_systic->setText(QString());
        button_dcb_4->setText(QString());
        button_dcb_6->setText(QString());
        button_dcb_1->setText(QString());
        button_dcb_3->setText(QString());
        button_dcb_5->setText(QString());
        button_dcb_7->setText(QString());
        label_reload->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">RELOAD</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_mv3d->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">MV3D NO</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        mv3d_comboBox->clear();
        mv3d_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "3D0037", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0040", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0035", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0036", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0038", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0039", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0025", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0017", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0023", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0022", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0033", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0032", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0020", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0028", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0021", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0026", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0027", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0044", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0046", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0043", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0045", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0041", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3D0042", 0, QApplication::UnicodeUTF8)
        );
        call_Button->setText(QApplication::translate("MainWindow", "START", 0, QApplication::UnicodeUTF8));
        stop_button->setText(QApplication::translate("MainWindow", "STOP", 0, QApplication::UnicodeUTF8));
        mv3dNo_label->setText(QString());
        state_label->setText(QApplication::translate("MainWindow", "STAND-BY", 0, QApplication::UnicodeUTF8));
        label_state->setText(QApplication::translate("MainWindow", "SM STATUS:", 0, QApplication::UnicodeUTF8));
        Creator_Label->setText(QApplication::translate("MainWindow", "Created by ALPER SAGLIK   ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
