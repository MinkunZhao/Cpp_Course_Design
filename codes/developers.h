#ifndef DEVELOPERS_H
#define DEVELOPERS_H

#include <QDialog>
#include <QPropertyAnimation>

namespace Ui
{
class Developers;
}

class Developers : public QDialog
{
    Q_OBJECT

public:
    Developers(QWidget *parent = 0);

    ~Developers();

private slots:
    void on_exit_clicked();

private:
    Ui::Developers *ui;
};

#endif // DEVELOPERS_H
