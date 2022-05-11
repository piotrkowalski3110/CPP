#pragma once
#include <iostream>
using namespace std;

class Osoba
{
public:
    std::string imie;
    std::string nazwisko;

    friend ostream &operator<<( ostream &out, const Osoba &O ) {
        out << O.imie << " " << O.nazwisko;
        return out;
    }
}; 