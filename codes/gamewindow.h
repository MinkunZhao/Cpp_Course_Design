#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include<string>
#include <QMainWindow>
#include<iostream>
#include "ui_gamewindow.h"
#include"Control.h"
#include <qpainter.h>
#include <dicebysound.h>
#include <QLabel>
#include <QPropertyAnimation>


//#define _GLIBCXX_USE_CXX11_ABI 0

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);

    ~GameWindow();

private slots:
    void on_pushButton_28_clicked();
    // The button "Next"

    void on_Buy_local_clicked();

    void on_Dice_clicked();

    void on_sell_place_clicked();

    void on_sell_house_clicked();

    void on_Build_clicked();

    void on_exit_clicked();

private:
    void target_city_show(int);

    void update_see_money();

    int target_city=0;

    bool haDice=false;

    Ui::GameWindow *ui;

    int showing=0;

    Control* con;

    QList<QPushButton*> chessPs;

    int now_playindex=0;

    void update_building_number();

    void update_owner_state();
};

#endif // GAMEWINDOW_H
