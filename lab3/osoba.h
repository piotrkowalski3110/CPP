//
// Created by piotrk on 23.03.2022.
//

#ifndef LAB3_OSOBA_H
#define LAB3_OSOBA_H

class osoba {
public:
    string imie;
    string nazwisko;


    osoba(){}
    osoba(string imie, string nazwisko):imie(imie),nazwisko(nazwisko){};

    osoba druk()
    {
        cout<<"Imie: "<<imie<<" Nazwisko: "<<nazwisko;
    }

};


#endif //LAB3_OSOBA_H
