#include <QCoreApplication>
#include <QTextStream>
#include "fraction.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream cout(stdout);

    Fraction twothirds(2,3);
    Fraction threequarters(3,4);
    Fraction acopy(twothirds);
    Fraction f4 = threequarters;

    f4 = twothirds;
    cout << f4.toString() << endl;
    f4 = twothirds.multiply(threequarters);
    cout << f4.toString() << endl;
    f4 = twothirds.divide(threequarters);
    cout << f4.toString() << endl;
    f4 = twothirds.add(threequarters);
    cout << f4.toString() << endl;
    f4 = twothirds.subtract(threequarters);
    cout << f4.toString() << endl;

    return a.exec();
}
