#pragma once

template<int NumberOfEl> class Tablica
{
private:
    int Tab[NumberOfEl];
public:
    Tablica();//konstruktor
    void Set(int Element, int N);
    int Get(int N);
};