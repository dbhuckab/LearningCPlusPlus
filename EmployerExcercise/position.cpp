#include "position.h"
#include "employer.h"
#include "person.h"

Position::Position(QString name, QString description):
    m_Name(name), m_Description(description), m_Available(true)
{
}

QString Position::toString() const {
    return m_Name + " - " + m_Description;
}

bool Position::isAvailable() const {
    return m_Available;
}
