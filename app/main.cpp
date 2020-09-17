#include "mainwindow.h"
#include <QApplication>
#include "taglib/tag.h"

using namespace TagLib;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setPath("Music_test");
    w.show();
    w.showDir();
    return a.exec();
}
