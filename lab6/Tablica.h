#pragma once
#include <time.h>
#include <cstdlib>

template<int NumberOfEl> class Tablica
{
private:
    int Tab[NumberOfEl];
public:
    Tablica();
    void Set(int Element, int N);
    int Get(int N);
    int max();
    int min();
    void sort();
    void wyswietl();
    int operator[] (unsigned int Element);
    //int operator[] (unsigned int Element, unsigned int N);
};