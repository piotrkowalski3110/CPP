//
// Created by piotrk on 23.03.2022.
//

#ifndef LAB3_OSOBA_H
#define LAB3_OSOBA_H

class osoba {
public:
    char imie;
    char nazwisko;

    osoba(char name, char surname):imie(name),nazwisko(surname){};

    osoba druk()
    {
        cout<<"Imie: "<<imie<<" Nazwisko: "<<nazwisko<<endl;
    }

};


#endif //LAB3_OSOBA_H
