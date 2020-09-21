#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage: ./utag [directory]\n";
        return 1;
    }
    try {
        QApplication a(argc, argv);
        MainWindow w(argv[1]);
        w.show();
        return a.exec();
    } catch (...) {
        std::cerr << "utag: Error!\n";
    }
}
