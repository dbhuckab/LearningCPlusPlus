#include "employer.h"
#include "person.h"
#include "position.h"
#include <QTextStream>

/**
 * @brief Employer::Employer
 * @param name
 * @param market
 */
Employer::Employer(QString name, QString market):
    m_Name(name), m_Market(market), m_Positions(QList<Position*>()), m_EmployeeList(QList<Person*>())
{
}

/**
 * @brief Employer::hire
 * Per excercise instructions, randomly do not hire person.  Appends to m_EmployeeList QList
 * @param newHire
 * @param pos
 * @return
 */
bool Employer::hire(Person* newHire, Position* pos) {
    //int doHire = qrand() % ((1 + 1) - 0) + 0; // Taking out for testing
    int doHire = 1;
    if(doHire == 1 && m_Positions.contains(pos)){
        m_EmployeeList.append(newHire);
        return true;
    }
    return false;
}

/**
 * @brief Employer::toString
 * @return
 */
QString Employer::toString() const {
    return m_Name + " - " + m_Market;
}

/**
 * @brief Employer::printEmployeeList
 * Prints all Person's from this objects m_EmployeeList
 */
void Employer::printEmployeeList() const {
    QTextStream cout(stdout);
    foreach(const Person* per, m_EmployeeList) {
        if(per)
            cout << per->toString() << endl;
    }

}

/**
 * @brief Employer::addPosition
 * @param position
 */
void Employer::addPosition(Position* position) {
    m_Positions.append(position);
}

/**
 * @brief Employer::findJobs
 * @return
 */
QList<Position *> Employer::findJobs() {
    QList<Position*> availablePositions;
    foreach(const Position* pos, m_Positions) {
        if(pos->isAvailable())
            availablePositions.append(new Position(*pos));
    }
    return availablePositions;
}

/**
 * @brief Employer::~Employer
 */
Employer::~Employer() {
    if(!m_Positions.isEmpty()) {
        qDeleteAll(m_Positions);
        m_Positions.clear();
    }
    if(!m_EmployeeList.isEmpty()) {
        qDeleteAll(m_EmployeeList);
        m_EmployeeList.clear();
    }
}
