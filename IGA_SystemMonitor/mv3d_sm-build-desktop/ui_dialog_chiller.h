/********************************************************************************
** Form generated from reading UI file 'dialog_chiller.ui'
**
** Created: Mon Aug 10 10:54:15 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHILLER_H
#define UI_DIALOG_CHILLER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_chiller
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_4;
    QLabel *chiller_temp_label1;
    QLabel *chiller_temp_1;
    QLabel *chiller_temp_label2;
    QLabel *chiller_temp_2;
    QLabel *chiller_temp_label3;
    QLabel *chiller_temp_3;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *flow_sw_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *flow_sw_5;
    QLabel *flow_sw_6;
    QLabel *flow_sw_4;
    QLabel *flow_sw_9;
    QLabel *flow_sw_3;
    QPushButton *pushButton;
    QLabel *flow_sw_1;
    QSpacerItem *horizontalSpacer;
    QLabel *flow_sw_2;
    QLabel *flow_sw_7;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_28;
    QLabel *label_7;
    QLabel *chiller_interlock;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QDialog *dialog_chiller)
    {
        if (dialog_chiller->objectName().isEmpty())
            dialog_chiller->setObjectName(QString::fromUtf8("dialog_chiller"));
        dialog_chiller->resize(465, 360);
        dialog_chiller->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(dialog_chiller);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_6 = new QWidget(dialog_chiller);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_9 = new QGroupBox(widget_6);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        groupBox_9->setFont(font);
        groupBox_9->setStyleSheet(QString::fromUtf8("font: 75 bold 9pt \"MS Shell Dlg 2\";"));
        gridLayout_4 = new QGridLayout(groupBox_9);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        chiller_temp_label1 = new QLabel(groupBox_9);
        chiller_temp_label1->setObjectName(QString::fromUtf8("chiller_temp_label1"));
        chiller_temp_label1->setMaximumSize(QSize(140, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        chiller_temp_label1->setFont(font1);
        chiller_temp_label1->setStyleSheet(QString::fromUtf8("font: bold 9pt \"Sans Serif\";"));
        chiller_temp_label1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chiller_temp_label1, 0, 0, 1, 1);

        chiller_temp_1 = new QLabel(groupBox_9);
        chiller_temp_1->setObjectName(QString::fromUtf8("chiller_temp_1"));
        chiller_temp_1->setStyleSheet(QString::fromUtf8("margin-top: 1px;\n"
"margin-bottom: 1px;\n"
"border-radius: 3px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);"));
        chiller_temp_1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chiller_temp_1, 0, 1, 1, 1);

        chiller_temp_label2 = new QLabel(groupBox_9);
        chiller_temp_label2->setObjectName(QString::fromUtf8("chiller_temp_label2"));
        chiller_temp_label2->setMaximumSize(QSize(140, 16777215));
        chiller_temp_label2->setFont(font);
        chiller_temp_label2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chiller_temp_label2, 1, 0, 1, 1);

        chiller_temp_2 = new QLabel(groupBox_9);
        chiller_temp_2->setObjectName(QString::fromUtf8("chiller_temp_2"));
        chiller_temp_2->setStyleSheet(QString::fromUtf8("margin-top: 1px;\n"
"margin-bottom: 1px;\n"
"border-radius: 3px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);"));
        chiller_temp_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chiller_temp_2, 1, 1, 1, 1);

        chiller_temp_label3 = new QLabel(groupBox_9);
        chiller_temp_label3->setObjectName(QString::fromUtf8("chiller_temp_label3"));
        chiller_temp_label3->setMaximumSize(QSize(140, 16777215));
        chiller_temp_label3->setFont(font);
        chiller_temp_label3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chiller_temp_label3, 2, 0, 1, 1);

        chiller_temp_3 = new QLabel(groupBox_9);
        chiller_temp_3->setObjectName(QString::fromUtf8("chiller_temp_3"));
        chiller_temp_3->setStyleSheet(QString::fromUtf8("margin-top: 1px;\n"
"margin-bottom: 1px;\n"
"border-radius: 3px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);"));
        chiller_temp_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(chiller_temp_3, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_9, 2, 0, 1, 1);

        groupBox_8 = new QGroupBox(widget_6);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setStyleSheet(QString::fromUtf8("font: 75 bold 9pt \"MS Shell Dlg 2\";"));
        gridLayout_2 = new QGridLayout(groupBox_8);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 3, 1);

        flow_sw_8 = new QLabel(groupBox_8);
        flow_sw_8->setObjectName(QString::fromUtf8("flow_sw_8"));
        flow_sw_8->setMaximumSize(QSize(20, 26));
        flow_sw_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_8, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 3, 1);

        flow_sw_5 = new QLabel(groupBox_8);
        flow_sw_5->setObjectName(QString::fromUtf8("flow_sw_5"));
        flow_sw_5->setMaximumSize(QSize(20, 26));
        flow_sw_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_5, 1, 3, 1, 1);

        flow_sw_6 = new QLabel(groupBox_8);
        flow_sw_6->setObjectName(QString::fromUtf8("flow_sw_6"));
        flow_sw_6->setMaximumSize(QSize(20, 26));
        flow_sw_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_6, 1, 5, 1, 1);

        flow_sw_4 = new QLabel(groupBox_8);
        flow_sw_4->setObjectName(QString::fromUtf8("flow_sw_4"));
        flow_sw_4->setMaximumSize(QSize(20, 26));
        flow_sw_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_4, 1, 1, 1, 1);

        flow_sw_9 = new QLabel(groupBox_8);
        flow_sw_9->setObjectName(QString::fromUtf8("flow_sw_9"));
        flow_sw_9->setMaximumSize(QSize(20, 26));
        flow_sw_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_9, 2, 5, 1, 1);

        flow_sw_3 = new QLabel(groupBox_8);
        flow_sw_3->setObjectName(QString::fromUtf8("flow_sw_3"));
        flow_sw_3->setMaximumSize(QSize(20, 26));
        flow_sw_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_3, 0, 5, 1, 1);

        pushButton = new QPushButton(groupBox_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(20, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 75 bold italic 9pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 0);\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"}\n"
""));
        pushButton->setAutoDefault(true);

        gridLayout_2->addWidget(pushButton, 0, 7, 1, 1);

        flow_sw_1 = new QLabel(groupBox_8);
        flow_sw_1->setObjectName(QString::fromUtf8("flow_sw_1"));
        flow_sw_1->setMaximumSize(QSize(20, 26));
        flow_sw_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_1, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 6, 3, 1);

        flow_sw_2 = new QLabel(groupBox_8);
        flow_sw_2->setObjectName(QString::fromUtf8("flow_sw_2"));
        flow_sw_2->setMaximumSize(QSize(20, 26));
        flow_sw_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_2, 0, 3, 1, 1);

        flow_sw_7 = new QLabel(groupBox_8);
        flow_sw_7->setObjectName(QString::fromUtf8("flow_sw_7"));
        flow_sw_7->setMaximumSize(QSize(20, 26));
        flow_sw_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        flow_sw_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(flow_sw_7, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 0, 3, 1);


        gridLayout_3->addWidget(groupBox_8, 0, 0, 1, 1);

        groupBox_10 = new QGroupBox(widget_6);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        QFont font3;
        font3.setPointSize(8);
        groupBox_10->setFont(font3);
        gridLayout_28 = new QGridLayout(groupBox_10);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 75 bold 9pt \"MS Shell Dlg 2\";"));

        gridLayout_28->addWidget(label_7, 0, 1, 1, 1);

        chiller_interlock = new QLabel(groupBox_10);
        chiller_interlock->setObjectName(QString::fromUtf8("chiller_interlock"));
        chiller_interlock->setMaximumSize(QSize(20, 26));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Sans Serif"));
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        chiller_interlock->setFont(font4);
        chiller_interlock->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: bold 8pt \"Sans Serif\";\n"
"margin-top: 3px;\n"
"margin-bottom: 3px;\n"
"border-radius: 10px;\n"
"min-height: 20px;\n"
"min-width: 20px;\n"
"background-color: rgb(175, 175, 175);\n"
"}"));
        chiller_interlock->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(chiller_interlock, 0, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_7, 0, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(200, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_9, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_10, 1, 0, 1, 1);


        gridLayout->addWidget(widget_6, 0, 0, 1, 1);


        retranslateUi(dialog_chiller);

        QMetaObject::connectSlotsByName(dialog_chiller);
    } // setupUi

    void retranslateUi(QDialog *dialog_chiller)
    {
        dialog_chiller->setWindowTitle(QApplication::translate("dialog_chiller", "CHILLER", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("dialog_chiller", "Temperature Out(C)", 0, QApplication::UnicodeUTF8));
        chiller_temp_label1->setText(QApplication::translate("dialog_chiller", "HVPS1", 0, QApplication::UnicodeUTF8));
        chiller_temp_1->setText(QString());
        chiller_temp_label2->setText(QApplication::translate("dialog_chiller", "HVPS2", 0, QApplication::UnicodeUTF8));
        chiller_temp_2->setText(QString());
        chiller_temp_label3->setText(QApplication::translate("dialog_chiller", "HVPS3", 0, QApplication::UnicodeUTF8));
        chiller_temp_3->setText(QString());
        groupBox_8->setTitle(QApplication::translate("dialog_chiller", "Flow Switch", 0, QApplication::UnicodeUTF8));
        flow_sw_8->setText(QApplication::translate("dialog_chiller", "8", 0, QApplication::UnicodeUTF8));
        flow_sw_5->setText(QApplication::translate("dialog_chiller", "5", 0, QApplication::UnicodeUTF8));
        flow_sw_6->setText(QApplication::translate("dialog_chiller", "6", 0, QApplication::UnicodeUTF8));
        flow_sw_4->setText(QApplication::translate("dialog_chiller", "4", 0, QApplication::UnicodeUTF8));
        flow_sw_9->setText(QApplication::translate("dialog_chiller", "9", 0, QApplication::UnicodeUTF8));
        flow_sw_3->setText(QApplication::translate("dialog_chiller", "3", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dialog_chiller", "i", 0, QApplication::UnicodeUTF8));
        flow_sw_1->setText(QApplication::translate("dialog_chiller", "1", 0, QApplication::UnicodeUTF8));
        flow_sw_2->setText(QApplication::translate("dialog_chiller", "2", 0, QApplication::UnicodeUTF8));
        flow_sw_7->setText(QApplication::translate("dialog_chiller", "7", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QString());
        label_7->setText(QApplication::translate("dialog_chiller", "Chiller Interlock", 0, QApplication::UnicodeUTF8));
        chiller_interlock->setText(QApplication::translate("dialog_chiller", "6", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog_chiller: public Ui_dialog_chiller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHILLER_H
