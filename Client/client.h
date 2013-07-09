#ifndef CLIENT_H
#define CLIENT_H

#include <string>
using namespace std;


class Client
{
public:
    Client(string name) : m_Name(name), m_ID(++s_SavedID) {

    }
    static int getSavedID() {
        return s_SavedID;
    }

    string getName() { return m_Name; }
    int getID() { return m_ID; }
private:
    string m_Name;
    int m_ID;
    static int s_SavedID;
};

#endif // CLIENT_H
