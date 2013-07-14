#ifndef CONTACT_H
#define CONTACT_H

#include <QString>

enum Category {FRIENDS, FAMILY, BUSINESS, OTHER, CATEGORY_MAX = OTHER};

class Contact
{
public:
    Contact(int category, QString firstName = "", QString lastName = "", QString phoneNumber = "", QString streetAddress = "", QString zipCode = "", QString city = "");
    virtual ~Contact();
    QString toString() const;

    int category() const;
    QString firstName() const;
    QString lastName() const;
    QString streetAddress() const;
    QString zipCode() const;
    QString city() const;
    QString phoneNumber() const;

private:
    int m_category;
    QString m_firstName;
    QString m_lastName;
    QString m_streetAddress;
    QString m_zipCode;
    QString m_city;
    QString m_phoneNumber;
};

#endif // CONTACT_H
