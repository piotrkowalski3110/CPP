#include <iostream>
#include <string>
#include<cmath>
#include<vector>
#include "Tablica.h"
#include "Osoba.h"

using namespace std;

int main() {
    /*
    Osoba Marek, Janka, Karol;
    Marek.imie = "Marek";
    Marek.nazwisko = "P.";
    Janka.imie = "Janka";
    Janka.nazwisko = "K.";
    Karol.imie = "Karol";
    Karol.nazwisko = "L.";

    std::vector<Osoba> lista_osob;
    std::vector<int> moj_wektor;
    std::vector<std::vector<double>> Tab2D;

    for (int i = 0; i < 10; i++) {
        moj_wektor.push_back(i);
    }

    int rozmiar = moj_wektor.size();

    for (int i = 0; i < rozmiar; i++) {
        std::cout << moj_wektor[i]<< std::endl;
    }

    std::vector<int>::iterator it = moj_wektor.begin();

    for (it; it != moj_wektor.end(); ++it) {
        std::cout << *it << std::endl;
    }

    for (int i = 0; i < 10; i++) {
        std::vector<double> row;

        for (int j = 0; j < 20; j++) {
            row.push_back(0);
        }
        Tab2D.push_back(row);
    }


    lista_osob.push_back(Marek);
    lista_osob.push_back(Janka);
    lista_osob.push_back(Karol);

    int s = lista_osob.size();

    for (int i = 0; i < s; i++) {
        std::cout << "Imie osoby\t" << i << "\t" << lista_osob[i].imie<< std::endl;
    }

    for(std::vector<Osoba>::iterator it = lista_osob.begin(); it != lista_osob.end(); ++it) {
        std::cout << "Imie osoby \t" << (*it).imie << std::endl;
    }

    cout<< endl <<"////////////////////////////////////////";
    cout << endl << "Mod fragment kodu znajduje sie ponizej:" << endl << endl;
    cout << lista_osob.back();
    */

    Tablica<int> t1;
    t1.PushBack(15);
    t1.PushBack(16);
    t1.PushBack(128);
    //t1.Front();
    //t1.Back();

    cout<<"Przed reverse:" << endl << t1.Print()<<endl;
    t1.Reverse();
    cout<<"Po reverse:" << endl << t1.Print()<<endl;

    //t1.Front();
    //t1.Back();
    return 0;
}