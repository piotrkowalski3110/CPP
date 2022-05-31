#include "Tab2D.h"
#include <iostream>

template<int NumberOfRows, int NumberOfCol> Tab2D<NumberOfRows,NumberOfCol >::Tab2D()
{
    srand(time(NULL));
    for(int i=0; i<NumberOfRows; i++)
    {
        for (int j=0; i<NumberOfCol; j++)
        {
            Tab[i][j] = rand()%(100-1)+1;
        }
    }
}

template<int NumberOfRows, int NumberOfCol>void Tab2D<NumberOfRows, NumberOfCol>::Set(int Element, int N)
{
    Tab[N] = Element;
}
template<int NumberOfRows, int NumberOfCol>int Tab2D<NumberOfRows, NumberOfCol>::Get(int N, int M)
{
    return Tab[N][M];
}

template<int NumberOfRows, int NumberOfCol>int Tab2D<NumberOfRows, NumberOfCol>::max()
{
    int max;

    for(int i=0; i<NumberOfRows; i++)
    {
        for(int j=0; j<NumberOfCol; j++)
        {
            if (j == 0 && i==0) max = Tab[i][j];
            else {
                if (Tab[i][j] > max) max = Tab[i][j];
            }
        }
    }
    return max;
}

template<int NumberOfRows, int NumberOfCol>int Tab2D<NumberOfRows, NumberOfCol>::min()
{
    int min;

    for(int i=0; i<NumberOfRows; i++)
    {
        for(int j=0; j<NumberOfCol; j++)
        {
            if (j == 0 && i==0) min = Tab[i][j];
            else {
                if (Tab[i][j] < min) min = Tab[i][j];
            }
        }
    }
    return min;
}

template<int NumberOfRows, int NumberOfCol>void Tab2D<NumberOfRows, NumberOfCol>::sort() {}

template<int NumberOfRows, int NumberOfCol>void Tab2D<NumberOfRows, NumberOfCol>::wyswietl()
{
    for(int i=0; i<NumberOfRows; i++)
    {
        for (int j=0; i<NumberOfCol; j++)
        {
            std::cout<<"tab["<<i<<"]["<<j<<"] = "<<Tab[i][j]<<std::endl;
        }
    }
}

