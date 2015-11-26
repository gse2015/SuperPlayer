#include "superplayerwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SuperPlayerWindow w;
    w.show();

    return a.exec();
}
