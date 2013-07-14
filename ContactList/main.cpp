#include <QCoreApplication>
#include "contact.h"
#include "contactlist.h"
#include <QDebug>
#include "contactfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    ContactList MyContactList;

    Contact ContactA(FRIENDS, "Osheen", "Bárðr", "555-5555", "123 Main Drive", "11111");
    Contact ContactB(FRIENDS, "Wigheard", "David", "666-6666", "456 Loop Drive", "22222");
    Contact ContactC(FAMILY, "Finnegan", "Ali", "777-7777", "789 Func Drive", "33333");

    MyContactList.add(&ContactA);
    MyContactList.add(&ContactB);
    MyContactList.add(&ContactC);

    QStringList phoneList = MyContactList.getPhoneList(FRIENDS);

    foreach (const QString &str, phoneList) {
        qDebug() << QString(" [%1] ").arg(str);
    }

    QStringList mailList = MyContactList.getMailingList(FAMILY);

    foreach (const QString &str, mailList) {
        qDebug() << QString(" [%1] ").arg(str);
    }


    return a.exec();
}
