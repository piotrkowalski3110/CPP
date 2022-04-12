#include <iostream>

class Rational
{
private:
    int Licznik, Mianownik;
public:
    Rational(int A = 1, int B = 1)
    {
        Licznik = A;
        Mianownik = B;
    }
//Przeciążenie operatora + za pomocą funkcji składowej klasy
    Rational operator+(const Rational& U)const;
    Friend std::ostream & operator<<(std::ostream& out, Rational& W);
    Friend Rational operator- (const Rational&, const Rational&);
}; 