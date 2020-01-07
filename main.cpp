#include "tictok.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ticTok w;
    w.show();
    return a.exec();
}
