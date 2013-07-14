#ifndef FRACION_H
#define FRACION_H
#include <QString>

class Fraction
{
public:
    Fraction(int n, int d);
    Fraction(const Fraction& other); // Copy constructor
    Fraction& operator = (const Fraction & other);
    void set(int n, int d);

    Fraction add(const Fraction& other);
    Fraction multiply(const Fraction& other);
    Fraction subtract(const Fraction& other);
    Fraction divide(const Fraction& other);

    QString toString();
    double toDouble();
    static QString report();
private:
    int m_Numer, m_Denom;
    static int s_assigns;
    static int s_copies;
    static int s_ctors;
};

#endif // FRACION_H
