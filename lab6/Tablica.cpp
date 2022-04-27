#include "Tablica.h"
#include <iostream>

template<int NumberOfEl> Tablica<NumberOfEl>::Tablica()
{
    srand(time(NULL));
    for (int i = 0; i < NumberOfEl; i++)
        Tab[i] = rand()%(100-1)+1;
}

template<int NumberOfEl> void Tablica<NumberOfEl>::Set(int Element, int N)
{
    Tab[N] = Element;
}
template
        <int NumberOfEl> int Tablica<NumberOfEl>::Get(int N)
{
    return Tab[N];
}

template<int NumberOfEl> int Tablica<NumberOfEl>::max()
{
    int max;

    for(int i=0; i<NumberOfEl; i++)
    {
        if(i==0) max=Tab[i];
        else
        {
            if(Tab[i] > max) max=Tab[i];
        }
    }
    return max;
}

template<int NumberOfEl> int Tablica<NumberOfEl>::min()
{
    int min;

    for(int i=0; i<NumberOfEl; i++)
    {
        if(i==0) min=Tab[i];
        else
        {
            if(Tab[i] < min) min=Tab[i];
        }
    }
    return min;
}

template<int NumberOfEl> void Tablica<NumberOfEl>::sort()
{
    for( int i = 0; i < NumberOfEl; i++ )
    {
        for( int j = 0; j < NumberOfEl - 1; j++ )
        {
            if(Tab[j] > Tab[j+1]) std::swap(Tab[j], Tab[j+1]);
        }
    }
}

template<int NumberOfEl> void Tablica<NumberOfEl>::wyswietl()
{
    for(int i=0; i<NumberOfEl; i++)
    {
        std::cout<<"tab["<<i<<"] = "<<Tab[i]<<std::endl;
    }
}

template<int NumberOfEl> int Tablica<NumberOfEl>::operator[](unsigned int Element){
    return Tab[Element];
}

/*
template<int NumberOfEl> int Tablica<NumberOfEl>::operator[](unsigned int Element, unsigned int N) {
    Tab[Element] = N;
}
*/
