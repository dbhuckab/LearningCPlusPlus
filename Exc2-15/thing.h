#ifndef THING_H
#define THING_H

class Thing
{
public:
    void set(int num, char c);
    void increment();
    void show();
    int getNumber();
    char getChar();
private:
    void m_Number;
    void m_Character;
};

#endif // THING_H
