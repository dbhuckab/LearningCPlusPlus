#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <QString>
#include <QList>

class Person;
class Position;

class Employer
{
public:
    Employer(QString name, QString market);
    virtual ~Employer();
    bool hire(Person* newHire, Position* pos);
    QString toString() const;
    void printEmployeeList() const;
    QList<Position*> findJobs();
    void addPosition(Position* position);
private:
    QString m_Name;
    QString m_Market;
    QList<Position*> m_Positions;
    QList<Person*> m_EmployeeList;
};

#endif // EMPLOYER_H
