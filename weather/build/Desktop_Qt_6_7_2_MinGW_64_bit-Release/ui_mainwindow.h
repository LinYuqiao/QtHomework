/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *lb_LowCurve;
    QWidget *widget_2;
    QLabel *lb_flbg0;
    QLabel *lb_fx0;
    QLabel *lb_fl0;
    QLabel *lb_flbg1;
    QLabel *lb_fx1;
    QLabel *lb_fl1;
    QLabel *lb_flbg2;
    QLabel *lb_fx2;
    QLabel *lb_fl2;
    QLabel *lb_flbg03;
    QLabel *lb_fx3;
    QLabel *lb_fl3;
    QLabel *lb_flbg04;
    QLabel *lb_fx4;
    QLabel *lb_fl4;
    QLabel *lb_flbg5;
    QLabel *lb_fx5;
    QLabel *lb_fl5;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *lb_Aqi3;
    QLabel *lb_Aqi4;
    QLabel *lb_Aqi2;
    QLabel *lb_Aqi1;
    QLabel *lb_Aqi5;
    QLabel *lb_Aqi0;
    QLabel *label_8;
    QWidget *widget_5;
    QLabel *lb_datebg0;
    QLabel *lb_week0;
    QLabel *lb_date0;
    QLabel *lb_datebg1;
    QLabel *lb_week1;
    QLabel *lb_date1;
    QLabel *lb_datebg2;
    QLabel *lb_week2;
    QLabel *lb_date2;
    QLabel *lb_datebg3;
    QLabel *lb_week3;
    QLabel *lb_date3;
    QLabel *lb_datebg4;
    QLabel *lb_week4;
    QLabel *lb_date4;
    QLabel *lb_datebg5;
    QLabel *lb_week5;
    QLabel *lb_date5;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_city;
    QLabel *lb_date;
    QPushButton *btn_search;
    QLabel *label;
    QLabel *lb_TypeIcon;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_9;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lb_type;
    QLabel *lb_LowHigh;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lb_city;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lb_temperature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lb_ganmao;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLabel *lb_Windfx;
    QLabel *lb_Winfl;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QLabel *lb_PM25;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *lb_shidu;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLabel *lb_quality;
    QWidget *widget_4;
    QLabel *lb_typebg0;
    QLabel *lb_type0;
    QLabel *lb_con0;
    QLabel *lb_typebg1;
    QLabel *lb_type1;
    QLabel *lb_con1;
    QLabel *lb_typebg2;
    QLabel *lb_con2;
    QLabel *lb_type3;
    QLabel *lb_typebg4;
    QLabel *lb_type2;
    QLabel *lb_con3;
    QLabel *lb_typebg3;
    QLabel *lb_type4;
    QLabel *lb_con4;
    QLabel *lb_typebg5;
    QLabel *lb_con5;
    QLabel *lb_type5;
    QLabel *lb_HigtCurve;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(811, 536);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font:25 10pt\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"color:rgb(255,255,255);\n"
"border-radius:4px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -50, 981, 681));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"border-image:url(:/weatherImages/background.png);\n"
"}"));
        lb_LowCurve = new QLabel(widget);
        lb_LowCurve->setObjectName("lb_LowCurve");
        lb_LowCurve->setGeometry(QRect(360, 400, 431, 71));
        lb_LowCurve->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(350, 470, 461, 51));
        lb_flbg0 = new QLabel(widget_2);
        lb_flbg0->setObjectName("lb_flbg0");
        lb_flbg0->setGeometry(QRect(10, 10, 61, 41));
        lb_flbg0->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_flbg0->setWordWrap(true);
        lb_fx0 = new QLabel(widget_2);
        lb_fx0->setObjectName("lb_fx0");
        lb_fx0->setGeometry(QRect(20, 10, 41, 20));
        lb_fl0 = new QLabel(widget_2);
        lb_fl0->setObjectName("lb_fl0");
        lb_fl0->setGeometry(QRect(10, 30, 51, 21));
        lb_fl0->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"}"));
        lb_fl0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_fl0->setWordWrap(true);
        lb_flbg1 = new QLabel(widget_2);
        lb_flbg1->setObjectName("lb_flbg1");
        lb_flbg1->setGeometry(QRect(80, 10, 61, 41));
        lb_flbg1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_flbg1->setWordWrap(true);
        lb_fx1 = new QLabel(widget_2);
        lb_fx1->setObjectName("lb_fx1");
        lb_fx1->setGeometry(QRect(90, 10, 41, 20));
        lb_fl1 = new QLabel(widget_2);
        lb_fl1->setObjectName("lb_fl1");
        lb_fl1->setGeometry(QRect(80, 30, 61, 21));
        lb_fl1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"}"));
        lb_fl1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_flbg2 = new QLabel(widget_2);
        lb_flbg2->setObjectName("lb_flbg2");
        lb_flbg2->setGeometry(QRect(150, 10, 61, 41));
        lb_flbg2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_flbg2->setWordWrap(true);
        lb_fx2 = new QLabel(widget_2);
        lb_fx2->setObjectName("lb_fx2");
        lb_fx2->setGeometry(QRect(160, 10, 41, 21));
        lb_fl2 = new QLabel(widget_2);
        lb_fl2->setObjectName("lb_fl2");
        lb_fl2->setGeometry(QRect(160, 30, 51, 21));
        lb_fl2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"}"));
        lb_fl2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_flbg03 = new QLabel(widget_2);
        lb_flbg03->setObjectName("lb_flbg03");
        lb_flbg03->setGeometry(QRect(230, 10, 61, 41));
        lb_flbg03->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_flbg03->setWordWrap(true);
        lb_fx3 = new QLabel(widget_2);
        lb_fx3->setObjectName("lb_fx3");
        lb_fx3->setGeometry(QRect(240, 10, 41, 20));
        lb_fl3 = new QLabel(widget_2);
        lb_fl3->setObjectName("lb_fl3");
        lb_fl3->setGeometry(QRect(230, 30, 61, 21));
        lb_fl3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"}"));
        lb_fl3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_flbg04 = new QLabel(widget_2);
        lb_flbg04->setObjectName("lb_flbg04");
        lb_flbg04->setGeometry(QRect(310, 10, 61, 41));
        lb_flbg04->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_flbg04->setWordWrap(true);
        lb_fx4 = new QLabel(widget_2);
        lb_fx4->setObjectName("lb_fx4");
        lb_fx4->setGeometry(QRect(320, 10, 41, 20));
        lb_fl4 = new QLabel(widget_2);
        lb_fl4->setObjectName("lb_fl4");
        lb_fl4->setGeometry(QRect(310, 30, 61, 21));
        lb_fl4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"}"));
        lb_fl4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_flbg5 = new QLabel(widget_2);
        lb_flbg5->setObjectName("lb_flbg5");
        lb_flbg5->setGeometry(QRect(390, 10, 61, 41));
        lb_flbg5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_flbg5->setWordWrap(true);
        lb_fx5 = new QLabel(widget_2);
        lb_fx5->setObjectName("lb_fx5");
        lb_fx5->setGeometry(QRect(400, 10, 41, 20));
        lb_fl5 = new QLabel(widget_2);
        lb_fl5->setObjectName("lb_fl5");
        lb_fl5->setGeometry(QRect(390, 30, 61, 21));
        lb_fl5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"}"));
        lb_fl5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(350, 240, 451, 51));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName("gridLayout");
        lb_Aqi3 = new QLabel(widget_3);
        lb_Aqi3->setObjectName("lb_Aqi3");
        lb_Aqi3->setStyleSheet(QString::fromUtf8("QLabel#lb_Aqi3\n"
"{\n"
"background-color:#FF0033;\n"
"}"));

        gridLayout->addWidget(lb_Aqi3, 0, 3, 1, 1);

        lb_Aqi4 = new QLabel(widget_3);
        lb_Aqi4->setObjectName("lb_Aqi4");
        lb_Aqi4->setStyleSheet(QString::fromUtf8("QLabel#lb_Aqi4\n"
"{\n"
"background-color:#CC3333\n"
"}"));

        gridLayout->addWidget(lb_Aqi4, 0, 4, 1, 1);

        lb_Aqi2 = new QLabel(widget_3);
        lb_Aqi2->setObjectName("lb_Aqi2");
        lb_Aqi2->setStyleSheet(QString::fromUtf8("QLabel#lb_Aqi2\n"
"{\n"
"background-color:#FFCCCC;\n"
"}"));

        gridLayout->addWidget(lb_Aqi2, 0, 2, 1, 1);

        lb_Aqi1 = new QLabel(widget_3);
        lb_Aqi1->setObjectName("lb_Aqi1");
        lb_Aqi1->setStyleSheet(QString::fromUtf8("QLabel#lb_Aqi1\n"
"{\n"
"background-color:#ffa940;\n"
"}"));

        gridLayout->addWidget(lb_Aqi1, 0, 1, 1, 1);

        lb_Aqi5 = new QLabel(widget_3);
        lb_Aqi5->setObjectName("lb_Aqi5");
        lb_Aqi5->setStyleSheet(QString::fromUtf8("QLabel#lb_Aqi5\n"
"{\n"
"background-color:#660033;\n"
"}"));

        gridLayout->addWidget(lb_Aqi5, 0, 5, 1, 1);

        lb_Aqi0 = new QLabel(widget_3);
        lb_Aqi0->setObjectName("lb_Aqi0");
        lb_Aqi0->setStyleSheet(QString::fromUtf8("QLabel#lb_Aqi0\n"
"{\n"
"background-color:#669966;\n"
"}"));

        gridLayout->addWidget(lb_Aqi0, 0, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 340, 341, 171));
        label_8->setStyleSheet(QString::fromUtf8("QLabel#label_8\n"
"{\n"
"background-color:#9999CC;\n"
"}"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(350, 90, 441, 54));
        lb_datebg0 = new QLabel(widget_5);
        lb_datebg0->setObjectName("lb_datebg0");
        lb_datebg0->setGeometry(QRect(10, 10, 61, 41));
        lb_datebg0->setStyleSheet(QString::fromUtf8("QLabel#lb_datebg0\n"
"{\n"
"background-color:#339999;\n"
"}"));
        lb_datebg0->setWordWrap(true);
        lb_week0 = new QLabel(widget_5);
        lb_week0->setObjectName("lb_week0");
        lb_week0->setGeometry(QRect(20, 10, 26, 18));
        lb_date0 = new QLabel(widget_5);
        lb_date0->setObjectName("lb_date0");
        lb_date0->setGeometry(QRect(20, 30, 41, 21));
        lb_date0->setStyleSheet(QString::fromUtf8("QLabel#lb_date0\n"
"{\n"
"\n"
"}"));
        lb_date0->setWordWrap(true);
        lb_datebg1 = new QLabel(widget_5);
        lb_datebg1->setObjectName("lb_datebg1");
        lb_datebg1->setGeometry(QRect(80, 10, 61, 41));
        lb_datebg1->setStyleSheet(QString::fromUtf8("QLabel#lb_datebg1\n"
"{\n"
"background-color:#339999;\n"
"}"));
        lb_datebg1->setWordWrap(true);
        lb_week1 = new QLabel(widget_5);
        lb_week1->setObjectName("lb_week1");
        lb_week1->setGeometry(QRect(100, 10, 26, 18));
        lb_date1 = new QLabel(widget_5);
        lb_date1->setObjectName("lb_date1");
        lb_date1->setGeometry(QRect(90, 30, 41, 21));
        lb_date1->setStyleSheet(QString::fromUtf8("QLabel#lb_date1\n"
"{\n"
"}"));
        lb_date1->setWordWrap(true);
        lb_datebg2 = new QLabel(widget_5);
        lb_datebg2->setObjectName("lb_datebg2");
        lb_datebg2->setGeometry(QRect(150, 10, 61, 41));
        lb_datebg2->setStyleSheet(QString::fromUtf8("QLabel#lb_datebg2\n"
"{\n"
"background-color:#339999;\n"
"}"));
        lb_datebg2->setWordWrap(true);
        lb_week2 = new QLabel(widget_5);
        lb_week2->setObjectName("lb_week2");
        lb_week2->setGeometry(QRect(170, 10, 26, 18));
        lb_date2 = new QLabel(widget_5);
        lb_date2->setObjectName("lb_date2");
        lb_date2->setGeometry(QRect(160, 30, 41, 21));
        lb_date2->setStyleSheet(QString::fromUtf8("QLabel#lb_date2\n"
"{\n"
"\n"
"}"));
        lb_date2->setWordWrap(true);
        lb_datebg3 = new QLabel(widget_5);
        lb_datebg3->setObjectName("lb_datebg3");
        lb_datebg3->setGeometry(QRect(220, 10, 61, 41));
        lb_datebg3->setStyleSheet(QString::fromUtf8("QLabel#lb_datebg3\n"
"{\n"
"background-color:#339999;\n"
"}"));
        lb_datebg3->setWordWrap(true);
        lb_week3 = new QLabel(widget_5);
        lb_week3->setObjectName("lb_week3");
        lb_week3->setGeometry(QRect(240, 10, 26, 18));
        lb_date3 = new QLabel(widget_5);
        lb_date3->setObjectName("lb_date3");
        lb_date3->setGeometry(QRect(230, 30, 51, 21));
        lb_date3->setStyleSheet(QString::fromUtf8("QLabel#lb_date3\n"
"{\n"
"}"));
        lb_date3->setWordWrap(true);
        lb_datebg4 = new QLabel(widget_5);
        lb_datebg4->setObjectName("lb_datebg4");
        lb_datebg4->setGeometry(QRect(300, 10, 61, 41));
        lb_datebg4->setStyleSheet(QString::fromUtf8("QLabel#lb_datebg4\n"
"{\n"
"background-color:#339999;\n"
"}"));
        lb_datebg4->setWordWrap(true);
        lb_week4 = new QLabel(widget_5);
        lb_week4->setObjectName("lb_week4");
        lb_week4->setGeometry(QRect(320, 10, 26, 18));
        lb_date4 = new QLabel(widget_5);
        lb_date4->setObjectName("lb_date4");
        lb_date4->setGeometry(QRect(300, 30, 61, 21));
        lb_date4->setStyleSheet(QString::fromUtf8("QLabel#lb_date4\n"
"{\n"
"}"));
        lb_date4->setWordWrap(true);
        lb_datebg5 = new QLabel(widget_5);
        lb_datebg5->setObjectName("lb_datebg5");
        lb_datebg5->setGeometry(QRect(370, 10, 61, 41));
        lb_datebg5->setStyleSheet(QString::fromUtf8("QLabel#lb_datebg5\n"
"{\n"
"background-color:#339999;\n"
"}"));
        lb_datebg5->setWordWrap(true);
        lb_week5 = new QLabel(widget_5);
        lb_week5->setObjectName("lb_week5");
        lb_week5->setGeometry(QRect(390, 10, 26, 18));
        lb_date5 = new QLabel(widget_5);
        lb_date5->setObjectName("lb_date5");
        lb_date5->setGeometry(QRect(370, 30, 61, 21));
        lb_date5->setStyleSheet(QString::fromUtf8("QLabel#lb_date5\n"
"{\n"
"}"));
        lb_date5->setWordWrap(true);
        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(10, 50, 771, 51));
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 3, 1, 1);

        le_city = new QLineEdit(widget_6);
        le_city->setObjectName("le_city");
        le_city->setMaximumSize(QSize(200, 50));
        le_city->setStyleSheet(QString::fromUtf8("QLineEdit#le_city\n"
"{\n"
"font:30px;\n"
"color:#999999;\n"
"border-radius:2px;\n"
"}"));

        gridLayout_5->addWidget(le_city, 0, 0, 1, 1);

        lb_date = new QLabel(widget_6);
        lb_date->setObjectName("lb_date");
        lb_date->setStyleSheet(QString::fromUtf8("QLabel#lb_date\n"
"{\n"
"    font-family: \"\351\273\221\344\275\223\";\n"
"    font: 26px;\n"
"    color: white;\n"
"}"));

        gridLayout_5->addWidget(lb_date, 0, 4, 1, 1);

        btn_search = new QPushButton(widget_6);
        btn_search->setObjectName("btn_search");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/weatherImages/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_search->setIcon(icon);

        gridLayout_5->addWidget(btn_search, 0, 1, 1, 1);

        label = new QLabel(widget_6);
        label->setObjectName("label");

        gridLayout_5->addWidget(label, 0, 2, 1, 1);

        lb_TypeIcon = new QLabel(widget);
        lb_TypeIcon->setObjectName("lb_TypeIcon");
        lb_TypeIcon->setGeometry(QRect(30, 130, 121, 121));
        lb_TypeIcon->setSizeIncrement(QSize(0, 0));
        lb_TypeIcon->setBaseSize(QSize(0, 0));
        lb_TypeIcon->setStyleSheet(QString::fromUtf8("background-image:url(:/weatherImages/DuoYun.png);"));
        lb_TypeIcon->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/ZhenYu.png")));
        lb_TypeIcon->setScaledContents(true);
        lb_TypeIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_TypeIcon->setWordWrap(true);
        lb_TypeIcon->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse);
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(170, 140, 141, 111));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(168, 218, 141, 31));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        lb_type = new QLabel(horizontalLayoutWidget);
        lb_type->setObjectName("lb_type");

        horizontalLayout_13->addWidget(lb_type);

        lb_LowHigh = new QLabel(horizontalLayoutWidget);
        lb_LowHigh->setObjectName("lb_LowHigh");

        horizontalLayout_13->addWidget(lb_LowHigh);

        horizontalSpacer_3 = new QSpacerItem(10, 0, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(250, 139, 61, 81));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        lb_city = new QLabel(horizontalLayoutWidget_2);
        lb_city->setObjectName("lb_city");
        lb_city->setStyleSheet(QString::fromUtf8("QLabel#lb_place\n"
"{\n"
"padding-top: 0\n"
"}"));
        lb_city->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_14->addWidget(lb_city);

        horizontalLayoutWidget_3 = new QWidget(widget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(170, 139, 81, 81));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        lb_temperature = new QLabel(horizontalLayoutWidget_3);
        lb_temperature->setObjectName("lb_temperature");
        lb_temperature->setStyleSheet(QString::fromUtf8("QLabel#lb_temperature\n"
"{\n"
"font:36px;\n"
"}"));

        horizontalLayout_15->addWidget(lb_temperature);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        lb_ganmao = new QLabel(widget);
        lb_ganmao->setObjectName("lb_ganmao");
        lb_ganmao->setGeometry(QRect(40, 270, 291, 61));
        horizontalLayoutWidget_4 = new QWidget(widget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(30, 360, 111, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(40, 40));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/wind.png")));
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        lb_Windfx = new QLabel(horizontalLayoutWidget_4);
        lb_Windfx->setObjectName("lb_Windfx");

        verticalLayout->addWidget(lb_Windfx);

        lb_Winfl = new QLabel(horizontalLayoutWidget_4);
        lb_Winfl->setObjectName("lb_Winfl");

        verticalLayout->addWidget(lb_Winfl);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayoutWidget_5 = new QWidget(widget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(210, 360, 111, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_5);
        label_13->setObjectName("label_13");
        label_13->setMaximumSize(QSize(40, 40));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/pm25.png")));
        label_13->setScaledContents(true);

        horizontalLayout_3->addWidget(label_13);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_14 = new QLabel(horizontalLayoutWidget_5);
        label_14->setObjectName("label_14");

        verticalLayout_2->addWidget(label_14);

        lb_PM25 = new QLabel(horizontalLayoutWidget_5);
        lb_PM25->setObjectName("lb_PM25");

        verticalLayout_2->addWidget(lb_PM25);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayoutWidget_6 = new QWidget(widget);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(30, 440, 111, 61));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_6);
        label_15->setObjectName("label_15");
        label_15->setMaximumSize(QSize(50, 59));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/humidity.png")));
        label_15->setScaledContents(true);

        horizontalLayout_4->addWidget(label_15);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(horizontalLayoutWidget_6);
        label_6->setObjectName("label_6");

        verticalLayout_4->addWidget(label_6);

        lb_shidu = new QLabel(horizontalLayoutWidget_6);
        lb_shidu->setObjectName("lb_shidu");

        verticalLayout_4->addWidget(lb_shidu);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalLayoutWidget_8 = new QWidget(widget);
        horizontalLayoutWidget_8->setObjectName("horizontalLayoutWidget_8");
        horizontalLayoutWidget_8->setGeometry(QRect(210, 440, 112, 61));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(horizontalLayoutWidget_8);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(50, 59));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/aqi.png")));
        label_17->setScaledContents(true);

        horizontalLayout_6->addWidget(label_17);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_7 = new QLabel(horizontalLayoutWidget_8);
        label_7->setObjectName("label_7");

        verticalLayout_5->addWidget(label_7);

        lb_quality = new QLabel(horizontalLayoutWidget_8);
        lb_quality->setObjectName("lb_quality");

        verticalLayout_5->addWidget(lb_quality);


        horizontalLayout_6->addLayout(verticalLayout_5);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(330, 150, 471, 91));
        lb_typebg0 = new QLabel(widget_4);
        lb_typebg0->setObjectName("lb_typebg0");
        lb_typebg0->setGeometry(QRect(30, 12, 61, 71));
        lb_typebg0->setStyleSheet(QString::fromUtf8("QLabel#lb_typebg0\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_typebg0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_type0 = new QLabel(widget_4);
        lb_type0->setObjectName("lb_type0");
        lb_type0->setGeometry(QRect(30, 60, 61, 21));
        lb_type0->setStyleSheet(QString::fromUtf8("QLabel#lb_type0\n"
"{\n"
"}"));
        lb_type0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_con0 = new QLabel(widget_4);
        lb_con0->setObjectName("lb_con0");
        lb_con0->setGeometry(QRect(30, 20, 51, 31));
        lb_con0->setStyleSheet(QString::fromUtf8(""));
        lb_con0->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/Qing.png")));
        lb_con0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_typebg1 = new QLabel(widget_4);
        lb_typebg1->setObjectName("lb_typebg1");
        lb_typebg1->setGeometry(QRect(110, 12, 61, 71));
        lb_typebg1->setStyleSheet(QString::fromUtf8("QLabel#lb_typebg1\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_typebg1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_type1 = new QLabel(widget_4);
        lb_type1->setObjectName("lb_type1");
        lb_type1->setGeometry(QRect(130, 60, 51, 20));
        lb_type1->setStyleSheet(QString::fromUtf8("QLabel#lb_type1\n"
"{\n"
"}"));
        lb_con1 = new QLabel(widget_4);
        lb_con1->setObjectName("lb_con1");
        lb_con1->setGeometry(QRect(110, 20, 51, 31));
        lb_con1->setStyleSheet(QString::fromUtf8(""));
        lb_con1->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/XiaoYu.png")));
        lb_con1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_typebg2 = new QLabel(widget_4);
        lb_typebg2->setObjectName("lb_typebg2");
        lb_typebg2->setGeometry(QRect(180, 12, 61, 71));
        lb_typebg2->setStyleSheet(QString::fromUtf8("QLabel#lb_typebg2\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_typebg2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_con2 = new QLabel(widget_4);
        lb_con2->setObjectName("lb_con2");
        lb_con2->setGeometry(QRect(190, 20, 51, 31));
        lb_con2->setStyleSheet(QString::fromUtf8(""));
        lb_con2->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/Wu.png")));
        lb_con2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_type3 = new QLabel(widget_4);
        lb_type3->setObjectName("lb_type3");
        lb_type3->setGeometry(QRect(200, 60, 51, 21));
        lb_type3->setStyleSheet(QString::fromUtf8("QLabel#lb_type3\n"
"{\n"
"\n"
"}"));
        lb_typebg4 = new QLabel(widget_4);
        lb_typebg4->setObjectName("lb_typebg4");
        lb_typebg4->setGeometry(QRect(260, 12, 61, 71));
        lb_typebg4->setStyleSheet(QString::fromUtf8("QLabel#lb_typebg4\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_typebg4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_type2 = new QLabel(widget_4);
        lb_type2->setObjectName("lb_type2");
        lb_type2->setGeometry(QRect(280, 60, 61, 21));
        lb_type2->setStyleSheet(QString::fromUtf8("QLabel#lb_type2\n"
"{\n"
"\n"
"}"));
        lb_con3 = new QLabel(widget_4);
        lb_con3->setObjectName("lb_con3");
        lb_con3->setGeometry(QRect(260, 20, 51, 31));
        lb_con3->setStyleSheet(QString::fromUtf8(""));
        lb_con3->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/ZhenXue.png")));
        lb_con3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_typebg3 = new QLabel(widget_4);
        lb_typebg3->setObjectName("lb_typebg3");
        lb_typebg3->setGeometry(QRect(330, 12, 61, 71));
        lb_typebg3->setStyleSheet(QString::fromUtf8("QLabel#lb_typebg3\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_typebg3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_type4 = new QLabel(widget_4);
        lb_type4->setObjectName("lb_type4");
        lb_type4->setGeometry(QRect(350, 60, 61, 21));
        lb_type4->setStyleSheet(QString::fromUtf8("QLabel#lb_type4\n"
"{\n"
"}"));
        lb_con4 = new QLabel(widget_4);
        lb_con4->setObjectName("lb_con4");
        lb_con4->setGeometry(QRect(340, 20, 51, 31));
        lb_con4->setStyleSheet(QString::fromUtf8(""));
        lb_con4->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/YuJiaXue.png")));
        lb_con4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_typebg5 = new QLabel(widget_4);
        lb_typebg5->setObjectName("lb_typebg5");
        lb_typebg5->setGeometry(QRect(400, 12, 61, 71));
        lb_typebg5->setStyleSheet(QString::fromUtf8("QLabel#lb_typebg5\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        lb_typebg5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_con5 = new QLabel(widget_4);
        lb_con5->setObjectName("lb_con5");
        lb_con5->setGeometry(QRect(410, 20, 51, 31));
        lb_con5->setStyleSheet(QString::fromUtf8(""));
        lb_con5->setPixmap(QPixmap(QString::fromUtf8(":/weatherImages/type/BaoYu.png")));
        lb_con5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb_type5 = new QLabel(widget_4);
        lb_type5->setObjectName("lb_type5");
        lb_type5->setGeometry(QRect(420, 60, 61, 21));
        lb_type5->setStyleSheet(QString::fromUtf8("QLabel#lb_type5\n"
"{\n"
"}"));
        lb_HigtCurve = new QLabel(widget);
        lb_HigtCurve->setObjectName("lb_HigtCurve");
        lb_HigtCurve->setGeometry(QRect(360, 300, 431, 101));
        lb_HigtCurve->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgba(60,60,60,100);\n"
"}"));
        label_8->raise();
        lb_LowCurve->raise();
        widget_2->raise();
        widget_3->raise();
        widget_5->raise();
        widget_6->raise();
        lb_TypeIcon->raise();
        verticalLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        horizontalLayoutWidget_3->raise();
        lb_ganmao->raise();
        horizontalLayoutWidget_4->raise();
        horizontalLayoutWidget_5->raise();
        horizontalLayoutWidget_6->raise();
        horizontalLayoutWidget_8->raise();
        widget_4->raise();
        lb_HigtCurve->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 811, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lb_LowCurve->setText(QString());
        lb_flbg0->setText(QString());
        lb_fx0->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lb_fl0->setText(QCoreApplication::translate("MainWindow", "     2\347\272\247", nullptr));
        lb_flbg1->setText(QString());
        lb_fx1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lb_fl1->setText(QCoreApplication::translate("MainWindow", "     2\347\272\247", nullptr));
        lb_flbg2->setText(QString());
        lb_fx2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lb_fl2->setText(QCoreApplication::translate("MainWindow", "   2\347\272\247", nullptr));
        lb_flbg03->setText(QString());
        lb_fx3->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lb_fl3->setText(QCoreApplication::translate("MainWindow", "    1\347\272\247", nullptr));
        lb_flbg04->setText(QString());
        lb_fx4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        lb_fl4->setText(QCoreApplication::translate("MainWindow", "     2\347\272\247", nullptr));
        lb_flbg5->setText(QString());
        lb_fx5->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lb_fl5->setText(QCoreApplication::translate("MainWindow", "      2\347\272\247", nullptr));
        lb_Aqi3->setText(QCoreApplication::translate("MainWindow", "   \344\270\255\345\272\246", nullptr));
        lb_Aqi4->setText(QCoreApplication::translate("MainWindow", "    \351\207\215\345\272\246", nullptr));
        lb_Aqi2->setText(QCoreApplication::translate("MainWindow", "   \350\275\273\345\272\246", nullptr));
        lb_Aqi1->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lb_Aqi5->setText(QCoreApplication::translate("MainWindow", "    \344\270\245\351\207\215", nullptr));
        lb_Aqi0->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        label_8->setText(QString());
        lb_datebg0->setText(QString());
        lb_week0->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lb_date0->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        lb_datebg1->setText(QString());
        lb_week1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lb_date1->setText(QCoreApplication::translate("MainWindow", " 01/01", nullptr));
        lb_datebg2->setText(QString());
        lb_week2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lb_date2->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        lb_datebg3->setText(QString());
        lb_week3->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\270\211", nullptr));
        lb_date3->setText(QCoreApplication::translate("MainWindow", "  01/01", nullptr));
        lb_datebg4->setText(QString());
        lb_week4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        lb_date4->setText(QCoreApplication::translate("MainWindow", "     01/01", nullptr));
        lb_datebg5->setText(QString());
        lb_week5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        lb_date5->setText(QCoreApplication::translate("MainWindow", "    01/01", nullptr));
        le_city->setText(QString());
        lb_date->setText(QCoreApplication::translate("MainWindow", "2024\345\271\264/9\346\234\210/8\346\227\245   \346\230\237\346\234\237\346\227\245", nullptr));
        btn_search->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\241\214\351\235\242\345\244\251\346\260\224\345\260\217\347\273\204\344\273\266", nullptr));
        lb_TypeIcon->setText(QString());
        lb_type->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        lb_LowHigh->setText(QCoreApplication::translate("MainWindow", "19\302\260~31\302\260", nullptr));
        lb_city->setText(QCoreApplication::translate("MainWindow", " \345\214\227\344\272\254", nullptr));
        lb_temperature->setText(QCoreApplication::translate("MainWindow", "32\302\260", nullptr));
        lb_ganmao->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260:\345\204\277\347\253\245,\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217,\345\221\274\345\220\270\347\226\276\347\227\205\346\202\243\350\200\205\n"
"\344\272\272\347\276\244\345\272\224\350\257\245\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\350\277\220\345\212\250", nullptr));
        label_3->setText(QString());
        lb_Windfx->setText(QCoreApplication::translate("MainWindow", "   \350\245\277\345\214\227\351\243\216", nullptr));
        lb_Winfl->setText(QCoreApplication::translate("MainWindow", "     3\347\272\247", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "   PM2.5  ", nullptr));
        lb_PM25->setText(QCoreApplication::translate("MainWindow", "      3", nullptr));
        label_15->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "   \346\271\277\345\272\246", nullptr));
        lb_shidu->setText(QCoreApplication::translate("MainWindow", "   60", nullptr));
        label_17->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lb_quality->setText(QCoreApplication::translate("MainWindow", "   \344\274\230", nullptr));
        lb_typebg0->setText(QString());
        lb_type0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lb_con0->setText(QString());
        lb_typebg1->setText(QString());
        lb_type1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lb_con1->setText(QString());
        lb_typebg2->setText(QString());
        lb_con2->setText(QString());
        lb_type3->setText(QCoreApplication::translate("MainWindow", "\351\230\264\345\244\251", nullptr));
        lb_typebg4->setText(QString());
        lb_type2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lb_con3->setText(QString());
        lb_typebg3->setText(QString());
        lb_type4->setText(QCoreApplication::translate("MainWindow", " \344\270\255\351\233\250", nullptr));
        lb_con4->setText(QString());
        lb_typebg5->setText(QString());
        lb_con5->setText(QString());
        lb_type5->setText(QCoreApplication::translate("MainWindow", "\345\244\247\351\233\250", nullptr));
        lb_HigtCurve->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
