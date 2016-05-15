#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("susion");
    MainWindow w;
    w.setWindowTitle("Taiko");
    w.setWindowIcon(QIcon("C:/Users/User/Downloads/taiko.png"));

    w.show();


    return a.exec();
}
