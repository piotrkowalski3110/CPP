#include "Rational.h"

Rational Rational::operator+(const Rational& U) const
{
Rational Wynik;

Wynik.Licznik=U.Mianownik*Licznik+Mianownik*U.Licznik;
Wynik.Mianownik=U.Mianownik*Mianownik;
return Wynik;
}

std::ostream& operator<<(std::ostream& out, Rational& W)
{
    int whole = W.Licznik/W.Mianownik;
    int fraction = W.Licznik%W.Mianownik;

    if(fraction != 0) out << whole << " " << fraction << "/" <<W.Mianownik;
    else out << whole;
    return out;
}

Rational operator-(const Rational& U1, const Rational& U2)
{
    Rational Wynik;
    Wynik.Licznik=U2.Mianownik*U1.Licznik-U1.Mianownik*U2.Licznik;
    Wynik.Mianownik=U1.Mianownik*U2.Mianownik;
    return Wynik;
}