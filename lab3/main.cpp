#include <iostream>
#include <time.h>
#include "punkt.h"
#include "tablice.h"
#include "tabdyn.h"


int main() {
    srand(time(NULL));
    /*
    int x,y;
    int przesx, przesy;
    Punkt P1;

    cout<<"Podaj X: "<<endl<<"> ";
    cin >> x;
    cout<<"Podaj Y: "<<endl<<"> ";
    cin >> y;
    cout<<endl;

    P1.set(x,y);
    P1.get();

    cout<<endl<<"O ile chcesz przesunac X: "<<endl<<"> ";
    cin >> przesx;
    cout<<"O ile chcesz przesunac Y: "<<endl<<"> ";
    cin >> przesy;
    P1.przesuniecie(przesx,przesy);
    P1.get();
    */

    /*
    tablice tab1;
    tablice tab2;
    for(int i=0; i<10; i++) tab1.Tab1D[i]=rand()%51;
    for(int i=0; i<10; i++) cout<<"tab["<<i<<"] = "<<tab1.Tab1D[i]<<endl;

    cout<<tab1.suma()<<endl;
    cout<<"MAX: "<<tab1.max()<<endl;
    cout<<"MIN: "<<tab1.min()<<endl;

    for(int i=0; i<10; i++) tab2.Tab1D[i]=rand()%51;
    for(int i=0; i<10; i++) cout<<"tab["<<i<<"] = "<<tab2.Tab1D[i]<<endl;

    cout<<tab2.suma()<<endl;
    cout<<"MAX: "<<tab2.max()<<endl;
    cout<<"MIN: "<<tab2.min()<<endl;
     */

    tabdyn tab1;
    int n = 5;
    tab1.rozm=n;
    tab1.tab = new int [tab1.rozm];
    tab1.setelement();
    tab1.getelement(2);
    cout<<endl;
    cout<<tab1.sum()<<endl;
    cout<<tab1.mean()<<endl;


    delete [] tab1.tab;
    return 0;
}
