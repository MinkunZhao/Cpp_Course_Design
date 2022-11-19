#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(600);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Start_clicked()
{
    this->close();
    game->show();
}


void MainWindow::on_pushButton_2_clicked()
//open the introduction ui
{
    this->hide();
    intro->show();
    intro->exec();
    this->show();
}


void MainWindow::on_pushButton_3_clicked()
//open the developers ui
{
    this->hide();
    dev->show();
    dev->exec();
    this->show();
}
