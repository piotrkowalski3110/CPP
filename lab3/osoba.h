//
// Created by piotrk on 23.03.2022.
//

#ifndef LAB3_OSOBA_H
#define LAB3_OSOBA_H

class osoba {
public:
    string imie;
    string nazwisko;

    osoba(string name, string surname):imie(name),nazwisko(surname){};
    /*
    osoba(string name, string surname)
    {imie=name;nazwisko=surname;}
     */

    void druk()
    {
        cout<<"Imie: "<<imie<<" Nazwisko: "<<nazwisko<<endl;
    }

};


#endif //LAB3_OSOBA_H
