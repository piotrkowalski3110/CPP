#include "Tablica.h"
#include "Tablica.cpp"
#include "Tab2D.h"
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    Tablica<10> T;
    //T.Set(20, 9);
    //std::cout << T.Get(0) <<" "<< T.Get(9);
    //std::cin.get();

    /*
    T.wyswietl();
    std::cout<<std::endl;
    std::cout<<"Max = "<<T.max()<<std::endl;
    std::cout<<"Min = " <<T.min()<<std::endl;
    std::cout<<std::endl;
    T.sort();
    T.wyswietl();
     */

    cout << T[5];
}