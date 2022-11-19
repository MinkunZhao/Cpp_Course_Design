/********************************************************************************
** Form generated from reading UI file 'developers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPERS_H
#define UI_DEVELOPERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Developers
{
public:
    QPushButton *exit;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Developers)
    {
        if (Developers->objectName().isEmpty())
            Developers->setObjectName(QStringLiteral("Developers"));
        Developers->resize(1045, 595);
        Developers->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        exit = new QPushButton(Developers);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(0, 0, 1041, 61));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        exit->setFont(font);
        graphicsView = new QGraphicsView(Developers);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 110, 371, 371));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/headimg/xdx.png);"));
        graphicsView_2 = new QGraphicsView(Developers);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(400, 90, 311, 391));
        graphicsView_2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/headimg/hjw.png);"));
        graphicsView_3 = new QGraphicsView(Developers);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(730, 90, 311, 391));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/headimg/zmk.jpg);"));
        label = new QLabel(Developers);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 500, 371, 91));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Developers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(396, 500, 321, 91));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Developers);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(732, 503, 311, 91));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(Developers);

        QMetaObject::connectSlotsByName(Developers);
    } // setupUi

    void retranslateUi(QDialog *Developers)
    {
        Developers->setWindowTitle(QApplication::translate("Developers", "Dialog", Q_NULLPTR));
        exit->setText(QApplication::translate("Developers", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("Developers", "XDX", Q_NULLPTR));
        label_2->setText(QApplication::translate("Developers", "HJW", Q_NULLPTR));
        label_3->setText(QApplication::translate("Developers", "ZMK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Developers: public Ui_Developers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPERS_H
