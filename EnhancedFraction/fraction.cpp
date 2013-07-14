#include "fraction.h"
#include <assert.h>

int Fraction::s_assigns = 0;
int Fraction::s_copies = 0;
int Fraction::s_ctors = 0;

Fraction::Fraction(int n, int d):
    m_Numer(n), m_Denom(d) {
    assert(m_Denom != 0);
    ++s_ctors;
}

Fraction::Fraction(const Fraction& other):
    m_Numer(other.m_Numer), m_Denom(other.m_Denom) {
    ++s_copies;
}

Fraction& Fraction::operator = (const Fraction& other) {
    if(this != &other) {
        m_Numer = other.m_Numer;
        m_Denom = other.m_Denom;
        ++s_assigns;
    }
    return *this;
}

QString Fraction::report() {
    return QString(" [assigns: %1 copies: %2 ctors: %3] ")
            .arg(s_assigns).arg(s_copies).arg(s_ctors);
}

QString Fraction::toString() {
    return QString(" %1 / %2 ").arg(m_Numer).arg(m_Denom);
}

Fraction Fraction::multiply(const Fraction& other) {
    return Fraction(m_Numer * other.m_Numer, m_Denom * other.m_Denom);
}

Fraction Fraction::add(const Fraction& other) {
    return Fraction((m_Numer * other.m_Denom) + (other.m_Numer * m_Denom), m_Denom * other.m_Denom);
}

Fraction Fraction::subtract(const Fraction& other) {
    return Fraction((m_Numer * other.m_Denom) - (other.m_Numer * m_Denom),m_Denom * other.m_Denom);
}

Fraction Fraction::divide(const Fraction& other) {
    return Fraction(m_Numer * other.m_Denom, m_Denom * other.m_Numer);
}
