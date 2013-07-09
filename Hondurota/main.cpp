#include <QCoreApplication>
#include <QTextStream>
#include "hondurota.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream cout(stdout);

    Hondurota Car(20.0, 1000.0, 20.0, 25.0);

    cout << "Starting speed: " << Car.getSpeed() << endl;
    cout << "Starting Tank Capacity: " << Car.getTankCapacity() << endl;
    cout << "Starting MPG: " << Car.getMPG() << endl;
    cout << "Starting Fuel: " << Car.getFuel() << endl;
    cout << "Starting Odometer: " << Car.getOdometer() << endl << endl;

    cout << "Driving at 50 mph for 60 minutes..." << endl;
    Car.drive(50.0, 60.0);

    cout << "Fuel: " << Car.getFuel() << endl;
    cout << "Odometer: " << Car.getOdometer() << endl << endl;

    cout << "Driving at 50 mph for 3000 minutes..." << endl;
    Car.drive(50.0, 3000.0);

    cout << "Fuel: " << Car.getFuel() << endl;
    cout << "Odometer: " << Car.getOdometer() << endl << endl;

    return a.exec();
}
