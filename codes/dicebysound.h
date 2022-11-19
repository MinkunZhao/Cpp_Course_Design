#ifndef DICEBYSOUND_H
#define DICEBYSOUND_H

#include <QWidget>
#include "dice.h"

namespace Ui {
class dicebysound;
}

class dicebysound : public QWidget
{
    Q_OBJECT

public:
    dicebysound(QWidget *parent = 0);

    ~dicebysound();

private slots:
    void on_record_clicked();

    void on_stop_clicked();

private:
    Ui::dicebysound *ui;

    Dice* myDice;
};

#endif // DICEBYSOUND_H
