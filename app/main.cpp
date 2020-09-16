#include "mainwindow.h"
#include <QApplication>

using namespace TagLib;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setPath("D:\\A_Data\\Музыка\\");
    w.show();
    w.showDir();
    return a.exec();
}
