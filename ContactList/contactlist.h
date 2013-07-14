#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <QMap>
#include <QStringList>
#include "contact.h"

class ContactList : public QMap<int, Contact*>
{
public:
    ContactList();
    /* Adds contact to map, keyed by category */
    void add(Contact* c);
    void remove(Contact* c);
    QStringList getPhoneList(int category);
    QStringList getMailingList(int category);
};

#endif // CONTACTLIST_H
