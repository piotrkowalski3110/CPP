#include <iostream>
#include <fstream>
#include <queue>
#include <time.h>
#include <string>
#include <string.h>

using namespace std;

template<class T, int n>
class ArrayQueue {
public:
    T Storage[n];
    int First, Last;

    ArrayQueue() { First = Last = -1; }

    bool isEmpty() {
        if (First == -1) return true;
        else return false;
    }

    bool isFull() {
        if ((First == 0 && Last == n - 1) || Last == First - 1) return true;
        else return false;
    }

    void enqueue(T el);
    T dequeue();

};

template<typename T, int n>
void ArrayQueue<T, n>::enqueue(T el) {
    if (!isFull()) {
        if (Last == n - 1 || Last == -1) {
            Storage[0] = el;
            Last = 0;
            if (First == -1) {
                First = 0;
            }
        } else Storage[++Last] = el;
    } else
        cout << "Kolejka jest pełna!" << endl;
}

template<typename T, int n>
T ArrayQueue<T, n>::dequeue() {
    if (!isEmpty()) {
        T temp = Storage[First];
        if (First == Last) {
            First = Last = -1;
        } else {
            if (First == n - 1 && Last == 0) {
                First = Last = 0;
            } else if (First == n - 1 && Last != 0) {
                First = 0;
            } else {
                First++;
            }
        }
        return temp;
    }
    return NULL;
}

queue <string> kolejka;


int main() {
//    srand(time(NULL));
//    ArrayQueue<int, 5> A;
//
//    cout << "Full Before: " << A.isFull() << endl;
//    cout << "Empty Before: " << A.isEmpty() << endl << endl;
//
//    for(int i=0; i<5; i++){
//        A.enqueue(rand()%(10-1)+1);
//        cout << A.Storage[i] << endl;
//    }
//
//    cout << endl << "Full After: " << A.isFull() << endl;
//    cout << "Empty After: " << A.isEmpty() << endl << endl;
//
//    cout << A.dequeue();
//
//    cout << endl<< endl << "Full After: " << A.isFull() << endl;
//    cout << "Empty After: " << A.isEmpty() << endl << endl;

    ArrayQueue<string, 5> S;
    string tekst;
    int i=0;

    while(getline(cin,tekst)){
        if(i<=4){
            S.enqueue(tekst);
        }
        else{
            ofstream zapis("dane.txt");
            zapis << S.dequeue();
            zapis.close();
            zapis.open("dane.txt", ios_base::app);
        }
    }
    return 0;
}
