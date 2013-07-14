#include "contactlist.h"
#include "contactfactory.h"

/**
 * @brief ContactList::ContactList
 */
ContactList::ContactList()
{
}

/**
 * @brief ContactList::add
 * Adds a new contact to list via QMap's insertMulti (can have same key)
 * @param c
 */
void ContactList::add(Contact *c)
{
    insertMulti(c->category(), c);
}

/**
 * @brief ContactList::remove
 * Removes a contact ... looks for same pointer in map as passed in pointer
 * @TODO : Make sure erase is doing what I think it's doing, and not causing mem leaks
 * @param c
 */
void ContactList::remove(Contact *c)
{
    QMap<int, Contact*>::iterator i = begin();
    while (i != end()) {
        if (i.value() == c)
            i = erase(i);
        ++i;
    }

}

/**
 * @brief ContactList::getPhoneList
 * As per exercise specifications, returns a QStringList with Name \t Last Name \t Phone Number
 * for all contacts in a category.  Uses QMap iterator and QMap find.
 * @param category
 * @return
 */
QStringList ContactList::getPhoneList(int category)
{
    QStringList returnList;
    QMap<int, Contact*>::const_iterator i = find(category);
    while (i != end() && i.key() == category) {
        returnList.append((*i)->firstName() + " " + (*i)->lastName() + "\t" + (*i)->phoneNumber());
        ++i;
    }
    return returnList;
}

/**
 * @brief ContactList::getMailingList
 * @param category
 * @return
 */
QStringList ContactList::getMailingList(int category)
{
    QStringList returnList;
    QMap<int, Contact*>::const_iterator i = find(category);
    while (i != end() && i.key() == category) {
        returnList.append((*i)->firstName() + " " + (*i)->lastName() + "\t" + (*i)->streetAddress() + "\t" + (*i)->zipCode());
        ++i;
    }
    return returnList;
}
