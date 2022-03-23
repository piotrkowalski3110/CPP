//
// Created by piotrk on 21.03.2022.
//

#ifndef LAB3_ZESPOLONE_H
#define LAB3_ZESPOLONE_H

class zespolone {
    public:
        int re=0;
        int im=0;

        int dodawanie(int r1, int i1, int r2, int i2)
        {
            int red = r1+r2;
            int imd = i1+i2;

            cout<<red<<" + "<<imd<<"i";
        }

        int odejmowanie(int r1, int i1, int r2, int i2)
        {
            int reo= r1-r2;
            int imo = i1-i2;

            if(imo<0) cout<<reo<<" - "<<(imo)*(-1)<<"i";
            if(imo>0) cout<<reo<<" + "<<imo<<"i";

        }

        int mnozenie(int r1, int i1, int r2, int i2)
        {

        }

        int dzielenie()
        {

        }
};


#endif //LAB3_ZESPOLONE_H
