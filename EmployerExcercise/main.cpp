#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include <QTime>
#include <qglobal.h>
#include "person.h"
#include "employer.h"
#include "position.h"

int main(int argc, char *argv[])
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    QCoreApplication a(argc, argv);
    QTextStream cout(stdout);

    Person person1("Dennis");
    Person person2("Amanda");

    cout << "person1 : " << person1.toString() << endl;
    cout << "person2 : " << person2.toString() << endl;

    Employer employer1("Starfleet", "M1");
    Employer employer2("Borg", "M2");

    cout << "Employer1 : " << employer1.toString() << endl;
    cout << "Employer2 : " << employer2.toString() << endl;

    Position position1("Commander", "D1");
    Position position2("Infantry", "D2");

    cout << "position1 : " << position1.toString() << endl;
    cout << "position2 : " << position2.toString() << endl;

    cout << endl << endl;

    cout << "Adding position 1 to employer 1: " << endl;
    employer1.addPosition(&position1);

    QList<Position*> employer1Positions = employer1.findJobs();
    foreach(const Position* pos, employer1Positions) {
        if(pos)
            cout << pos->toString() << endl;
    }

    // Person applying
    person2.apply(&employer1, &position1);

    employer1.printEmployeeList();

    return a.exec();
}
