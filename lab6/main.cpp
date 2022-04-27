#include "Tablica.h"
#include "Tablica.cpp"

int main()
{
    Tablica<10> T;
    T.Set(20, 9);
    std::cout << T.Get(0) <<" "<< T.Get(9);
    std::cin.get();
}