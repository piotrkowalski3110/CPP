#pragma once

#include <iostream>
#include <algorithm>
#include <cstring>

template<typename TYP>
class Tablica {
private:
    TYP *Tab;
    unsigned Size;

public:
    Tablica() {
        this->Size = 0;
        Tab=new TYP[Size];
    }

    void PushBack(TYP Element) {
        TYP *newbuf = new TYP[Size + 1];
        memcpy(newbuf, Tab, sizeof(newbuf));
        delete[] Tab;
        Tab = newbuf;
        Tab[Size] = Element;
        Size++;
    }

    TYP Get(unsigned N) {
        std::cout << Tab[N];
    }

    ~Tablica() {
        delete[] Tab;
    }

    TYP &operator[](unsigned N) {
        return Tab[N];
    }

    TYP Front() {
        std::cout << Tab[0] << std::endl;
    }

    TYP Back() {
        std::cout << Tab[Size - 1] << std::endl;
    }

    TYP Reverse() {
        TYP *newbuf = new TYP[Size];
        for(int i=0; i<Size; i++)
        {
            newbuf[i] = Tab[Size-i-1];
        }
        delete[] Tab;
        Tab = newbuf;
    }

    TYP Print(){
        for(int i=0; i<Size; i++)
        {
            std::cout<<Tab[i]<<std::endl;
        }
    }

}; 