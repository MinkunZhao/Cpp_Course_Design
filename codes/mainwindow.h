#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"gamewindow.h"
#include"introduction.h"
#include"developers.h"
#include"Control.h"
#include<iostream>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_Start_clicked();

    void on_pushButton_2_clicked();
    //open introduction.ui

    void on_pushButton_3_clicked();
    //open developers.ui

private:
    Ui::MainWindow *ui;

    GameWindow *game=new GameWindow();

    Introduction *intro=new Introduction();

    Developers *dev=new Developers();
};
#endif // MAINWINDOW_H
