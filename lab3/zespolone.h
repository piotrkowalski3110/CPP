//
// Created by piotrk on 23.03.2022.
//

#ifndef LAB3_ZESPOLONE_H
#define LAB3_ZESPOLONE_H

class zespolone {
public:
    double re, im;
    zespolone(){}
    zespolone(double re, double im):re(re),im(im){};

    zespolone dodaj(zespolone Z)
    {
        zespolone wynik;
        wynik.re = re + Z.re;
        wynik.im = im + Z.im;
        return wynik;
    }


    void wypisz()
    {
        if (im >= 0)
        {
            cout<<re<<" + "<<im<<"i"<<endl;
        }
        else
        {
            cout<<re<<" + "<<im<<"i"<<endl;
        }
    }

};


#endif //LAB3_ZESPOLONE_H
