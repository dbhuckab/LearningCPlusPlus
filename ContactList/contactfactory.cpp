#include "contactfactory.h"
#include "contact.h"
#include <stdlib.h>

QStringList ContactFactory::m_names = QStringList() << "Fleener"
                                                    << "Das"
                                                    << "Kohlmeier"
                                                    << "Massengill"
                                                    << "Gardella";

QStringList ContactFactory::m_phones = QStringList() << "111-1111"
                                                     << "222-2222"
                                                     << "333-3333"
                                                     << "444-4444"
                                                     << "555-5555";

QStringList ContactFactory::m_streets = QStringList() << "111 A Dr"
                                                      << "222 B Dr"
                                                      << "333 C Dr"
                                                      << "444 D Dr"
                                                      << "555 E Dr";

// Just putting this here till I have a chance to sort this out
void createRandomContacts(ContactList* cl, int n) {
    static ContactFactory cf;
    for (int i=0; i<n; ++i) {
        cf >> *cl;
    }
}

/*
ContactFactory::ContactFactory()
{
}
*/

QString ContactFactory::getRandomName() const
{
    int n = m_names.size();
    return m_names.at((rand()%n)+1);
}

QString ContactFactory::getRandomPhone() const
{
    int n = m_phones.size();
    return m_phones.at((rand()%n)+1);
}

QString ContactFactory::getRandomStreet() const
{
    int n = m_streets.size();
    return m_streets.at((rand()%n)+1);
}

