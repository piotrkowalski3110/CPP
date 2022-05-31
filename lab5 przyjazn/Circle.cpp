#include "Circle.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
bool IntersectCheck(Circle& C1, Circle& C2) // Definicja funkcji
{
    double CentresDistance;
    CentresDistance = sqrt(pow(C1.Centre.X - C2.Centre.X, 2) + pow(C1.Centre.Y - C2.Centre.Y, 2));
    return (CentresDistance<(C1.Radius + C2.Radius) && CentresDistance>abs(C1.Radius -C2.Radius));
}

void cwiartka(Circle& C)
{
    int cwiartki[4] = {1,1,1,1};

    if(C.Centre.X > 0)
    {
        cwiartki[1] = 0;
        cwiartki[2] = 0;
    }
    else
    {
        cwiartki[0] = 0;
        cwiartki[3] = 0;
    }

    if(C.Centre.Y > 0)
    {
        cwiartki[2] = 0;
        cwiartki[3] = 0;
    }
    else
    {
        cwiartki[0] = 0;
        cwiartki[1] = 0;
    }


    for(int i=0; i<4; i++)
    {
        std::cout<<"Cwiartka "<<i+1<<": "<<cwiartki[i]<<std::endl;
    }

    std::cout<<C.Centre.X<<" | "<<C.Centre.Y<<" | "<<C.Radius<<std::endl;
}

bool CircleCompare(Circle& C1, Circle& C2)
{
    if (C1.Radius > C2.Radius) return true;
    else return false;
}

Circle CircleAdd(Circle& C1, Circle& C2)
{
    Circle CircleSum(C1.Centre.X,C1.Centre.Y,C1.Radius+C2.Radius);
    return CircleSum;
}

Circle::Circle(double X, double Y, double R):Centre(X,Y)
{
    Radius = R;
}

Circle operator+(Circle& C1, Circle& C2)
{
Circle C(C1.Centre.X,C1.Centre.Y,C1.Radius+C2.Radius);
return C;
}

bool operator>(Circle& C1, Circle& C2)
{
    if (C1.Radius > C2.Radius) return true;
    else return false;
}