/********************************************************************************
** Form generated from reading UI file 'alper.ui'
**
** Created: Fri Aug 7 13:29:49 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALPER_H
#define UI_ALPER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alper
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *mv3d_69_FAULT;
    QLabel *mv3d_69;
    QLabel *mv3d_69_STATE;
    QLabel *mv3d_68;
    QLabel *mv3d_68_FAULT;
    QLabel *mv3d_68_STATE;
    QComboBox *comboBox_68;
    QLabel *com_68;
    QPushButton *reset_68;
    QLabel *mv3d_78_STATE;
    QLabel *mv3d_78_FAULT;
    QLabel *mv3d_70;
    QLabel *mv3d_78;
    QLabel *mv3d_70_STATE;
    QGroupBox *groupBox_2;
    QLabel *mv3d_70_FAULT;
    QPushButton *reset_69;
    QLabel *com_69;
    QComboBox *comboBox_69;
    QPushButton *reset_70;
    QComboBox *comboBox_70;
    QLabel *com_70;
    QLabel *com_78;
    QComboBox *comboBox_78;
    QPushButton *reset_78;
    QLabel *label_70;
    QLabel *label_69;
    QLabel *label_78;
    QLabel *label_68;
    QDateTimeEdit *dateTimeEdit;
    QLabel *info;
    QLabel *lstimag;
    QGroupBox *groupBox_5;
    QPushButton *fault_screen_button;
    QPushButton *log_finder_button;
    QPushButton *usb_mount;
    QPushButton *usb_unmount;
    QPushButton *terminal;
    QPushButton *bag_finder_bt;
    QPushButton *screenshot_bt;
    QPushButton *system_monitor;
    QLabel *crntmac;
    QLabel *Creator_label;
    QPushButton *silentmode_bt;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QDockWidget *FAULTS;
    QWidget *dockWidgetContents_6;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *real_time_tab;
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QFrame *line_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *save_flt_button;
    QFrame *line_11;
    QFrame *line_12;
    QDateTimeEdit *faultstartdate;
    QDateTimeEdit *faultenddate;
    QComboBox *grep_mv3d_exp;
    QFrame *line_18;
    QTableWidget *faulttable;
    QWidget *dsplay_tab;
    QGridLayout *gridLayout_5;
    QFrame *frame_3;
    QFrame *line_13;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *fault_display_button;
    QFrame *line_14;
    QFrame *line_15;
    QDateTimeEdit *faultstartdate_disp;
    QDateTimeEdit *faultenddate_disp;
    QFrame *line_16;
    QPushButton *fault_browser_button;
    QComboBox *grep_mv3d_disp;
    QFrame *line_17;
    QTableWidget *disp_faulttable;
    QDockWidget *bagdec;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QComboBox *grep_mv3d;
    QComboBox *grepperbox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QDateTimeEdit *grepdate;
    QFrame *line_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *call_button;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line_5;
    QLabel *label_6;
    QRadioButton *manuelactive;
    QLabel *label_7;
    QComboBox *manuelcombo;
    QTextEdit *manuellabel;
    QLabel *label_10;
    QFrame *line_9;
    QComboBox *log_selection_box;
    QTextBrowser *bagdecision;

    void setupUi(QMainWindow *alper)
    {
        if (alper->objectName().isEmpty())
            alper->setObjectName(QString::fromUtf8("alper"));
        alper->setEnabled(true);
        alper->resize(693, 375);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(alper->sizePolicy().hasHeightForWidth());
        alper->setSizePolicy(sizePolicy);
        alper->setMinimumSize(QSize(693, 375));
        alper->setMaximumSize(QSize(693, 375));
        alper->setFocusPolicy(Qt::NoFocus);
        alper->setContextMenuPolicy(Qt::ActionsContextMenu);
        alper->setAcceptDrops(false);
        alper->setWindowOpacity(1);
        alper->setAutoFillBackground(false);
        alper->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(alper);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(20, 50, 311, 171));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(125, 0, 62, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        groupBox->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Serif"));
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setCursor(QCursor(Qt::ArrowCursor));
        groupBox->setMouseTracking(false);
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 62);"));
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        mv3d_69_FAULT = new QLabel(centralWidget);
        mv3d_69_FAULT->setObjectName(QString::fromUtf8("mv3d_69_FAULT"));
        mv3d_69_FAULT->setGeometry(QRect(30, 190, 241, 21));
        mv3d_69_FAULT->setFrameShape(QFrame::Box);
        mv3d_69_FAULT->setFrameShadow(QFrame::Plain);
        mv3d_69_FAULT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mv3d_69 = new QLabel(centralWidget);
        mv3d_69->setObjectName(QString::fromUtf8("mv3d_69"));
        mv3d_69->setGeometry(QRect(30, 150, 241, 20));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        mv3d_69->setFont(font1);
        mv3d_69->setFrameShape(QFrame::Box);
        mv3d_69->setFrameShadow(QFrame::Plain);
        mv3d_69->setAlignment(Qt::AlignCenter);
        mv3d_69_STATE = new QLabel(centralWidget);
        mv3d_69_STATE->setObjectName(QString::fromUtf8("mv3d_69_STATE"));
        mv3d_69_STATE->setGeometry(QRect(30, 170, 241, 21));
        mv3d_69_STATE->setFrameShape(QFrame::Box);
        mv3d_69_STATE->setFrameShadow(QFrame::Plain);
        mv3d_69_STATE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mv3d_68 = new QLabel(centralWidget);
        mv3d_68->setObjectName(QString::fromUtf8("mv3d_68"));
        mv3d_68->setGeometry(QRect(30, 75, 241, 20));
        mv3d_68->setFont(font1);
        mv3d_68->setFrameShape(QFrame::Box);
        mv3d_68->setFrameShadow(QFrame::Plain);
        mv3d_68->setAlignment(Qt::AlignCenter);
        mv3d_68_FAULT = new QLabel(centralWidget);
        mv3d_68_FAULT->setObjectName(QString::fromUtf8("mv3d_68_FAULT"));
        mv3d_68_FAULT->setGeometry(QRect(30, 115, 241, 21));
        mv3d_68_FAULT->setFrameShape(QFrame::Box);
        mv3d_68_FAULT->setFrameShadow(QFrame::Plain);
        mv3d_68_FAULT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mv3d_68_STATE = new QLabel(centralWidget);
        mv3d_68_STATE->setObjectName(QString::fromUtf8("mv3d_68_STATE"));
        mv3d_68_STATE->setGeometry(QRect(30, 95, 241, 21));
        mv3d_68_STATE->setFrameShape(QFrame::Box);
        mv3d_68_STATE->setFrameShadow(QFrame::Plain);
        mv3d_68_STATE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        comboBox_68 = new QComboBox(centralWidget);
        comboBox_68->setObjectName(QString::fromUtf8("comboBox_68"));
        comboBox_68->setGeometry(QRect(270, 95, 53, 22));
        QFont font2;
        font2.setPointSize(9);
        comboBox_68->setFont(font2);
        comboBox_68->setMouseTracking(false);
        comboBox_68->setFocusPolicy(Qt::WheelFocus);
        comboBox_68->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox_68->setLayoutDirection(Qt::LeftToRight);
        comboBox_68->setEditable(false);
        comboBox_68->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_68->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_68->setFrame(true);
        com_68 = new QLabel(centralWidget);
        com_68->setObjectName(QString::fromUtf8("com_68"));
        com_68->setGeometry(QRect(270, 75, 51, 20));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        com_68->setFont(font3);
        com_68->setStyleSheet(QString::fromUtf8(""));
        com_68->setFrameShape(QFrame::Box);
        com_68->setAlignment(Qt::AlignCenter);
        reset_68 = new QPushButton(centralWidget);
        reset_68->setObjectName(QString::fromUtf8("reset_68"));
        reset_68->setGeometry(QRect(271, 115, 50, 21));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        reset_68->setFont(font4);
        reset_68->setAutoDefault(false);
        reset_68->setDefault(false);
        reset_68->setFlat(false);
        mv3d_78_STATE = new QLabel(centralWidget);
        mv3d_78_STATE->setObjectName(QString::fromUtf8("mv3d_78_STATE"));
        mv3d_78_STATE->setGeometry(QRect(370, 170, 241, 21));
        mv3d_78_STATE->setFrameShape(QFrame::Box);
        mv3d_78_STATE->setFrameShadow(QFrame::Plain);
        mv3d_78_STATE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mv3d_78_FAULT = new QLabel(centralWidget);
        mv3d_78_FAULT->setObjectName(QString::fromUtf8("mv3d_78_FAULT"));
        mv3d_78_FAULT->setGeometry(QRect(370, 190, 241, 21));
        mv3d_78_FAULT->setFrameShape(QFrame::Box);
        mv3d_78_FAULT->setFrameShadow(QFrame::Plain);
        mv3d_78_FAULT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mv3d_70 = new QLabel(centralWidget);
        mv3d_70->setObjectName(QString::fromUtf8("mv3d_70"));
        mv3d_70->setGeometry(QRect(370, 75, 241, 20));
        mv3d_70->setFont(font1);
        mv3d_70->setFrameShape(QFrame::Box);
        mv3d_70->setFrameShadow(QFrame::Plain);
        mv3d_70->setAlignment(Qt::AlignCenter);
        mv3d_78 = new QLabel(centralWidget);
        mv3d_78->setObjectName(QString::fromUtf8("mv3d_78"));
        mv3d_78->setGeometry(QRect(370, 150, 241, 20));
        mv3d_78->setFont(font1);
        mv3d_78->setFrameShape(QFrame::Box);
        mv3d_78->setFrameShadow(QFrame::Plain);
        mv3d_78->setAlignment(Qt::AlignCenter);
        mv3d_70_STATE = new QLabel(centralWidget);
        mv3d_70_STATE->setObjectName(QString::fromUtf8("mv3d_70_STATE"));
        mv3d_70_STATE->setGeometry(QRect(370, 95, 241, 21));
        mv3d_70_STATE->setFrameShape(QFrame::Box);
        mv3d_70_STATE->setFrameShadow(QFrame::Plain);
        mv3d_70_STATE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(360, 50, 311, 171));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        groupBox_2->setPalette(palette1);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Serif"));
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        font5.setKerning(true);
        font5.setStyleStrategy(QFont::PreferDefault);
        groupBox_2->setFont(font5);
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 62);"));
        groupBox_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        mv3d_70_FAULT = new QLabel(centralWidget);
        mv3d_70_FAULT->setObjectName(QString::fromUtf8("mv3d_70_FAULT"));
        mv3d_70_FAULT->setGeometry(QRect(370, 115, 241, 21));
        mv3d_70_FAULT->setFrameShape(QFrame::Box);
        mv3d_70_FAULT->setFrameShadow(QFrame::Plain);
        mv3d_70_FAULT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        reset_69 = new QPushButton(centralWidget);
        reset_69->setObjectName(QString::fromUtf8("reset_69"));
        reset_69->setGeometry(QRect(271, 190, 50, 21));
        reset_69->setFont(font4);
        reset_69->setDefault(false);
        reset_69->setFlat(false);
        com_69 = new QLabel(centralWidget);
        com_69->setObjectName(QString::fromUtf8("com_69"));
        com_69->setGeometry(QRect(270, 150, 51, 20));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        com_69->setFont(font6);
        com_69->setFrameShape(QFrame::Box);
        com_69->setAlignment(Qt::AlignCenter);
        comboBox_69 = new QComboBox(centralWidget);
        comboBox_69->setObjectName(QString::fromUtf8("comboBox_69"));
        comboBox_69->setGeometry(QRect(270, 169, 53, 22));
        comboBox_69->setFont(font2);
        comboBox_69->setMouseTracking(false);
        comboBox_69->setFocusPolicy(Qt::WheelFocus);
        comboBox_69->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox_69->setLayoutDirection(Qt::LeftToRight);
        comboBox_69->setEditable(false);
        comboBox_69->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_69->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_69->setFrame(true);
        reset_70 = new QPushButton(centralWidget);
        reset_70->setObjectName(QString::fromUtf8("reset_70"));
        reset_70->setGeometry(QRect(610, 115, 50, 21));
        reset_70->setFont(font4);
        reset_70->setDefault(false);
        reset_70->setFlat(false);
        comboBox_70 = new QComboBox(centralWidget);
        comboBox_70->setObjectName(QString::fromUtf8("comboBox_70"));
        comboBox_70->setGeometry(QRect(610, 95, 53, 22));
        comboBox_70->setFont(font2);
        comboBox_70->setMouseTracking(false);
        comboBox_70->setFocusPolicy(Qt::WheelFocus);
        comboBox_70->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox_70->setLayoutDirection(Qt::LeftToRight);
        comboBox_70->setEditable(false);
        comboBox_70->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_70->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_70->setFrame(true);
        com_70 = new QLabel(centralWidget);
        com_70->setObjectName(QString::fromUtf8("com_70"));
        com_70->setGeometry(QRect(610, 75, 51, 20));
        com_70->setFont(font6);
        com_70->setFrameShape(QFrame::Box);
        com_70->setAlignment(Qt::AlignCenter);
        com_78 = new QLabel(centralWidget);
        com_78->setObjectName(QString::fromUtf8("com_78"));
        com_78->setGeometry(QRect(610, 150, 51, 20));
        com_78->setFont(font6);
        com_78->setFrameShape(QFrame::Box);
        com_78->setAlignment(Qt::AlignCenter);
        comboBox_78 = new QComboBox(centralWidget);
        comboBox_78->setObjectName(QString::fromUtf8("comboBox_78"));
        comboBox_78->setGeometry(QRect(610, 169, 53, 22));
        comboBox_78->setFont(font2);
        comboBox_78->setMouseTracking(false);
        comboBox_78->setFocusPolicy(Qt::WheelFocus);
        comboBox_78->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox_78->setLayoutDirection(Qt::LeftToRight);
        comboBox_78->setEditable(false);
        comboBox_78->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_78->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_78->setFrame(true);
        reset_78 = new QPushButton(centralWidget);
        reset_78->setObjectName(QString::fromUtf8("reset_78"));
        reset_78->setGeometry(QRect(610, 190, 50, 21));
        reset_78->setFont(font4);
        reset_78->setDefault(false);
        reset_78->setFlat(false);
        label_70 = new QLabel(centralWidget);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(610, 75, 51, 61));
        QFont font7;
        font7.setBold(true);
        font7.setUnderline(false);
        font7.setWeight(75);
        label_70->setFont(font7);
        label_70->setFrameShape(QFrame::Box);
        label_70->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_69 = new QLabel(centralWidget);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(270, 150, 51, 61));
        label_69->setFont(font7);
        label_69->setFrameShape(QFrame::Box);
        label_69->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_78 = new QLabel(centralWidget);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(610, 150, 51, 61));
        label_78->setFont(font7);
        label_78->setFrameShape(QFrame::Box);
        label_78->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_68 = new QLabel(centralWidget);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(270, 75, 51, 61));
        label_68->setFont(font7);
        label_68->setFrameShape(QFrame::Box);
        label_68->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dateTimeEdit = new QDateTimeEdit(centralWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(515, 10, 161, 25));
        QFont font8;
        font8.setBold(true);
        font8.setItalic(true);
        font8.setWeight(75);
        dateTimeEdit->setFont(font8);
        dateTimeEdit->setWrapping(false);
        dateTimeEdit->setFrame(false);
        dateTimeEdit->setReadOnly(true);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTimeEdit->setMaximumDateTime(QDateTime(QDate(2099, 12, 31), QTime(23, 59, 59)));
        dateTimeEdit->setMaximumDate(QDate(2099, 12, 31));
        dateTimeEdit->setMinimumDate(QDate(1996, 9, 20));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::DaySection);
        dateTimeEdit->setCalendarPopup(false);
        info = new QLabel(centralWidget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(20, 230, 651, 21));
        info->setFont(font1);
        info->setFrameShape(QFrame::Box);
        info->setScaledContents(true);
        lstimag = new QLabel(centralWidget);
        lstimag->setObjectName(QString::fromUtf8("lstimag"));
        lstimag->setGeometry(QRect(19, 5, 151, 41));
        lstimag->setPixmap(QPixmap(QString::fromUtf8(":/imag/lst.png")));
        lstimag->setScaledContents(true);
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 255, 653, 81));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        groupBox_5->setPalette(palette2);
        QFont font9;
        font9.setFamily(QString::fromUtf8("URW Gothic L"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setItalic(true);
        font9.setWeight(75);
        groupBox_5->setFont(font9);
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 75 bold oblique 10pt \"URW Gothic L\";\n"
""));
        fault_screen_button = new QPushButton(groupBox_5);
        fault_screen_button->setObjectName(QString::fromUtf8("fault_screen_button"));
        fault_screen_button->setGeometry(QRect(20, 21, 115, 21));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Sans Serif"));
        font10.setPointSize(9);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        fault_screen_button->setFont(font10);
        fault_screen_button->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        fault_screen_button->setFlat(false);
        log_finder_button = new QPushButton(groupBox_5);
        log_finder_button->setObjectName(QString::fromUtf8("log_finder_button"));
        log_finder_button->setGeometry(QRect(185, 21, 115, 21));
        log_finder_button->setFont(font10);
        log_finder_button->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        log_finder_button->setFlat(false);
        usb_mount = new QPushButton(groupBox_5);
        usb_mount->setObjectName(QString::fromUtf8("usb_mount"));
        usb_mount->setGeometry(QRect(185, 51, 115, 21));
        usb_mount->setFont(font10);
        usb_mount->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        usb_unmount = new QPushButton(groupBox_5);
        usb_unmount->setObjectName(QString::fromUtf8("usb_unmount"));
        usb_unmount->setGeometry(QRect(350, 51, 115, 21));
        usb_unmount->setFont(font10);
        usb_unmount->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        terminal = new QPushButton(groupBox_5);
        terminal->setObjectName(QString::fromUtf8("terminal"));
        terminal->setGeometry(QRect(515, 21, 115, 21));
        terminal->setFont(font10);
        terminal->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        bag_finder_bt = new QPushButton(groupBox_5);
        bag_finder_bt->setObjectName(QString::fromUtf8("bag_finder_bt"));
        bag_finder_bt->setGeometry(QRect(350, 21, 115, 21));
        bag_finder_bt->setFont(font10);
        bag_finder_bt->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        screenshot_bt = new QPushButton(groupBox_5);
        screenshot_bt->setObjectName(QString::fromUtf8("screenshot_bt"));
        screenshot_bt->setGeometry(QRect(515, 51, 115, 21));
        screenshot_bt->setFont(font10);
        screenshot_bt->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        screenshot_bt->setFlat(false);
        system_monitor = new QPushButton(groupBox_5);
        system_monitor->setObjectName(QString::fromUtf8("system_monitor"));
        system_monitor->setGeometry(QRect(20, 50, 115, 21));
        system_monitor->setFont(font10);
        system_monitor->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(227, 227, 227);"));
        system_monitor->setFlat(false);
        log_finder_button->raise();
        usb_mount->raise();
        usb_unmount->raise();
        terminal->raise();
        bag_finder_bt->raise();
        screenshot_bt->raise();
        system_monitor->raise();
        fault_screen_button->raise();
        crntmac = new QLabel(centralWidget);
        crntmac->setObjectName(QString::fromUtf8("crntmac"));
        crntmac->setGeometry(QRect(490, 225, 181, 31));
        crntmac->setFont(font6);
        Creator_label = new QLabel(centralWidget);
        Creator_label->setObjectName(QString::fromUtf8("Creator_label"));
        Creator_label->setGeometry(QRect(533, 340, 140, 15));
        Creator_label->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Utopia\";"));
        silentmode_bt = new QPushButton(centralWidget);
        silentmode_bt->setObjectName(QString::fromUtf8("silentmode_bt"));
        silentmode_bt->setGeometry(QRect(470, 10, 28, 28));
        silentmode_bt->setFocusPolicy(Qt::NoFocus);
        silentmode_bt->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);\n"
"image: url(:/imag/unmute.png);\n"
"background-image: url(:/imag/unmute.png);\n"
"border: 0px;"));
        alper->setCentralWidget(centralWidget);
        groupBox->raise();
        groupBox_2->raise();
        groupBox_5->raise();
        mv3d_68_STATE->raise();
        label_69->raise();
        mv3d_78->raise();
        label_70->raise();
        mv3d_70->raise();
        label_78->raise();
        comboBox_69->raise();
        mv3d_68_FAULT->raise();
        mv3d_78_FAULT->raise();
        comboBox_78->raise();
        lstimag->raise();
        reset_69->raise();
        dateTimeEdit->raise();
        Creator_label->raise();
        label_68->raise();
        comboBox_70->raise();
        com_69->raise();
        com_70->raise();
        com_78->raise();
        mv3d_69_STATE->raise();
        crntmac->raise();
        mv3d_78_STATE->raise();
        silentmode_bt->raise();
        mv3d_70_FAULT->raise();
        reset_70->raise();
        info->raise();
        reset_78->raise();
        mv3d_69->raise();
        mv3d_69_FAULT->raise();
        mv3d_68->raise();
        mv3d_70_STATE->raise();
        com_68->raise();
        comboBox_68->raise();
        reset_68->raise();
        menuBar = new QMenuBar(alper);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 23));
        alper->setMenuBar(menuBar);
        statusBar = new QStatusBar(alper);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        alper->setStatusBar(statusBar);
        FAULTS = new QDockWidget(alper);
        FAULTS->setObjectName(QString::fromUtf8("FAULTS"));
        FAULTS->setEnabled(true);
        sizePolicy1.setHeightForWidth(FAULTS->sizePolicy().hasHeightForWidth());
        FAULTS->setSizePolicy(sizePolicy1);
        FAULTS->setMinimumSize(QSize(1020, 500));
        FAULTS->setMaximumSize(QSize(1020, 524287));
        FAULTS->setAutoFillBackground(false);
        FAULTS->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 0);\n"
""));
        FAULTS->setFloating(true);
        FAULTS->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        gridLayout = new QGridLayout(dockWidgetContents_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(dockWidgetContents_6);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        real_time_tab = new QWidget();
        real_time_tab->setObjectName(QString::fromUtf8("real_time_tab"));
        gridLayout_3 = new QGridLayout(real_time_tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_2 = new QFrame(real_time_tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 50));
        frame_2->setMaximumSize(QSize(16777215, 80));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        line_10 = new QFrame(frame_2);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(0, 25, 971, 17));
        line_10->setFrameShadow(QFrame::Plain);
        line_10->setLineWidth(3);
        line_10->setFrameShape(QFrame::HLine);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 971, 32));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 35, 971, 44));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(97, 97, 97);"));
        save_flt_button = new QPushButton(frame_2);
        save_flt_button->setObjectName(QString::fromUtf8("save_flt_button"));
        save_flt_button->setGeometry(QRect(704, 44, 221, 26));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Sans Serif"));
        font11.setPointSize(10);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        save_flt_button->setFont(font11);
        save_flt_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        line_11 = new QFrame(frame_2);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(240, 0, 20, 101));
        line_11->setFrameShadow(QFrame::Plain);
        line_11->setLineWidth(2);
        line_11->setFrameShape(QFrame::VLine);
        line_12 = new QFrame(frame_2);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(490, 0, 20, 101));
        line_12->setFrameShadow(QFrame::Plain);
        line_12->setLineWidth(2);
        line_12->setFrameShape(QFrame::VLine);
        faultstartdate = new QDateTimeEdit(frame_2);
        faultstartdate->setObjectName(QString::fromUtf8("faultstartdate"));
        faultstartdate->setGeometry(QRect(27, 44, 194, 25));
        faultstartdate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        faultstartdate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultstartdate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        faultstartdate->setDate(QDate(2019, 4, 6));
        faultstartdate->setCalendarPopup(true);
        faultenddate = new QDateTimeEdit(frame_2);
        faultenddate->setObjectName(QString::fromUtf8("faultenddate"));
        faultenddate->setGeometry(QRect(277, 44, 194, 25));
        faultenddate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        faultenddate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultenddate->setDate(QDate(2019, 4, 6));
        faultenddate->setCalendarPopup(true);
        grep_mv3d_exp = new QComboBox(frame_2);
        grep_mv3d_exp->setObjectName(QString::fromUtf8("grep_mv3d_exp"));
        grep_mv3d_exp->setGeometry(QRect(540, 44, 81, 25));
        grep_mv3d_exp->setFont(font11);
        grep_mv3d_exp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        line_18 = new QFrame(frame_2);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(650, 0, 20, 101));
        line_18->setFrameShadow(QFrame::Plain);
        line_18->setLineWidth(2);
        line_18->setFrameShape(QFrame::VLine);

        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        faulttable = new QTableWidget(real_time_tab);
        if (faulttable->columnCount() < 5)
            faulttable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem->setFont(font6);
        __qtablewidgetitem->setBackground(QColor(0, 85, 255));
        faulttable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font6);
        __qtablewidgetitem1->setBackground(QColor(0, 85, 255));
        faulttable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font6);
        __qtablewidgetitem2->setBackground(QColor(0, 85, 255));
        faulttable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font6);
        __qtablewidgetitem3->setBackground(QColor(0, 85, 255));
        faulttable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font6);
        __qtablewidgetitem4->setBackground(QColor(0, 85, 255));
        faulttable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (faulttable->rowCount() < 1)
            faulttable->setRowCount(1);
        faulttable->setObjectName(QString::fromUtf8("faulttable"));
        sizePolicy1.setHeightForWidth(faulttable->sizePolicy().hasHeightForWidth());
        faulttable->setSizePolicy(sizePolicy1);
        faulttable->setMinimumSize(QSize(0, 0));
        faulttable->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(199, 199, 199);"));
        faulttable->setFrameShape(QFrame::NoFrame);
        faulttable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        faulttable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        faulttable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        faulttable->setAlternatingRowColors(false);
        faulttable->setShowGrid(true);
        faulttable->setGridStyle(Qt::SolidLine);
        faulttable->setSortingEnabled(false);
        faulttable->setWordWrap(false);
        faulttable->setRowCount(1);
        faulttable->horizontalHeader()->setVisible(true);
        faulttable->horizontalHeader()->setCascadingSectionResizes(true);
        faulttable->horizontalHeader()->setDefaultSectionSize(188);
        faulttable->horizontalHeader()->setHighlightSections(true);
        faulttable->horizontalHeader()->setMinimumSectionSize(30);
        faulttable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        faulttable->horizontalHeader()->setStretchLastSection(false);
        faulttable->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(faulttable, 1, 0, 1, 1);

        tabWidget->addTab(real_time_tab, QString());
        dsplay_tab = new QWidget();
        dsplay_tab->setObjectName(QString::fromUtf8("dsplay_tab"));
        gridLayout_5 = new QGridLayout(dsplay_tab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        frame_3 = new QFrame(dsplay_tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setMaximumSize(QSize(16777215, 80));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        line_13 = new QFrame(frame_3);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(0, 25, 971, 17));
        line_13->setFrameShadow(QFrame::Plain);
        line_13->setLineWidth(3);
        line_13->setFrameShape(QFrame::HLine);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 971, 32));
        label_13->setStyleSheet(QString::fromUtf8("font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);"));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 35, 971, 44));
        label_14->setStyleSheet(QString::fromUtf8("font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(97, 97, 97);"));
        fault_display_button = new QPushButton(frame_3);
        fault_display_button->setObjectName(QString::fromUtf8("fault_display_button"));
        fault_display_button->setGeometry(QRect(615, 44, 131, 26));
        fault_display_button->setFont(font11);
        fault_display_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        line_14 = new QFrame(frame_3);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(226, 0, 20, 101));
        line_14->setFrameShadow(QFrame::Plain);
        line_14->setLineWidth(2);
        line_14->setFrameShape(QFrame::VLine);
        line_15 = new QFrame(frame_3);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(463, 0, 20, 101));
        line_15->setFrameShadow(QFrame::Plain);
        line_15->setLineWidth(2);
        line_15->setFrameShape(QFrame::VLine);
        faultstartdate_disp = new QDateTimeEdit(frame_3);
        faultstartdate_disp->setObjectName(QString::fromUtf8("faultstartdate_disp"));
        faultstartdate_disp->setGeometry(QRect(19, 44, 194, 25));
        faultstartdate_disp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        faultstartdate_disp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultstartdate_disp->setButtonSymbols(QAbstractSpinBox::NoButtons);
        faultstartdate_disp->setDate(QDate(2019, 4, 6));
        faultstartdate_disp->setCalendarPopup(true);
        faultenddate_disp = new QDateTimeEdit(frame_3);
        faultenddate_disp->setObjectName(QString::fromUtf8("faultenddate_disp"));
        faultenddate_disp->setGeometry(QRect(257, 44, 194, 25));
        faultenddate_disp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        faultenddate_disp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultenddate_disp->setDate(QDate(2019, 4, 6));
        faultenddate_disp->setCalendarPopup(true);
        line_16 = new QFrame(frame_3);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(765, 0, 20, 81));
        line_16->setFrameShadow(QFrame::Plain);
        line_16->setLineWidth(2);
        line_16->setFrameShape(QFrame::VLine);
        fault_browser_button = new QPushButton(frame_3);
        fault_browser_button->setObjectName(QString::fromUtf8("fault_browser_button"));
        fault_browser_button->setGeometry(QRect(801, 44, 141, 26));
        fault_browser_button->setFont(font11);
        fault_browser_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        grep_mv3d_disp = new QComboBox(frame_3);
        grep_mv3d_disp->setObjectName(QString::fromUtf8("grep_mv3d_disp"));
        grep_mv3d_disp->setGeometry(QRect(490, 44, 81, 25));
        grep_mv3d_disp->setFont(font11);
        grep_mv3d_disp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        line_17 = new QFrame(frame_3);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(580, 0, 20, 81));
        line_17->setFrameShadow(QFrame::Plain);
        line_17->setLineWidth(2);
        line_17->setFrameShape(QFrame::VLine);

        gridLayout_5->addWidget(frame_3, 0, 0, 1, 1);

        disp_faulttable = new QTableWidget(dsplay_tab);
        if (disp_faulttable->columnCount() < 6)
            disp_faulttable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font6);
        __qtablewidgetitem5->setBackground(QColor(0, 85, 255));
        disp_faulttable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font6);
        __qtablewidgetitem6->setBackground(QColor(0, 85, 255));
        disp_faulttable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font6);
        __qtablewidgetitem7->setBackground(QColor(0, 85, 255));
        disp_faulttable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font6);
        __qtablewidgetitem8->setBackground(QColor(0, 85, 255));
        disp_faulttable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font6);
        __qtablewidgetitem9->setBackground(QColor(0, 85, 255));
        disp_faulttable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font6);
        __qtablewidgetitem10->setBackground(QColor(0, 85, 255));
        disp_faulttable->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        if (disp_faulttable->rowCount() < 1)
            disp_faulttable->setRowCount(1);
        disp_faulttable->setObjectName(QString::fromUtf8("disp_faulttable"));
        sizePolicy1.setHeightForWidth(disp_faulttable->sizePolicy().hasHeightForWidth());
        disp_faulttable->setSizePolicy(sizePolicy1);
        disp_faulttable->setMinimumSize(QSize(0, 0));
        disp_faulttable->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 0);\n"
"background-color: rgb(199, 199, 199);"));
        disp_faulttable->setFrameShape(QFrame::NoFrame);
        disp_faulttable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        disp_faulttable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        disp_faulttable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        disp_faulttable->setAlternatingRowColors(false);
        disp_faulttable->setShowGrid(true);
        disp_faulttable->setGridStyle(Qt::SolidLine);
        disp_faulttable->setSortingEnabled(false);
        disp_faulttable->setWordWrap(false);
        disp_faulttable->setRowCount(1);
        disp_faulttable->horizontalHeader()->setVisible(false);
        disp_faulttable->horizontalHeader()->setCascadingSectionResizes(true);
        disp_faulttable->horizontalHeader()->setDefaultSectionSize(188);
        disp_faulttable->horizontalHeader()->setHighlightSections(true);
        disp_faulttable->horizontalHeader()->setMinimumSectionSize(30);
        disp_faulttable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        disp_faulttable->horizontalHeader()->setStretchLastSection(false);
        disp_faulttable->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(disp_faulttable, 1, 0, 1, 1);

        tabWidget->addTab(dsplay_tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        FAULTS->setWidget(dockWidgetContents_6);
        alper->addDockWidget(static_cast<Qt::DockWidgetArea>(1), FAULTS);
        bagdec = new QDockWidget(alper);
        bagdec->setObjectName(QString::fromUtf8("bagdec"));
        bagdec->setMinimumSize(QSize(1550, 1000));
        bagdec->setMaximumSize(QSize(1550, 1000));
        bagdec->setFloating(true);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(dockWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 90));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        grep_mv3d = new QComboBox(frame);
        grep_mv3d->setObjectName(QString::fromUtf8("grep_mv3d"));
        grep_mv3d->setGeometry(QRect(30, 51, 82, 25));
        grep_mv3d->setFont(font11);
        grep_mv3d->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        grepperbox = new QComboBox(frame);
        grepperbox->setObjectName(QString::fromUtf8("grepperbox"));
        grepperbox->setGeometry(QRect(410, 51, 131, 25));
        grepperbox->setFont(font11);
        grepperbox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 0, 20, 91));
        line->setAutoFillBackground(false);
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 30, 1531, 16));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(570, 0, 20, 91));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::VLine);
        grepdate = new QDateTimeEdit(frame);
        grepdate->setObjectName(QString::fromUtf8("grepdate"));
        grepdate->setGeometry(QRect(1110, 51, 151, 25));
        grepdate->setFont(font11);
        grepdate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        grepdate->setDate(QDate(2019, 2, 27));
        grepdate->setCalendarPopup(true);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1060, 0, 20, 91));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::VLine);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 151, 38));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Sans Serif"));
        font12.setPointSize(10);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setWeight(75);
        label->setFont(font12);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 0, 211, 38));
        label_2->setFont(font12);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1070, 0, 231, 38));
        label_3->setFont(font12);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        call_button = new QPushButton(frame);
        call_button->setObjectName(QString::fromUtf8("call_button"));
        call_button->setGeometry(QRect(1330, 51, 168, 26));
        call_button->setFont(font11);
        call_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1300, 0, 231, 38));
        label_4->setFont(font12);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 39, 1531, 50));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 65, 65);"));
        line_5 = new QFrame(frame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(1290, 0, 20, 91));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::VLine);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(580, 0, 491, 37));
        label_6->setFont(font12);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);
        manuelactive = new QRadioButton(frame);
        manuelactive->setObjectName(QString::fromUtf8("manuelactive"));
        manuelactive->setGeometry(QRect(607, 53, 71, 21));
        manuelactive->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
""));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(630, 56, 56, 15));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 9pt \"Sans Serif\";\n"
"font: 9.5pt \"Sans Serif\";"));
        manuelcombo = new QComboBox(frame);
        manuelcombo->setObjectName(QString::fromUtf8("manuelcombo"));
        manuelcombo->setGeometry(QRect(720, 50, 91, 25));
        manuelcombo->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 9pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        manuellabel = new QTextEdit(frame);
        manuellabel->setObjectName(QString::fromUtf8("manuellabel"));
        manuellabel->setGeometry(QRect(870, 50, 171, 25));
        manuellabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        manuellabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(150, 0, 221, 38));
        label_10->setFont(font12);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 75 bold 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);
        line_9 = new QFrame(frame);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(360, 0, 20, 91));
        line_9->setFrameShadow(QFrame::Plain);
        line_9->setLineWidth(2);
        line_9->setFrameShape(QFrame::VLine);
        log_selection_box = new QComboBox(frame);
        log_selection_box->setObjectName(QString::fromUtf8("log_selection_box"));
        log_selection_box->setGeometry(QRect(180, 50, 155, 25));
        log_selection_box->setFont(font11);
        log_selection_box->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 10pt \"Sans Serif\";\n"
"color: rgb(255, 255, 255);"));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_10->raise();
        log_selection_box->raise();
        grep_mv3d->raise();
        manuellabel->raise();
        manuelcombo->raise();
        line_4->raise();
        grepperbox->raise();
        line_3->raise();
        call_button->raise();
        line_2->raise();
        line->raise();
        grepdate->raise();
        line_9->raise();
        line_5->raise();
        manuelactive->raise();

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        bagdecision = new QTextBrowser(dockWidgetContents);
        bagdecision->setObjectName(QString::fromUtf8("bagdecision"));
        bagdecision->setFont(font11);
        bagdecision->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(50, 244, 131);\n"
"font: 10pt \"Sans Serif\";"));

        gridLayout_2->addWidget(bagdecision, 1, 0, 1, 1);

        bagdec->setWidget(dockWidgetContents);
        alper->addDockWidget(static_cast<Qt::DockWidgetArea>(1), bagdec);

        retranslateUi(alper);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(alper);
    } // setupUi

    void retranslateUi(QMainWindow *alper)
    {
        alper->setWindowTitle(QApplication::translate("alper", "EDS CONTROL STATION", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        alper->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("alper", "EAST", 0, QApplication::UnicodeUTF8));
        mv3d_69_FAULT->setText(QApplication::translate("alper", "FAULT:", 0, QApplication::UnicodeUTF8));
        mv3d_69->setText(QApplication::translate("alper", "3D0069", 0, QApplication::UnicodeUTF8));
        mv3d_69_STATE->setText(QApplication::translate("alper", "STATE:", 0, QApplication::UnicodeUTF8));
        mv3d_68->setText(QApplication::translate("alper", "3D0068", 0, QApplication::UnicodeUTF8));
        mv3d_68_FAULT->setText(QApplication::translate("alper", "FAULT:", 0, QApplication::UnicodeUTF8));
        mv3d_68_STATE->setText(QApplication::translate("alper", "STATE:", 0, QApplication::UnicodeUTF8));
        comboBox_68->clear();
        comboBox_68->insertItems(0, QStringList()
         << QApplication::translate("alper", "SCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "IAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "DPP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "ALL", 0, QApplication::UnicodeUTF8)
        );
        com_68->setText(QApplication::translate("alper", "COM", 0, QApplication::UnicodeUTF8));
        reset_68->setText(QApplication::translate("alper", "RESET", 0, QApplication::UnicodeUTF8));
        mv3d_78_STATE->setText(QApplication::translate("alper", "STATE:", 0, QApplication::UnicodeUTF8));
        mv3d_78_FAULT->setText(QApplication::translate("alper", "FAULT:", 0, QApplication::UnicodeUTF8));
        mv3d_70->setText(QApplication::translate("alper", "3D0070", 0, QApplication::UnicodeUTF8));
        mv3d_78->setText(QApplication::translate("alper", "3D0078", 0, QApplication::UnicodeUTF8));
        mv3d_70_STATE->setText(QApplication::translate("alper", "STATE:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("alper", "WEST", 0, QApplication::UnicodeUTF8));
        mv3d_70_FAULT->setText(QApplication::translate("alper", "FAULT:", 0, QApplication::UnicodeUTF8));
        reset_69->setText(QApplication::translate("alper", "RESET", 0, QApplication::UnicodeUTF8));
        com_69->setText(QApplication::translate("alper", "COM", 0, QApplication::UnicodeUTF8));
        comboBox_69->clear();
        comboBox_69->insertItems(0, QStringList()
         << QApplication::translate("alper", "SCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "IAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "DPP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "ALL", 0, QApplication::UnicodeUTF8)
        );
        reset_70->setText(QApplication::translate("alper", "RESET", 0, QApplication::UnicodeUTF8));
        comboBox_70->clear();
        comboBox_70->insertItems(0, QStringList()
         << QApplication::translate("alper", "SCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "IAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "DPP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "ALL", 0, QApplication::UnicodeUTF8)
        );
        com_70->setText(QApplication::translate("alper", "COM", 0, QApplication::UnicodeUTF8));
        com_78->setText(QApplication::translate("alper", "COM", 0, QApplication::UnicodeUTF8));
        comboBox_78->clear();
        comboBox_78->insertItems(0, QStringList()
         << QApplication::translate("alper", "SCC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "IAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "DPP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "ALL", 0, QApplication::UnicodeUTF8)
        );
        reset_78->setText(QApplication::translate("alper", "RESET", 0, QApplication::UnicodeUTF8));
        label_70->setText(QString());
        label_69->setText(QString());
        label_78->setText(QString());
        label_68->setText(QString());
        dateTimeEdit->setDisplayFormat(QApplication::translate("alper", "dd/MM/yyyy     h:mm AP", 0, QApplication::UnicodeUTF8));
        info->setText(QApplication::translate("alper", "INFO:", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("alper", "APPLICATIONS", 0, QApplication::UnicodeUTF8));
        fault_screen_button->setText(QApplication::translate("alper", "FAULT SCREEN", 0, QApplication::UnicodeUTF8));
        log_finder_button->setText(QApplication::translate("alper", "LOG SCREEN", 0, QApplication::UnicodeUTF8));
        usb_mount->setText(QApplication::translate("alper", "MOUNT USB", 0, QApplication::UnicodeUTF8));
        usb_unmount->setText(QApplication::translate("alper", "UNMOUNT USB", 0, QApplication::UnicodeUTF8));
        terminal->setText(QApplication::translate("alper", "OPEN TERMINAL", 0, QApplication::UnicodeUTF8));
        bag_finder_bt->setText(QApplication::translate("alper", "BAG FINDER", 0, QApplication::UnicodeUTF8));
        screenshot_bt->setText(QApplication::translate("alper", "SCREENSHOT", 0, QApplication::UnicodeUTF8));
        system_monitor->setText(QApplication::translate("alper", "SYSTEM MONITOR", 0, QApplication::UnicodeUTF8));
        crntmac->setText(QString());
        Creator_label->setText(QApplication::translate("alper", "Created by ALPER SAGLIK", 0, QApplication::UnicodeUTF8));
        silentmode_bt->setText(QString());
        FAULTS->setWindowTitle(QApplication::translate("alper", "                                                                                                       FAULT SCREEN", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("alper", "               START TIME                                  END TIME                          MV3D NO                                 EXPORT", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        save_flt_button->setText(QApplication::translate("alper", "EXPORT FAULT LOGS", 0, QApplication::UnicodeUTF8));
        faultstartdate->setDisplayFormat(QApplication::translate("alper", "ddd dd MMMM yyyy", 0, QApplication::UnicodeUTF8));
        faultenddate->setDisplayFormat(QApplication::translate("alper", "ddd dd MMMM yyyy", 0, QApplication::UnicodeUTF8));
        grep_mv3d_exp->clear();
        grep_mv3d_exp->insertItems(0, QStringList()
         << QApplication::translate("alper", "ALL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0068", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0069", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0070", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0078", 0, QApplication::UnicodeUTF8)
        );
        QTableWidgetItem *___qtablewidgetitem = faulttable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("alper", "MV3D NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = faulttable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("alper", "FAULT CAUSE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = faulttable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("alper", "FAULT START", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = faulttable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("alper", "FAULT END", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = faulttable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("alper", "DURATION", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(real_time_tab), QApplication::translate("alper", "REAL-TIME", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("alper", "               START TIME                             END TIME                      MV3D NO                DISPLAY                      BROWSE FILE", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        fault_display_button->setText(QApplication::translate("alper", "DISPLAY", 0, QApplication::UnicodeUTF8));
        faultstartdate_disp->setDisplayFormat(QApplication::translate("alper", "ddd dd MMMM yyyy", 0, QApplication::UnicodeUTF8));
        faultenddate_disp->setDisplayFormat(QApplication::translate("alper", "ddd dd MMMM yyyy", 0, QApplication::UnicodeUTF8));
        fault_browser_button->setText(QApplication::translate("alper", "SEARCH", 0, QApplication::UnicodeUTF8));
        grep_mv3d_disp->clear();
        grep_mv3d_disp->insertItems(0, QStringList()
         << QApplication::translate("alper", "ALL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0068", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0069", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0070", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0078", 0, QApplication::UnicodeUTF8)
        );
        QTableWidgetItem *___qtablewidgetitem5 = disp_faulttable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("alper", "DATE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = disp_faulttable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("alper", "MV3D NO", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = disp_faulttable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("alper", "FAULT CAUSE", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = disp_faulttable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("alper", "FAULT START", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = disp_faulttable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("alper", "FAULT END", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = disp_faulttable->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("alper", "DURATION", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(dsplay_tab), QApplication::translate("alper", "DISPLAY", 0, QApplication::UnicodeUTF8));
        bagdec->setWindowTitle(QApplication::translate("alper", "                                                                                                                                                                                       LOG SCREEN", 0, QApplication::UnicodeUTF8));
        grep_mv3d->clear();
        grep_mv3d->insertItems(0, QStringList()
         << QApplication::translate("alper", "3D0068", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0069", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0070", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "3D0078", 0, QApplication::UnicodeUTF8)
        );
        grepperbox->clear();
        grepperbox->insertItems(0, QStringList()
         << QApplication::translate("alper", "Bag Decision", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "Array Test", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "Flow Switch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "HVPS Arc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "Bad Detectors", 0, QApplication::UnicodeUTF8)
        );
        grepdate->setDisplayFormat(QApplication::translate("alper", "dd MMM yyyy", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("alper", "MV3D NO", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("alper", "SEARCH FOR", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("alper", "DATE", 0, QApplication::UnicodeUTF8));
        call_button->setText(QApplication::translate("alper", "CALL", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("alper", "LIST", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("alper", "MANUEL SEARCH", 0, QApplication::UnicodeUTF8));
        manuelactive->setText(QString());
        label_7->setText(QApplication::translate("alper", "ENABLE", 0, QApplication::UnicodeUTF8));
        manuelcombo->clear();
        manuelcombo->insertItems(0, QStringList()
         << QApplication::translate("alper", "DIAGSERV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "BHS LOG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "BMS LOG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "BIT LOG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "SCS LOG", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("alper", "LOGS", 0, QApplication::UnicodeUTF8));
        log_selection_box->clear();
        log_selection_box->insertItems(0, QStringList()
         << QApplication::translate("alper", "Last Modified Logs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "Detailed Logs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("alper", "All Logs", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class alper: public Ui_alper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALPER_H
