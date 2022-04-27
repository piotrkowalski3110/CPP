#pragma once
#include <time.h>
#include <cstdlib>

template<int NumberOfRows, int NumberOfCol> class Tab2D
{
private:
    int Tab[NumberOfRows][NumberOfCol];
public:
    Tab2D();
    void Set(int Element, int N);
    int Get(int N, int M);
    int max();
    int min();
    void sort();
    void wyswietl();
    int operator[] (unsigned int Element);
    //int operator[] (unsigned int Element, unsigned int N);
};