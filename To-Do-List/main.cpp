#include "superchickenlist.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SuperChickenList w;
    w.show();
    return a.exec();
}
