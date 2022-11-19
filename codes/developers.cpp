#include "developers.h"
#include "ui_developers.h"

Developers::Developers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Developers)
{
    ui->setupUi(this);

    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(600);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
}


void Developers::on_exit_clicked()
// close the developers ui
{
    this->close();
}


Developers::~Developers()
{
    delete ui;
}
