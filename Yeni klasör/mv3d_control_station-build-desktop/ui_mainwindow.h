/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Aug 15 12:55:48 2019
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
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_3d0060;
    QComboBox *cmb_3d0060;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QComboBox *cmb_3d0061;
    QLabel *label_2;
    QPushButton *pushButton_3d0061;
    QLabel *info;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(473, 374);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(2, 2, 2);"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_3d0060 = new QPushButton(groupBox_2);
        pushButton_3d0060->setObjectName(QString::fromUtf8("pushButton_3d0060"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_3d0060->setFont(font);
        pushButton_3d0060->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 202, 202);\n"
""));

        gridLayout_3->addWidget(pushButton_3d0060, 1, 0, 1, 2);

        cmb_3d0060 = new QComboBox(groupBox_2);
        cmb_3d0060->setObjectName(QString::fromUtf8("cmb_3d0060"));
        cmb_3d0060->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: bold 9pt \"Sans Serif\";"));

        gridLayout_3->addWidget(cmb_3d0060, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cmb_3d0061 = new QComboBox(groupBox);
        cmb_3d0061->setObjectName(QString::fromUtf8("cmb_3d0061"));
        cmb_3d0061->setStyleSheet(QString::fromUtf8("font: bold 9pt \"Sans Serif\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(cmb_3d0061, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        pushButton_3d0061 = new QPushButton(groupBox);
        pushButton_3d0061->setObjectName(QString::fromUtf8("pushButton_3d0061"));
        pushButton_3d0061->setFont(font);
        pushButton_3d0061->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 202, 202);\n"
""));

        gridLayout_4->addWidget(pushButton_3d0061, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);

        info = new QLabel(widget);
        info->setObjectName(QString::fromUtf8("info"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setMaximumSize(QSize(16777215, 25));
        info->setStyleSheet(QString::fromUtf8("font: bold 9pt \"Sans Serif\";"));

        gridLayout_2->addWidget(info, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 473, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EDS_CONTROL_STATION", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        pushButton_3d0060->setText(QApplication::translate("MainWindow", "RESET", 0, QApplication::UnicodeUTF8));
        cmb_3d0060->clear();
        cmb_3d0060->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "IAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "DPP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ALL", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "3D0060", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        cmb_3d0061->clear();
        cmb_3d0061->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "IAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "DPP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ALL", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "3D0061", 0, QApplication::UnicodeUTF8));
        pushButton_3d0061->setText(QApplication::translate("MainWindow", "RESET", 0, QApplication::UnicodeUTF8));
        info->setText(QApplication::translate("MainWindow", "INFO:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
