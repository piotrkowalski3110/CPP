//
// Created by piotrk on 16.03.2022.
//

#ifndef LAB3_PUNKT_H
#define LAB3_PUNKT_H
using namespace std;
class Punkt
{
private:
    int x, y;
public:
    int get()
    {
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
    }
    int set(int osx, int osy)
    {
        this->x=osx;
        this->y=osy;
        y=osy;
        x=osx;
    }
    int przesuniecie(int n, int m)
    {
        x+=n;
        y+=m;
    }

};

#endif //LAB3_PUNKT_H
