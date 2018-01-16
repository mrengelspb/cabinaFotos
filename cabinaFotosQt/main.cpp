#include "mainwindow.h"
#include <QApplication>
#include "timer.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

   // Timer timer();

qDebug() << "START...";
    return a.exec();
}
