#include <QCoreApplication>
#include "client.h"
#include <iostream>

int Client::s_SavedID(1000);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    Client cust1("George");
    cout << cust1.getID() << endl;
    cout << cust1.getName() << endl;
    cout << Client::getSavedID();
    return a.exec();
}
