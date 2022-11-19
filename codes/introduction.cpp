#include "introduction.h"
#include "ui_introduction.h"

Introduction::Introduction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Introduction)
{
    ui->setupUi(this);

    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(600);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
}


Introduction::~Introduction()
{
    delete ui;
}


void Introduction::on_pushButton_clicked()
// close the introduction ui
{
    this->close();
}
