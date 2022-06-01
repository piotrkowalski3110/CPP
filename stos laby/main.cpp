#include<iostream>
#include<cstdlib>
#include <vector>

#define MAX 100
int i = 0;
using namespace std;

template<typename TYP>
class Stack {
private:
    vector<TYP> Kontener;
public:
    Stack() { Kontener.reserve(100); }


    void Clear() {
        Kontener.clear();
    }

    bool IsEmpty() {
        return Kontener.empty();
    }

    void Push(TYP El) {
        Kontener.push_back(El);
    }

    TYP TopEl() {
        return Kontener.back();
    }

    TYP Pop();

};


int main() {

    Stack<int> stos1;

    cout << stos1.IsEmpty() << endl;
    stos1.Push(5);
    stos1.Push(4);
    cout << stos1.IsEmpty() << endl;
    cout << stos1.TopEl() << endl;

    return 0;

}