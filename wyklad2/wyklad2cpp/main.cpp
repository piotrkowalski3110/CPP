#include <iostream>
#include <cmath>
#include "biblioteka.h"
#define _USE_MATH_DEFINES

using namespace std;

double poleiobwod(double r, double &pole, double &obwod)
{
    pole = M_PI * pow(r,2);
    obwod = M_PI * 2 * r;
}

int main() {
    double r, obwod, pole;


    cout<<"Podaj promien kola: ";
    cin >> r;
    poleiobwod(r,pole,obwod);

    cout<<"Poel kola to: "<<pole<<endl;
    cout<<"Obwod kola to: "<<obwod<<endl;

    return 0;
}
