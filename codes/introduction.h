#ifndef INTRODUCTION_H
#define INTRODUCTION_H

#include <QDialog>
#include <QPropertyAnimation>

namespace Ui
{
class Introduction;
}

class Introduction : public QDialog
{
    Q_OBJECT

public:
    Introduction(QWidget *parent = nullptr);

    ~Introduction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Introduction *ui;
};

#endif // INTRODUCTION_H
