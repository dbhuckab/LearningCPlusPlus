#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Employer;
class Position;

class Person
{
public:
    explicit Person(QString name);
    virtual ~Person();
    QString toString() const;
    bool apply(Employer *newC, Position *newP);
    QString getEmployer();
    QString getPosition();

private:
    QString m_Name;
    bool m_Employed;
    Position* m_Position;
    Employer* m_Employer;
};

#endif // PERSON_H
