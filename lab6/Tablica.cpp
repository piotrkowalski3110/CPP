#include "Tablica.h"
#include <iostream>

template<int NumberOfEl> Tablica<NumberOfEl>::Tablica()
{
    for (int i = 0; i < NumberOfEl; i++)
        Tab[i] = 0;
}
template<int NumberOfEl> void Tablica<NumberOfEl>::
Set(int Element, int N)
{
    Tab[N] = Element;
}
template<int NumberOfEl> int Tablica<NumberOfEl>::
Get(int N) {
    return Tab[N];
}
