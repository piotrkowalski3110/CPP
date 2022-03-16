//
// Created by piotrk on 16.03.2022.
//

#ifndef LAB3_TABDYN_H
#define LAB3_TABDYN_H


class tabdyn {
    public:
        int *tab;
        int rozm;

        void setelement()
        {
            int set;
            for(int i=0; i<rozm; i++)
            {
                cin>>set;
                tab[i] = set;
            }
        }

        void getelement(int idx)
        {
            cout<<idx<<". element tablicy to: "<<tab[idx]<<endl;
        }

        int sum()
        {
            int suma = 0;

            for(int i=0; i<rozm; i++)
            {
                suma+=tab[i];
            }
            return suma;
        }

        int mean()
        {
            int srednia = 0;
            for(int i=0; i<rozm; i++)
            {
                srednia+=tab[i];
            }
            return srednia/rozm;
        }

};


#endif //LAB3_TABDYN_H
