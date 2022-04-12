#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Rational.h"

int main() {
    Circle C1(2,3,6);
    Circle C2(-5,1,5);

    //cwiartka(C1);
    //std::cout<<std::endl<<CircleCompare(C1,C2)<<std::endl;
    //Circle C3 = CircleAdd(C1,C2);
    //Circle C4 = C1+C2;
    //cwiartka(C4);
    std::cout<<(C1>C2);

    return 0;
}
