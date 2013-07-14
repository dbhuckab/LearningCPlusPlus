#ifndef CONTACTFACTORY_H
#define CONTACTFACTORY_H

#include <QString>
#include <QStringList>
#include "contactlist.h"
#include "contact.h"
#include <iostream>

class ContactFactory
{
public:
    //ContactFactory();

private:
    // Not implementing getRandom of each contact constructor var.... but you get the point
    QString getRandomName();
    QString getRandomPhone();
    QString getRandomStreet();

    static const QStringList m_names;
    static const QStringList m_phones;
    static const QStringList m_streets;

};

#endif // CONTACTFACTORY_H
