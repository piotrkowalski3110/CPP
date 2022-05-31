#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Rational.h"
#include "Complex.h"

int main() {
    Circle C1(2,3,6);
    Circle C2(-5,1,5);

    //cwiartka(C1);
    //std::cout<<std::endl<<CircleCompare(C1,C2)<<std::endl;
    //Circle C3 = CircleAdd(C1,C2);
    //cwiartka(C4);

    /*
    Circle C4 = C1+C2;
    std::cout<<(C1>C2)<<std::endl<<std::endl;

    Rational R1(8,5);
    std::cout<<"Rational out: "<<R1;

     */

    Complex Cmp1 (1,-3);
    Complex Cmp2 (4,-2);

    Complex CmpWyn = Cmp1*Cmp2;
    std::cout<<CmpWyn;

    -Cmp1;
    std::cout<<Cmp1;

    std::cout<<Module(Cmp1);

    return 0;
}
