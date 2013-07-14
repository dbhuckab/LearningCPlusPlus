#ifndef POSITION_H
#define POSITION_H

#include <QString>

class Position
{
public:
    Position(QString name, QString description);
    QString toString() const;
    bool isAvailable() const;
private:
    QString m_Name;
    QString m_Description;
    bool    m_Available;
};

#endif // POSITION_H
