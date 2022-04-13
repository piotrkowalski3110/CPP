#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdint>
#include <cstring>
#include <string.h>
#include <string>
#include "punkt.h"
#include "tablice.h"
#include "tabdyn.h"
#include "zespolone.h"
#include "osoba.h"
#include "student.h"

zespolone odejmowanie(zespolone Z1, zespolone Z2)
{
    zespolone wynik;
    wynik.re = Z1.re - Z2.re;
    wynik.im = Z1.im - Z2.im;
    return wynik;
}

zespolone dzielenie(zespolone Z1, zespolone Z2)
{
    zespolone wynik;
    double warunek;

    warunek = (Z2.re * Z2.re) + (Z2.im * Z2.im);

    if(warunek > 0)
    {
        wynik.re = ((Z1.re * Z2.re) + (Z1.im * Z2.im))/warunek;
        wynik.im = ((Z2.re * Z1.im) - (Z1.re * Z2.im))/warunek;

        return wynik;
    }
    else
    {
        printf("BLAD W DZIELENIU!");
    }
    return wynik;
}


int main() {
    //srand(time(NULL));
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

    /*
    tabdyn tab1;
    int set;
    tab1.rozm=1;
    tab1.tab = new int [tab1.rozm];
    for(int i=0; i<tab1.rozm; i++)
    {
        tab1.tab[i] = rand()%10;
    }
    cout<<"Podaj element: ";
    cin >> set;
    tab1.setelement(set);
    tab1.getelement();
    cout<<"Podaj element: ";
    cin >> set;
    tab1.setelement(set);
    tab1.getelement();
    cout<<endl;
    cout<<"Suma: "<<tab1.sum()<<endl;
    cout<<"Srednia: "<<tab1.mean()<<endl;


    delete [] tab1.tab;
    */

    zespolone Z1(1,2);
    zespolone Z2(3,4);

    zespolone(Z1.dodaj(Z2)).wypisz();
    zespolone(odejmowanie(Z1,Z2)).wypisz();
    zespolone(Z1.pomnoz(Z2)).wypisz();
    zespolone(dzielenie(Z1,Z2)).wypisz();

/*
    osoba os1("Piotr","Kowalski");
    os1.druk();


    student st1("piotr","kk", 21);
    int zdane = st1.czyzdal();
    cout<<endl;
    if(zdane==true) cout<<"Zdane!"<<endl;
    else cout<<"Oblane!"<<endl;
*/

    return 0;
}
