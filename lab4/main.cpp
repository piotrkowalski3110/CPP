#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    Polygon p1(4,1,2);
    cout<<p1.Perimeter()<<endl;

    Triangle t1(1,2,4);
    cout<<t1.Perimeter()<<endl;
    return 0;
}
