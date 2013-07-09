#include <QCoreApplication>
#include "thing.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Thing::showCount();
    Thing t1(3,4), t2(5,6);

    t1.showCount();
    {
        Thing t3(7,8), t4(9,10);
        Thing::showCount();
    }

    Thing::showCount();

    return a.exec();
}
