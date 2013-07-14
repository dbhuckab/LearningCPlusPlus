#include "contact.h"
#include <QString>

/**
 * @brief Contact::Contact
 * @param category
 * @param firstName
 * @param lastName
 * @param phoneNumber
 * @param streetAddress
 * @param zipCode
 * @param city
 */
Contact::Contact(int category, QString firstName, QString lastName, QString phoneNumber, QString streetAddress, QString zipCode, QString city):
    m_category(category), m_firstName(firstName), m_lastName(lastName), m_streetAddress(streetAddress), m_city(city), m_phoneNumber(phoneNumber), m_zipCode(zipCode)
{
}

/**
 * @brief Contact::~Contact
 */
Contact::~Contact()
{
}

/**
 * @brief Contact::toString
 * @return
 */
QString Contact::toString() const
{
    return "";
}

/**
 * @brief Contact::category getter
 * @return
 */
int Contact::category() const
{
    return m_category;
}

/**
 * @brief Contact::firstName getter
 * @return
 */
QString Contact::firstName() const
{
    return m_firstName;
}

/**
 * @brief Contact::lastName getter
 * @return
 */
QString Contact::lastName() const
{
    return m_lastName;
}

/**
 * @brief Contact::streetAddress getter
 * @return
 */
QString Contact::streetAddress() const
{
    return m_streetAddress;
}

/**
 * @brief Contact::zipCode getter
 * @return
 */
QString Contact::zipCode() const
{
    return m_zipCode;
}

/**
 * @brief Contact::city getter
 * @return
 */
QString Contact::city() const
{
    return m_city;
}

/**
 * @brief Contact::phoneNumber getter
 * @return
 */
QString Contact::phoneNumber() const
{
    return m_phoneNumber;
}
