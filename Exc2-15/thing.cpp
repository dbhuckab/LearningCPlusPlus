#include <QTextStream>
#include "thing.h"

void Thing::set(int num, char c) {
    m_Number = num;
    m_Character = c;
}

void Thing::increment() {
    ++m_Number;
    ++m_Character;
}

void Thing::show() {
    QTextStream cout(stdout);
    cout << m_Number << '\t' << m_Character << endl;
}

void Thing::getNumber() {
    QTextStream cout(stdout);
    cout << "m_Number" << '\t' << m_Number << endl;
}

void Thing::getChar() {
    QTextStream cout(stdout);
    cout << "m_Character" << m_Character << endl;
}
