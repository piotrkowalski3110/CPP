#include <iostream>
#include <list>
#include <string>
#include <cctype>

using namespace std;

class AgregatA {

public:
    int liczba;
    char znak;

    void print() {
        cout << "AgregatA: " << endl << "liczbaA = " << liczba << endl << "znakA = " << znak << endl;
    }
};

struct AgregatB {

    AgregatA obiektA;
    double liczbaB;

    void print() {
        cout << "AgregatB: " << endl << "liczbaB = " << liczbaB << endl;
        obiektA.print();
    }
};

class pracownik {
public:
    string imie;
    string nazwisko;
    int pesel;
    int wiek;
    string stanowisko;

    void druk() {
        cout << imie << " " << nazwisko << endl;
        cout << "PESEL: " << pesel << endl;
        cout << "Wiek: " << wiek << " lat" << endl;
        cout << "Stanowisko: " << stanowisko << endl << endl;
    }

    friend ostream &operator<<(ostream &out, const pracownik &p) {
        out << p.imie << " " << p.nazwisko << endl << "PESEL: " << p.pesel << endl << "Wiek: " << p.wiek << " lat"
            << endl << "Stanowisko: " << p.stanowisko << endl << endl;
        return out;
    }
};

class Osoba {
public:
    string imie;
    string nazwisko;
    int wiek;

    friend ostream &operator<<(ostream &out, const Osoba &p) {
        out << p.imie << " " << p.nazwisko << endl << "Wiek: " << p.wiek << " lat" << endl << endl;
        return out;
    }

    friend bool operator<(Osoba &o1, Osoba &o2) {
        unsigned int i = 0;
        while ((i < o1.imie.length()) && (i < o2.imie.length())) {
            if (tolower(o1.imie[i]) < tolower(o2.imie[i])) return true;
            else if (tolower(o1.imie[i]) > tolower(o2.imie[i])) return false;
            ++i;
        }
        return (o1.imie.length() < o2.imie.length());
    }
};


template<typename TYP>
class ListaTab {
    TYP T[5];
    int Last;
public:
    ListaTab() { Last = -1; }

    int End();

    int First();

    int Next(int P);

    int Previous(int P);

    int Locate(TYP X);

    TYP Retrieve(int P);

    bool Insert(TYP X, int P);

    bool Delete(int P);

    void print();
};

template<typename TYP>
int ListaTab<TYP>::End() {
    return Last + 1;
}

template<typename TYP>
int ListaTab<TYP>::First() {
    return 0;
}

template<typename TYP>
int ListaTab<TYP>::Next(int P) {
    if (P < End()) {
        return P + 1;
    } else cout << "Podany indeks jest poza zakresem listy." << endl;
    return NULL;
}

template<typename TYP>
int ListaTab<TYP>::Previous(int P) {
    if ((P <= First()) || (P > End())) {
        cout << "Podany indeks jest poza zakresem listy." << endl;
        return NULL;
    } else return P - 1;
}

template<typename TYP>
int ListaTab<TYP>::Locate(TYP X) {
    for (int i = 0; i < End(); i++)
        if (T[i] == X)return i;
    return End();
}

template<typename TYP>
TYP ListaTab<TYP>::Retrieve(int P) {
    if (P >= First() && P <= End()) {
        return T[P];
    } else return T[0];
}

template<typename TYP>
bool ListaTab<TYP>::Insert(TYP X, int P) {
    if ((P < First()) || (P > End()))
        return false;
    if (P == End()) {
        T[P] = X;
        Last = Last + 1;
        return true;
    }
    if (P < End()) {
        for (int k = End(); k > P; k--) {
            T[k] = T[k - 1];
        }
        T[P] = X;
        Last = Last + 1;
        return true;
    }
    return false;
}

template<typename TYP>
bool ListaTab<TYP>::Delete(int P) {
    while (P < End() - 1) {
        T[P] = T[P + 1];
        P++;
    }
    Last--;
    return false;
}

template<typename TYP>
void ListaTab<TYP>::print() {
    int i = First();
    while (i != End()) {
        cout << Retrieve(i) << " ";
        i = Next(i);
    }
    cout << endl;
}


int main() {
    list<Osoba> STLOs;
    list<Osoba>::iterator it;

    //AgregatB obiektB = {{11, 'a'}, 22};
    //obiektB.print();

    pracownik Piotr = {"Piotr", "Kowalski", 123456789, 21, "Kierowca"};
    pracownik Borys = {"Borys", "Siarek", 987654321, 22, "Logistyk"};
    pracownik Maciej = {"Maciej", "Zieliński", 1234098765, 23, "Manager"};
    cout << Piotr << Borys << Maciej;

    Osoba Pi = {Piotr.imie, Piotr.nazwisko, Piotr.wiek};
    Osoba Bor = {Borys.imie, Borys.nazwisko, Borys.wiek};
    Osoba Mac = {Maciej.imie, Maciej.nazwisko, Maciej.wiek};

    ListaTab<Osoba> L1;
    L1.Insert(Pi, 0);
    L1.Insert(Bor, 1);
    L1.Insert(Mac, 2);

//    ListaTab<pracownik>L2;
//    L2.Insert(Piotr,0);
//    L2.Insert(Borys,1);
//    L2.Insert(Maciej,2);

    cout << endl << "###################################################" << endl;
    cout << endl << "AFTER INSERT TO TABLE:" << endl << endl;
    cout << "###################################################" << endl << endl;

    L1.print();

    STLOs.push_back(Pi);
    STLOs.push_back(Bor);
    STLOs.push_back(Mac);


    cout << "###################################################" << endl << endl;
    std::cout << "Nieposortowana lista:" << endl << endl;
    cout << "###################################################" << endl << endl;
    for (it = STLOs.begin(); it != STLOs.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    STLOs.sort();

    cout << "###################################################" << endl << endl;
    std::cout << "Posortowana lista:" << endl << endl;
    cout << "###################################################" << endl << endl;
    for (it = STLOs.begin(); it != STLOs.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
}