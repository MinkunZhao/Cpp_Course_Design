#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    std::cout<<"main"<<std::endl;
    w.show();

    return a.exec();
}
