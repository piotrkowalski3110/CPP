//
// Created by piotrk on 13.04.2022.
//

#include "Complex.h"
#include <math.h>

Complex operator+(const Complex& U1, const Complex& U2)
{
    Complex wynik;
    wynik.Re = U1.Re+U2.Re;
    wynik.Im = U1.Im+U2.Im;
    return wynik;

}

Complex operator-(const Complex& U1, const Complex& U2)
{
    Complex wynik;
    wynik.Re = U1.Re-U2.Re;
    wynik.Im = U1.Im-U2.Im;
    return wynik;
}

Complex operator*(const Complex& U1, const Complex& U2)
{
    Complex wynik;
    wynik.Re = U1.Re * U2.Re - U1.Im * U2.Im;
    wynik.Im = U1.Re * U2.Re + U1.Im * U2.Im;
    return wynik;
}

std::ostream& operator<<(std::ostream& out, Complex& W)
{
    if (W.Im >= 0)
    {
        out<<W.Re<<" + "<<W.Im<<"i"<<std::endl;
    }
    else
    {
        out<<W.Re<<" - "<<W.Im*(-1)<<"i"<<std::endl;
    }
}

std::istream& operator>>(std::istream& in, Complex& W)
{
    in >> W.Re;
    in >> W.Im;
}

double Module(Complex& W)
{
    return sqrt(pow(W.Re,2) + pow(W.Im,2));
}
