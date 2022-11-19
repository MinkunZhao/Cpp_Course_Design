#include "dicebysound.h"
#include "ui_dicebysound.h"

dicebysound::dicebysound(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dicebysound)
{
    ui->setupUi(this);
}

dicebysound::~dicebysound()
{
    delete ui;
}

void dicebysound::on_record_clicked()
{
    myDice = new Dice();
}

void dicebysound::on_stop_clicked()
{
    myDice->stopRecord();
    this->close();
}
