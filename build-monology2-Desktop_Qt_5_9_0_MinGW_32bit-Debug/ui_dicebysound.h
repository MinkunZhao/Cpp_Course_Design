/********************************************************************************
** Form generated from reading UI file 'dicebysound.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICEBYSOUND_H
#define UI_DICEBYSOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dicebysound
{
public:
    QPushButton *record;
    QPushButton *stop;
    QLabel *label;

    void setupUi(QWidget *dicebysound)
    {
        if (dicebysound->objectName().isEmpty())
            dicebysound->setObjectName(QStringLiteral("dicebysound"));
        dicebysound->resize(1733, 1167);
        dicebysound->setAutoFillBackground(false);
        dicebysound->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/headimg/record.webp);"));
        record = new QPushButton(dicebysound);
        record->setObjectName(QStringLiteral("record"));
        record->setGeometry(QRect(480, 140, 621, 411));
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        font.setWeight(75);
        record->setFont(font);
        record->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        stop = new QPushButton(dicebysound);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(480, 640, 621, 351));
        stop->setFont(font);
        label = new QLabel(dicebysound);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 1731, 101));
        QFont font1;
        font1.setPointSize(38);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(dicebysound);

        QMetaObject::connectSlotsByName(dicebysound);
    } // setupUi

    void retranslateUi(QWidget *dicebysound)
    {
        dicebysound->setWindowTitle(QApplication::translate("dicebysound", "Form", Q_NULLPTR));
        record->setText(QApplication::translate("dicebysound", "Record", Q_NULLPTR));
        stop->setText(QApplication::translate("dicebysound", "Stop", Q_NULLPTR));
        label->setText(QApplication::translate("dicebysound", "VOICE DICE   \345\243\260\346\216\247\351\252\260\345\255\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dicebysound: public Ui_dicebysound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICEBYSOUND_H
