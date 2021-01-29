/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Aug 7 11:57:17 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_bag_no;
    QComboBox *comboBox_area;
    QComboBox *comboBox_logs;
    QPushButton *call_pushButton;
    QLabel *label_5;
    QComboBox *comboBox_mv3d;
    QDateEdit *date_selection_box;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *date_checkBox;
    QRadioButton *mv3d_radioButton;
    QRadioButton *area_radioButton;
    QSpacerItem *horizontalSpacer_11;
    QFrame *line_6;
    QSpacerItem *horizontalSpacer_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1365, 539);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 212, 212);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(1350, 0));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-radius: 17px;"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 100));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 12, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 22, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 26, 1, 1);

        lineEdit_bag_no = new QLineEdit(widget);
        lineEdit_bag_no->setObjectName(QString::fromUtf8("lineEdit_bag_no"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_bag_no->sizePolicy().hasHeightForWidth());
        lineEdit_bag_no->setSizePolicy(sizePolicy);
        lineEdit_bag_no->setMinimumSize(QSize(175, 25));
        lineEdit_bag_no->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 135, 203);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"margin-left:2px;\n"
"margin-right:2px;\n"
"padding:2px;\n"
"margin:1px;"));

        gridLayout_2->addWidget(lineEdit_bag_no, 1, 0, 1, 1);

        comboBox_area = new QComboBox(widget);
        comboBox_area->setObjectName(QString::fromUtf8("comboBox_area"));
        comboBox_area->setMinimumSize(QSize(175, 25));
        comboBox_area->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 135, 203);\n"
"border-color: rpg(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"margin-left:2px;\n"
"margin-right:2px;\n"
"padding:2px;\n"
"margin:1px;"));

        gridLayout_2->addWidget(comboBox_area, 1, 12, 1, 1);

        comboBox_logs = new QComboBox(widget);
        comboBox_logs->setObjectName(QString::fromUtf8("comboBox_logs"));
        comboBox_logs->setMinimumSize(QSize(175, 25));
        comboBox_logs->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 135, 203);\n"
"border-color: rpg(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"margin-left:2px;\n"
"margin-right:2px;\n"
"padding:2px;\n"
"margin:1px;"));

        gridLayout_2->addWidget(comboBox_logs, 1, 22, 1, 1);

        call_pushButton = new QPushButton(widget);
        call_pushButton->setObjectName(QString::fromUtf8("call_pushButton"));
        call_pushButton->setMinimumSize(QSize(100, 25));
        call_pushButton->setMaximumSize(QSize(16777215, 25));
        call_pushButton->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 135, 203);\n"
"border-color: rpg(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"margin-left:2px;\n"
"margin-right:2px;\n"
"padding:2px;\n"
"margin:1px;"));
        call_pushButton->setFlat(false);

        gridLayout_2->addWidget(call_pushButton, 1, 26, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 8, 1, 1);

        comboBox_mv3d = new QComboBox(widget);
        comboBox_mv3d->setObjectName(QString::fromUtf8("comboBox_mv3d"));
        comboBox_mv3d->setMinimumSize(QSize(175, 25));
        comboBox_mv3d->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 135, 203);\n"
"border-color: rpg(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"margin-left:2px;\n"
"margin-right:2px;\n"
"padding:2px;\n"
"margin:1px;"));

        gridLayout_2->addWidget(comboBox_mv3d, 1, 8, 1, 1);

        date_selection_box = new QDateEdit(widget);
        date_selection_box->setObjectName(QString::fromUtf8("date_selection_box"));
        date_selection_box->setMinimumSize(QSize(175, 0));
        date_selection_box->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 135, 203);\n"
"border-color: rpg(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"margin-left:2px;\n"
"margin-right:2px;\n"
"padding:2px;\n"
"margin:1px;"));
        date_selection_box->setCalendarPopup(true);
        date_selection_box->setDate(QDate(2018, 9, 11));

        gridLayout_2->addWidget(date_selection_box, 1, 18, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 21, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 BOLD 9pt \"Sans Serif\";"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 16, 1, 3);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 2, 2, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 10, 2, 1);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 0, 14, 2, 1);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 20, 2, 1);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 0, 24, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 19, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 23, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 25, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 15, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 13, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 11, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 1, 9, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 3, 2, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 1, 1, 1, 1);

        date_checkBox = new QCheckBox(widget);
        date_checkBox->setObjectName(QString::fromUtf8("date_checkBox"));
        date_checkBox->setMinimumSize(QSize(65, 25));

        gridLayout_2->addWidget(date_checkBox, 1, 17, 1, 1);

        mv3d_radioButton = new QRadioButton(widget);
        mv3d_radioButton->setObjectName(QString::fromUtf8("mv3d_radioButton"));

        gridLayout_2->addWidget(mv3d_radioButton, 0, 4, 1, 1);

        area_radioButton = new QRadioButton(widget);
        area_radioButton->setObjectName(QString::fromUtf8("area_radioButton"));

        gridLayout_2->addWidget(area_radioButton, 1, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 1, 5, 1, 1);

        line_6 = new QFrame(widget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_6, 0, 6, 2, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_12, 1, 7, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1365, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BAG FINDER", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"></p>\n"
"<p style=\"-qt-paragrap"
                        "h-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "IATA or PSEUDO ID", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "AREA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "LOGS", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "SEARCH", 0, QApplication::UnicodeUTF8));
        comboBox_area->clear();
        comboBox_area->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2-1(WEST)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2-3(Mid-WEST)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2-4(Mid-EAST)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2-6(EAST)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2-1 & 2-3(WEST SIDE)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2-4 & 2-6 (EAST SIDE)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ALL AREA", 0, QApplication::UnicodeUTF8)
        );
        comboBox_logs->clear();
        comboBox_logs->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "LAST MODIFIED LOG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "DETAILED LOGS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ALL LOGS", 0, QApplication::UnicodeUTF8)
        );
        call_pushButton->setText(QApplication::translate("MainWindow", "CALL", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "MV3D", 0, QApplication::UnicodeUTF8));
        comboBox_mv3d->clear();
        comboBox_mv3d->insertItems(0, QStringList()
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
        date_selection_box->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "DATE", 0, QApplication::UnicodeUTF8));
        date_checkBox->setText(QApplication::translate("MainWindow", "Enable", 0, QApplication::UnicodeUTF8));
        mv3d_radioButton->setText(QApplication::translate("MainWindow", "MV3D", 0, QApplication::UnicodeUTF8));
        area_radioButton->setText(QApplication::translate("MainWindow", "AREA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
