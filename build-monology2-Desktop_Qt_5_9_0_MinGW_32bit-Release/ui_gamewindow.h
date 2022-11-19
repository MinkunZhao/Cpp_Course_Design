/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QPushButton *c0;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *c1;
    QPushButton *c2;
    QPushButton *c3;
    QPushButton *c4;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_7;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *cc;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *P1;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QTextBrowser *target_text;
    QPushButton *Dice;
    QPushButton *pushButton_28;
    QPushButton *Buy_local;
    QPushButton *pushButton_30;
    QPushButton *sell_place;
    QPushButton *Build;
    QPushButton *pc1;
    QPushButton *pc2;
    QPushButton *pc3;
    QPushButton *pc4;
    QPushButton *sell_house;
    QTextBrowser *see_money;
    QLabel *building_num0;
    QLabel *building_num1;
    QLabel *building_num2;
    QLabel *building_num3;
    QLabel *building_num4;
    QLabel *building_num5;
    QLabel *building_num6;
    QLabel *building_num7;
    QLabel *building_num8;
    QLabel *building_num9;
    QLabel *building_num10;
    QLabel *building_num11;
    QLabel *building_num12;
    QLabel *building_num13;
    QLabel *building_num14;
    QLabel *building_num15;
    QLabel *building_num16;
    QLabel *building_num17;
    QLabel *building_num18;
    QLabel *building_num19;
    QLabel *building_num20;
    QLabel *building_num21;
    QLabel *owner_state0;
    QLabel *owner_state1;
    QLabel *owner_state2;
    QLabel *owner_state3;
    QLabel *owner_state4;
    QLabel *owner_state5;
    QLabel *owner_state6;
    QLabel *owner_state7;
    QLabel *owner_state8;
    QLabel *owner_state9;
    QLabel *owner_state10;
    QLabel *owner_state11;
    QLabel *owner_state12;
    QLabel *owner_state13;
    QLabel *owner_state14;
    QLabel *owner_state15;
    QLabel *owner_state16;
    QLabel *owner_state17;
    QLabel *owner_state18;
    QLabel *owner_state19;
    QLabel *owner_state20;
    QLabel *owner_state21;
    QLabel *commentA;
    QLabel *commentB;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(1800, 1200);
        GameWindow->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/gameback.jpeg);"));
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        c0 = new QPushButton(centralwidget);
        c0->setObjectName(QStringLiteral("c0"));
        c0->setGeometry(QRect(10, 10, 200, 150));
        c0->setMinimumSize(QSize(80, 0));
        c0->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"background-image: url(:/new/prefix1/city2/guangzhou.jpeg);\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 160, 200, 150));
        pushButton_2->setMinimumSize(QSize(80, 0));
        pushButton_2->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"background-image: url(:/new/prefix1/city2/haerbin.jpeg);\n"
"color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 310, 200, 150));
        pushButton_3->setMinimumSize(QSize(80, 0));
        pushButton_3->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"background-image: url(:/new/prefix1/city2/kailuo.jpeg);\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 460, 200, 150));
        pushButton_4->setMinimumSize(QSize(80, 0));
        pushButton_4->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/wuhang.jpeg);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 610, 200, 150));
        pushButton_5->setMinimumSize(QSize(80, 0));
        pushButton_5->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/shengzhen.jpeg);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 760, 200, 150));
        pushButton_6->setMinimumSize(QSize(80, 0));
        pushButton_6->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/niuyue.jpeg);"));
        c1 = new QPushButton(centralwidget);
        c1->setObjectName(QStringLiteral("c1"));
        c1->setGeometry(QRect(210, 760, 200, 150));
        c1->setMinimumSize(QSize(80, 0));
        c1->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/changsha.jpeg);"));
        c2 = new QPushButton(centralwidget);
        c2->setObjectName(QStringLiteral("c2"));
        c2->setGeometry(QRect(410, 760, 200, 150));
        c2->setMinimumSize(QSize(80, 0));
        c2->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/boling.jpeg);"));
        c3 = new QPushButton(centralwidget);
        c3->setObjectName(QStringLiteral("c3"));
        c3->setGeometry(QRect(610, 760, 200, 150));
        c3->setMinimumSize(QSize(80, 0));
        c3->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"background-image: url(:/new/prefix1/city2/chengdu.jpg);\n"
"color: rgb(255, 255, 255);"));
        c4 = new QPushButton(centralwidget);
        c4->setObjectName(QStringLiteral("c4"));
        c4->setGeometry(QRect(810, 760, 200, 150));
        c4->setMinimumSize(QSize(80, 0));
        c4->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"background-image: url(:/new/prefix1/city2/hangzhou.jpg);\n"
"color: rgb(255, 255, 255);"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(1010, 760, 200, 150));
        pushButton_12->setMinimumSize(QSize(80, 0));
        pushButton_12->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/shanghai.jpeg);"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(1210, 760, 200, 150));
        pushButton_13->setMinimumSize(QSize(80, 0));
        pushButton_13->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/lasa.jpeg);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(1210, 610, 200, 150));
        pushButton_7->setMinimumSize(QSize(80, 0));
        pushButton_7->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/kunming.jpeg);"));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(1210, 460, 200, 150));
        pushButton_14->setMinimumSize(QSize(80, 0));
        pushButton_14->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/guling.jpeg);"));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(1210, 310, 200, 150));
        pushButton_15->setMinimumSize(QSize(80, 0));
        pushButton_15->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"background-image: url(:/new/prefix1/city2/luoma.jpeg);\n"
"color: rgb(255, 255, 255);"));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(1210, 160, 200, 150));
        pushButton_16->setMinimumSize(QSize(80, 0));
        pushButton_16->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/xian.jpeg);"));
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(1210, 10, 200, 150));
        pushButton_17->setMinimumSize(QSize(80, 0));
        pushButton_17->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/xinin.jpeg);"));
        cc = new QPushButton(centralwidget);
        cc->setObjectName(QStringLiteral("cc"));
        cc->setGeometry(QRect(1010, 10, 200, 150));
        cc->setMinimumSize(QSize(80, 0));
        cc->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/mosike.jpeg);"));
        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(810, 10, 200, 150));
        pushButton_19->setMinimumSize(QSize(80, 0));
        pushButton_19->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/beijing.jpeg);"));
        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(610, 10, 200, 150));
        pushButton_20->setMinimumSize(QSize(80, 0));
        pushButton_20->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/tokyo.jpeg);"));
        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(410, 10, 200, 150));
        pushButton_21->setMinimumSize(QSize(80, 0));
        pushButton_21->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/xiamen.jpeg);"));
        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(210, 10, 200, 150));
        pushButton_22->setMinimumSize(QSize(80, 0));
        pushButton_22->setStyleSheet(QLatin1String("font: 75 italic 15pt \"Georgia\";\n"
"color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/city2/lundun.jpeg);"));
        P1 = new QPushButton(centralwidget);
        P1->setObjectName(QStringLiteral("P1"));
        P1->setGeometry(QRect(1420, 10, 180, 150));
        P1->setMinimumSize(QSize(80, 0));
        P1->setStyleSheet(QLatin1String("font: 75 italic 30pt \"Georgia\";\n"
"color: rgb(0,255,0);\n"
"background-image: url(:/new/prefix1/headimg/p1.png);"));
        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(1610, 10, 180, 150));
        pushButton_24->setMinimumSize(QSize(80, 0));
        pushButton_24->setStyleSheet(QLatin1String("font: 75 italic 30pt \"Georgia\";\n"
"color: rgb(255,0,0);\n"
"background-image: url(:/new/prefix1/headimg/p2.png);"));
        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(1420, 170, 180, 150));
        pushButton_25->setMinimumSize(QSize(80, 0));
        pushButton_25->setStyleSheet(QLatin1String("font: 75 italic 30pt \"Georgia\";\n"
"color: rgb(0,0,255);\n"
"background-image: url(:/new/prefix1/headimg/p3.png);"));
        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(1610, 170, 180, 150));
        pushButton_26->setMinimumSize(QSize(80, 0));
        pushButton_26->setStyleSheet(QLatin1String("font: 75 italic 30pt \"Georgia\";\n"
"color: rgb(255,255,0);\n"
"background-image: url(:/new/prefix1/headimg/p4.png);"));
        target_text = new QTextBrowser(centralwidget);
        target_text->setObjectName(QStringLiteral("target_text"));
        target_text->setGeometry(QRect(1420, 720, 361, 421));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        target_text->setFont(font);
        Dice = new QPushButton(centralwidget);
        Dice->setObjectName(QStringLiteral("Dice"));
        Dice->setGeometry(QRect(400, 300, 181, 111));
        Dice->setStyleSheet(QStringLiteral("font: 75 italic 28pt \"Georgia\";"));
        Dice->setFlat(false);
        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(709, 299, 201, 111));
        pushButton_28->setStyleSheet(QStringLiteral("font: 75 italic 28pt \"Georgia\";"));
        Buy_local = new QPushButton(centralwidget);
        Buy_local->setObjectName(QStringLiteral("Buy_local"));
        Buy_local->setGeometry(QRect(10, 930, 211, 100));
        Buy_local->setStyleSheet(QStringLiteral("font: 25pt \"Bahnschrift SemiLight\";"));
        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(10, 1040, 211, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift SemiLight"));
        font1.setPointSize(25);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_30->setFont(font1);
        pushButton_30->setStyleSheet(QStringLiteral("font: 25pt \"Bahnschrift SemiLight\";"));
        sell_place = new QPushButton(centralwidget);
        sell_place->setObjectName(QStringLiteral("sell_place"));
        sell_place->setGeometry(QRect(620, 1039, 201, 121));
        sell_place->setStyleSheet(QStringLiteral("font: 20pt \"Bahnschrift SemiLight\";"));
        Build = new QPushButton(centralwidget);
        Build->setObjectName(QStringLiteral("Build"));
        Build->setGeometry(QRect(240, 1040, 221, 100));
        Build->setStyleSheet(QStringLiteral("font: 25pt \"Bahnschrift SemiLight\";"));
        pc1 = new QPushButton(centralwidget);
        pc1->setObjectName(QStringLiteral("pc1"));
        pc1->setGeometry(QRect(40, 20, 60, 60));
        pc1->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/headimg/p1.png);"));
        pc2 = new QPushButton(centralwidget);
        pc2->setObjectName(QStringLiteral("pc2"));
        pc2->setGeometry(QRect(130, 30, 60, 60));
        pc2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/headimg/p2.png);"));
        pc3 = new QPushButton(centralwidget);
        pc3->setObjectName(QStringLiteral("pc3"));
        pc3->setGeometry(QRect(40, 100, 60, 60));
        pc3->setStyleSheet(QLatin1String("\n"
"border-image: url(:/new/prefix1/headimg/p3.png);"));
        pc4 = new QPushButton(centralwidget);
        pc4->setObjectName(QStringLiteral("pc4"));
        pc4->setGeometry(QRect(140, 100, 60, 60));
        pc4->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/headimg/p4.png);"));
        sell_house = new QPushButton(centralwidget);
        sell_house->setObjectName(QStringLiteral("sell_house"));
        sell_house->setGeometry(QRect(620, 919, 201, 121));
        sell_house->setStyleSheet(QStringLiteral("font: 20pt \"Bahnschrift SemiLight\";"));
        see_money = new QTextBrowser(centralwidget);
        see_money->setObjectName(QStringLiteral("see_money"));
        see_money->setGeometry(QRect(1420, 350, 256, 192));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        see_money->setFont(font2);
        building_num0 = new QLabel(centralwidget);
        building_num0->setObjectName(QStringLiteral("building_num0"));
        building_num0->setGeometry(QRect(177, 12, 31, 31));
        building_num0->setFont(font);
        building_num0->setLayoutDirection(Qt::LeftToRight);
        building_num0->setAlignment(Qt::AlignCenter);
        building_num1 = new QLabel(centralwidget);
        building_num1->setObjectName(QStringLiteral("building_num1"));
        building_num1->setGeometry(QRect(177, 162, 31, 31));
        building_num1->setFont(font);
        building_num1->setLayoutDirection(Qt::LeftToRight);
        building_num1->setAlignment(Qt::AlignCenter);
        building_num2 = new QLabel(centralwidget);
        building_num2->setObjectName(QStringLiteral("building_num2"));
        building_num2->setGeometry(QRect(177, 312, 31, 31));
        building_num2->setFont(font);
        building_num2->setLayoutDirection(Qt::LeftToRight);
        building_num2->setAlignment(Qt::AlignCenter);
        building_num3 = new QLabel(centralwidget);
        building_num3->setObjectName(QStringLiteral("building_num3"));
        building_num3->setGeometry(QRect(177, 462, 31, 31));
        building_num3->setFont(font);
        building_num3->setLayoutDirection(Qt::LeftToRight);
        building_num3->setAlignment(Qt::AlignCenter);
        building_num4 = new QLabel(centralwidget);
        building_num4->setObjectName(QStringLiteral("building_num4"));
        building_num4->setGeometry(QRect(177, 611, 31, 31));
        building_num4->setFont(font);
        building_num4->setLayoutDirection(Qt::LeftToRight);
        building_num4->setAlignment(Qt::AlignCenter);
        building_num5 = new QLabel(centralwidget);
        building_num5->setObjectName(QStringLiteral("building_num5"));
        building_num5->setGeometry(QRect(179, 762, 31, 31));
        building_num5->setFont(font);
        building_num5->setLayoutDirection(Qt::LeftToRight);
        building_num5->setAlignment(Qt::AlignCenter);
        building_num6 = new QLabel(centralwidget);
        building_num6->setObjectName(QStringLiteral("building_num6"));
        building_num6->setGeometry(QRect(379, 762, 31, 31));
        building_num6->setFont(font);
        building_num6->setLayoutDirection(Qt::LeftToRight);
        building_num6->setAlignment(Qt::AlignCenter);
        building_num7 = new QLabel(centralwidget);
        building_num7->setObjectName(QStringLiteral("building_num7"));
        building_num7->setGeometry(QRect(577, 762, 31, 31));
        building_num7->setFont(font);
        building_num7->setLayoutDirection(Qt::LeftToRight);
        building_num7->setAlignment(Qt::AlignCenter);
        building_num8 = new QLabel(centralwidget);
        building_num8->setObjectName(QStringLiteral("building_num8"));
        building_num8->setGeometry(QRect(777, 762, 31, 31));
        building_num8->setFont(font);
        building_num8->setLayoutDirection(Qt::LeftToRight);
        building_num8->setAlignment(Qt::AlignCenter);
        building_num9 = new QLabel(centralwidget);
        building_num9->setObjectName(QStringLiteral("building_num9"));
        building_num9->setGeometry(QRect(977, 762, 31, 31));
        building_num9->setFont(font);
        building_num9->setLayoutDirection(Qt::LeftToRight);
        building_num9->setAlignment(Qt::AlignCenter);
        building_num10 = new QLabel(centralwidget);
        building_num10->setObjectName(QStringLiteral("building_num10"));
        building_num10->setGeometry(QRect(1177, 762, 31, 31));
        building_num10->setFont(font);
        building_num10->setLayoutDirection(Qt::LeftToRight);
        building_num10->setAlignment(Qt::AlignCenter);
        building_num11 = new QLabel(centralwidget);
        building_num11->setObjectName(QStringLiteral("building_num11"));
        building_num11->setGeometry(QRect(1377, 762, 31, 31));
        building_num11->setFont(font);
        building_num11->setLayoutDirection(Qt::LeftToRight);
        building_num11->setAlignment(Qt::AlignCenter);
        building_num12 = new QLabel(centralwidget);
        building_num12->setObjectName(QStringLiteral("building_num12"));
        building_num12->setGeometry(QRect(1377, 610, 31, 31));
        building_num12->setFont(font);
        building_num12->setLayoutDirection(Qt::LeftToRight);
        building_num12->setAlignment(Qt::AlignCenter);
        building_num13 = new QLabel(centralwidget);
        building_num13->setObjectName(QStringLiteral("building_num13"));
        building_num13->setGeometry(QRect(1377, 462, 31, 31));
        building_num13->setFont(font);
        building_num13->setLayoutDirection(Qt::LeftToRight);
        building_num13->setAlignment(Qt::AlignCenter);
        building_num14 = new QLabel(centralwidget);
        building_num14->setObjectName(QStringLiteral("building_num14"));
        building_num14->setGeometry(QRect(1377, 312, 31, 31));
        building_num14->setFont(font);
        building_num14->setLayoutDirection(Qt::LeftToRight);
        building_num14->setAlignment(Qt::AlignCenter);
        building_num15 = new QLabel(centralwidget);
        building_num15->setObjectName(QStringLiteral("building_num15"));
        building_num15->setGeometry(QRect(1377, 162, 31, 31));
        building_num15->setFont(font);
        building_num15->setLayoutDirection(Qt::LeftToRight);
        building_num15->setAlignment(Qt::AlignCenter);
        building_num16 = new QLabel(centralwidget);
        building_num16->setObjectName(QStringLiteral("building_num16"));
        building_num16->setGeometry(QRect(1378, 12, 31, 31));
        building_num16->setFont(font);
        building_num16->setLayoutDirection(Qt::LeftToRight);
        building_num16->setAlignment(Qt::AlignCenter);
        building_num17 = new QLabel(centralwidget);
        building_num17->setObjectName(QStringLiteral("building_num17"));
        building_num17->setGeometry(QRect(1177, 12, 31, 31));
        building_num17->setFont(font);
        building_num17->setLayoutDirection(Qt::LeftToRight);
        building_num17->setAlignment(Qt::AlignCenter);
        building_num18 = new QLabel(centralwidget);
        building_num18->setObjectName(QStringLiteral("building_num18"));
        building_num18->setGeometry(QRect(977, 12, 31, 31));
        building_num18->setFont(font);
        building_num18->setLayoutDirection(Qt::LeftToRight);
        building_num18->setAlignment(Qt::AlignCenter);
        building_num19 = new QLabel(centralwidget);
        building_num19->setObjectName(QStringLiteral("building_num19"));
        building_num19->setGeometry(QRect(779, 12, 31, 31));
        building_num19->setFont(font);
        building_num19->setLayoutDirection(Qt::LeftToRight);
        building_num19->setAlignment(Qt::AlignCenter);
        building_num20 = new QLabel(centralwidget);
        building_num20->setObjectName(QStringLiteral("building_num20"));
        building_num20->setGeometry(QRect(577, 12, 31, 31));
        building_num20->setFont(font);
        building_num20->setLayoutDirection(Qt::LeftToRight);
        building_num20->setAlignment(Qt::AlignCenter);
        building_num21 = new QLabel(centralwidget);
        building_num21->setObjectName(QStringLiteral("building_num21"));
        building_num21->setGeometry(QRect(379, 12, 31, 31));
        building_num21->setFont(font);
        building_num21->setLayoutDirection(Qt::LeftToRight);
        building_num21->setAlignment(Qt::AlignCenter);
        owner_state0 = new QLabel(centralwidget);
        owner_state0->setObjectName(QStringLiteral("owner_state0"));
        owner_state0->setGeometry(QRect(12, 12, 31, 31));
        owner_state0->setFont(font);
        owner_state0->setLayoutDirection(Qt::LeftToRight);
        owner_state0->setAlignment(Qt::AlignCenter);
        owner_state1 = new QLabel(centralwidget);
        owner_state1->setObjectName(QStringLiteral("owner_state1"));
        owner_state1->setGeometry(QRect(12, 162, 31, 31));
        owner_state1->setFont(font);
        owner_state1->setLayoutDirection(Qt::LeftToRight);
        owner_state1->setAlignment(Qt::AlignCenter);
        owner_state2 = new QLabel(centralwidget);
        owner_state2->setObjectName(QStringLiteral("owner_state2"));
        owner_state2->setGeometry(QRect(12, 312, 31, 31));
        owner_state2->setFont(font);
        owner_state2->setLayoutDirection(Qt::LeftToRight);
        owner_state2->setAlignment(Qt::AlignCenter);
        owner_state3 = new QLabel(centralwidget);
        owner_state3->setObjectName(QStringLiteral("owner_state3"));
        owner_state3->setGeometry(QRect(12, 462, 31, 31));
        owner_state3->setFont(font);
        owner_state3->setLayoutDirection(Qt::LeftToRight);
        owner_state3->setAlignment(Qt::AlignCenter);
        owner_state4 = new QLabel(centralwidget);
        owner_state4->setObjectName(QStringLiteral("owner_state4"));
        owner_state4->setGeometry(QRect(12, 612, 31, 31));
        owner_state4->setFont(font);
        owner_state4->setLayoutDirection(Qt::LeftToRight);
        owner_state4->setAlignment(Qt::AlignCenter);
        owner_state5 = new QLabel(centralwidget);
        owner_state5->setObjectName(QStringLiteral("owner_state5"));
        owner_state5->setGeometry(QRect(12, 762, 31, 31));
        owner_state5->setFont(font);
        owner_state5->setLayoutDirection(Qt::LeftToRight);
        owner_state5->setAlignment(Qt::AlignCenter);
        owner_state6 = new QLabel(centralwidget);
        owner_state6->setObjectName(QStringLiteral("owner_state6"));
        owner_state6->setGeometry(QRect(212, 762, 31, 31));
        owner_state6->setFont(font);
        owner_state6->setLayoutDirection(Qt::LeftToRight);
        owner_state6->setAlignment(Qt::AlignCenter);
        owner_state7 = new QLabel(centralwidget);
        owner_state7->setObjectName(QStringLiteral("owner_state7"));
        owner_state7->setGeometry(QRect(412, 762, 31, 31));
        owner_state7->setFont(font);
        owner_state7->setLayoutDirection(Qt::LeftToRight);
        owner_state7->setAlignment(Qt::AlignCenter);
        owner_state8 = new QLabel(centralwidget);
        owner_state8->setObjectName(QStringLiteral("owner_state8"));
        owner_state8->setGeometry(QRect(612, 762, 31, 31));
        owner_state8->setFont(font);
        owner_state8->setLayoutDirection(Qt::LeftToRight);
        owner_state8->setAlignment(Qt::AlignCenter);
        owner_state9 = new QLabel(centralwidget);
        owner_state9->setObjectName(QStringLiteral("owner_state9"));
        owner_state9->setGeometry(QRect(812, 762, 31, 31));
        owner_state9->setFont(font);
        owner_state9->setLayoutDirection(Qt::LeftToRight);
        owner_state9->setAlignment(Qt::AlignCenter);
        owner_state10 = new QLabel(centralwidget);
        owner_state10->setObjectName(QStringLiteral("owner_state10"));
        owner_state10->setGeometry(QRect(1012, 762, 31, 31));
        owner_state10->setFont(font);
        owner_state10->setLayoutDirection(Qt::LeftToRight);
        owner_state10->setAlignment(Qt::AlignCenter);
        owner_state11 = new QLabel(centralwidget);
        owner_state11->setObjectName(QStringLiteral("owner_state11"));
        owner_state11->setGeometry(QRect(1212, 762, 31, 31));
        owner_state11->setFont(font);
        owner_state11->setLayoutDirection(Qt::LeftToRight);
        owner_state11->setAlignment(Qt::AlignCenter);
        owner_state12 = new QLabel(centralwidget);
        owner_state12->setObjectName(QStringLiteral("owner_state12"));
        owner_state12->setGeometry(QRect(1212, 612, 31, 31));
        owner_state12->setFont(font);
        owner_state12->setLayoutDirection(Qt::LeftToRight);
        owner_state12->setAlignment(Qt::AlignCenter);
        owner_state13 = new QLabel(centralwidget);
        owner_state13->setObjectName(QStringLiteral("owner_state13"));
        owner_state13->setGeometry(QRect(1212, 462, 31, 31));
        owner_state13->setFont(font);
        owner_state13->setLayoutDirection(Qt::LeftToRight);
        owner_state13->setAlignment(Qt::AlignCenter);
        owner_state14 = new QLabel(centralwidget);
        owner_state14->setObjectName(QStringLiteral("owner_state14"));
        owner_state14->setGeometry(QRect(1212, 312, 31, 31));
        owner_state14->setFont(font);
        owner_state14->setLayoutDirection(Qt::LeftToRight);
        owner_state14->setAlignment(Qt::AlignCenter);
        owner_state15 = new QLabel(centralwidget);
        owner_state15->setObjectName(QStringLiteral("owner_state15"));
        owner_state15->setGeometry(QRect(1212, 162, 31, 31));
        owner_state15->setFont(font);
        owner_state15->setLayoutDirection(Qt::LeftToRight);
        owner_state15->setAlignment(Qt::AlignCenter);
        owner_state16 = new QLabel(centralwidget);
        owner_state16->setObjectName(QStringLiteral("owner_state16"));
        owner_state16->setGeometry(QRect(1212, 12, 31, 31));
        owner_state16->setFont(font);
        owner_state16->setLayoutDirection(Qt::LeftToRight);
        owner_state16->setAlignment(Qt::AlignCenter);
        owner_state17 = new QLabel(centralwidget);
        owner_state17->setObjectName(QStringLiteral("owner_state17"));
        owner_state17->setGeometry(QRect(1012, 12, 31, 31));
        owner_state17->setFont(font);
        owner_state17->setLayoutDirection(Qt::LeftToRight);
        owner_state17->setAlignment(Qt::AlignCenter);
        owner_state18 = new QLabel(centralwidget);
        owner_state18->setObjectName(QStringLiteral("owner_state18"));
        owner_state18->setGeometry(QRect(812, 12, 31, 31));
        owner_state18->setFont(font);
        owner_state18->setLayoutDirection(Qt::LeftToRight);
        owner_state18->setAlignment(Qt::AlignCenter);
        owner_state19 = new QLabel(centralwidget);
        owner_state19->setObjectName(QStringLiteral("owner_state19"));
        owner_state19->setGeometry(QRect(612, 12, 31, 31));
        owner_state19->setFont(font);
        owner_state19->setLayoutDirection(Qt::LeftToRight);
        owner_state19->setAlignment(Qt::AlignCenter);
        owner_state20 = new QLabel(centralwidget);
        owner_state20->setObjectName(QStringLiteral("owner_state20"));
        owner_state20->setGeometry(QRect(412, 12, 31, 31));
        owner_state20->setFont(font);
        owner_state20->setLayoutDirection(Qt::LeftToRight);
        owner_state20->setAlignment(Qt::AlignCenter);
        owner_state21 = new QLabel(centralwidget);
        owner_state21->setObjectName(QStringLiteral("owner_state21"));
        owner_state21->setGeometry(QRect(212, 12, 31, 31));
        owner_state21->setFont(font);
        owner_state21->setLayoutDirection(Qt::LeftToRight);
        owner_state21->setAlignment(Qt::AlignCenter);
        commentA = new QLabel(centralwidget);
        commentA->setObjectName(QStringLiteral("commentA"));
        commentA->setGeometry(QRect(330, 411, 641, 121));
        commentA->setAlignment(Qt::AlignCenter);
        commentA->setWordWrap(true);
        commentB = new QLabel(centralwidget);
        commentB->setObjectName(QStringLiteral("commentB"));
        commentB->setGeometry(QRect(330, 533, 641, 121));
        commentB->setAlignment(Qt::AlignCenter);
        commentB->setWordWrap(true);
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(410, 190, 491, 91));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        exit->setPalette(palette);
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift SemiLight"));
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        exit->setFont(font3);
        exit->setAutoFillBackground(false);
        exit->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        exit->setFlat(false);
        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1800, 26));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GameWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(cc, pushButton_17);
        QWidget::setTabOrder(pushButton_17, pushButton_16);
        QWidget::setTabOrder(pushButton_16, pushButton_15);
        QWidget::setTabOrder(pushButton_15, pushButton_14);
        QWidget::setTabOrder(pushButton_14, pushButton_7);
        QWidget::setTabOrder(pushButton_7, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_2);
        QWidget::setTabOrder(pushButton_2, c0);
        QWidget::setTabOrder(c0, c1);
        QWidget::setTabOrder(c1, c2);
        QWidget::setTabOrder(c2, c3);
        QWidget::setTabOrder(c3, c4);
        QWidget::setTabOrder(c4, pushButton_12);
        QWidget::setTabOrder(pushButton_12, pushButton_13);
        QWidget::setTabOrder(pushButton_13, pushButton_22);
        QWidget::setTabOrder(pushButton_22, pushButton_21);
        QWidget::setTabOrder(pushButton_21, pushButton_20);
        QWidget::setTabOrder(pushButton_20, pushButton_19);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "MainWindow", Q_NULLPTR));
        c0->setText(QApplication::translate("GameWindow", "Chinese\n"
"Guangzhou", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GameWindow", "Chinese\n"
"Harbin", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GameWindow", "Egypt\n"
"Cario", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GameWindow", "Chinese\n"
"Wuhan", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GameWindow", "Chinese\n"
"Shenzhen", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("GameWindow", "America\n"
"NewYork", Q_NULLPTR));
        c1->setText(QApplication::translate("GameWindow", "Chinese\n"
"Changsha", Q_NULLPTR));
        c2->setText(QApplication::translate("GameWindow", "Germany\n"
"Berlin", Q_NULLPTR));
        c3->setText(QApplication::translate("GameWindow", "Chinese\n"
"Chengdu", Q_NULLPTR));
        c4->setText(QApplication::translate("GameWindow", "Chinese\n"
"Hangzhou", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("GameWindow", "Chinese\n"
"Shanghai", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("GameWindow", "Chinese\n"
"Lhasa", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("GameWindow", "Chinese\n"
"Kunming", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("GameWindow", "Chinese\n"
"Guilin", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("GameWindow", "Italy\n"
"Rome", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("GameWindow", "Chinese\n"
"Xi'an", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("GameWindow", "Chinese\n"
"Xining", Q_NULLPTR));
        cc->setText(QApplication::translate("GameWindow", "Russia\n"
"Moscow", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("GameWindow", "Chinese\n"
"Beijing", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("GameWindow", "Japan\n"
"Tokyo", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("GameWindow", "Chinese\n"
"Xiamen", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("GameWindow", "England\n"
"London", Q_NULLPTR));
        P1->setText(QApplication::translate("GameWindow", "P1\n"
"\n"
"", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("GameWindow", "P2\n"
"\n"
"", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("GameWindow", "P3\n"
"\n"
"", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("GameWindow", "P4\n"
"\n"
"", Q_NULLPTR));
        Dice->setText(QApplication::translate("GameWindow", "Dice", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("GameWindow", "Next", Q_NULLPTR));
        Buy_local->setText(QApplication::translate("GameWindow", "Buy", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("GameWindow", "update", Q_NULLPTR));
        sell_place->setText(QApplication::translate("GameWindow", "Sell\n"
"Place", Q_NULLPTR));
        Build->setText(QApplication::translate("GameWindow", "Build", Q_NULLPTR));
        pc1->setText(QString());
        pc2->setText(QString());
        pc3->setText(QString());
        pc4->setText(QString());
        sell_house->setText(QApplication::translate("GameWindow", "Sell\n"
"House", Q_NULLPTR));
        building_num0->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num1->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num2->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num3->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num4->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num5->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num6->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num7->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num8->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num9->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num10->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num11->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num12->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num13->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num14->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num15->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num16->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num17->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num18->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num19->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num20->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        building_num21->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        owner_state0->setText(QString());
        owner_state1->setText(QString());
        owner_state2->setText(QString());
        owner_state3->setText(QString());
        owner_state4->setText(QString());
        owner_state5->setText(QString());
        owner_state6->setText(QString());
        owner_state7->setText(QString());
        owner_state8->setText(QString());
        owner_state9->setText(QString());
        owner_state10->setText(QString());
        owner_state11->setText(QString());
        owner_state12->setText(QString());
        owner_state13->setText(QString());
        owner_state14->setText(QString());
        owner_state15->setText(QString());
        owner_state16->setText(QString());
        owner_state17->setText(QString());
        owner_state18->setText(QString());
        owner_state19->setText(QString());
        owner_state20->setText(QString());
        owner_state21->setText(QString());
        commentA->setText(QApplication::translate("GameWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">The labels on the top right corners imply the number of buildings in the cities.</span></p></body></html>", Q_NULLPTR));
        commentB->setText(QApplication::translate("GameWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">The labels on the top left corners imply the cities' state of owner.</span></p></body></html>", Q_NULLPTR));
        exit->setText(QApplication::translate("GameWindow", "Exit the Game", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
