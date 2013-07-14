#include "person.h"
#include "employer.h"
#include "position.h"
#include <QString>
#include <QList>

Person::Person(QString name):
    m_Name(name), m_Position(0), m_Employer(0)
{
}

Person::~Person() {
    delete m_Position;
    delete m_Employer;
}

QString Person::toString() const {
    if(m_Position && m_Employer)
        return m_Name + " - " + m_Position->toString() + " - " + m_Employer->toString();
    return m_Name;
}

bool Person::apply(Employer* newC, Position* newP) {
    if(newC->hire(this,newP)) {
        m_Position = newP;
        m_Employer = newC;
        m_Employed = true;
        return true;
    }
    return false;
}

QString Person::getEmployer() {
    if(m_Employer)
        return m_Employer->toString();
    return "Unemployed";
}

QString Person::getPosition() {
    if(m_Position)
        return m_Position->toString();
    return "";
}
