#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game *game = new Game(8, 10, 100);
    MainWindow w(nullptr, game);
    w.show();
    return a.exec();
}
