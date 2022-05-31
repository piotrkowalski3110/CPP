#include <iostream>
#include <vector>
using namespace std;

template<typename TYP> class Stack
{
private:
    vector<TYP> Kontener;
public:
    Stack(){Kontener.reserve(10);} //wbudowana w vector funkcja reseve umożliwia ustalenie pojemności kontenera.

    void Clear(){
    }
    bool IsEmpty();
    void Push(TYP El);
    TYP TopEl();
    TYP Pop();
};

int main() {
    return 0;
}
