#pragma once
#include "Point.h"

class Circle
{
private:
    Point Centre;
    double Radius;

public:
    Circle(double X, double Y, double R);

    friend Circle operator+(Circle&, Circle&);
    friend bool operator>(Circle&, Circle&);
    friend bool IntersectCheck(Circle&, Circle&); // funkcja IntersectCheck (sprawdza czy dwa okregi się przecinaja) jest zaprzyjaźniona z klasa Circle. Deklaracja
    friend void cwiartka(Circle&);
    friend bool CircleCompare(Circle&, Circle&);
    friend Circle CircleAdd(Circle&, Circle&);
};