//
// Created by piotrk on 16.03.2022.
//

#ifndef LAB3_TABDYN_H
#define LAB3_TABDYN_H


class tabdyn {
    public:
        int *tab;
        int rozm;

        void setelement(int set)
        {
         int* Tn;
         Tn = new int [rozm + 1];
        memcpy(Tn, tab, rozm * sizeof(int)); //zamiennie z forem na dole

        /*
         for(int i=0; i<rozm; i++)
         {
          Tn[i] = tab[i];
         }
         */

         delete [] tab;

         tab = Tn;
         rozm = rozm+1;
         tab[rozm-1] = set;
        }

        void getelement()
        {
            int idx;
            cout<<"Podaj element do wypisania: ";
            cin>> idx;
            cout<<idx<<". element tablicy to: "<<tab[idx-1]<<endl;
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

        double mean()
        {
            double srednia = 0;
            for(int i=0; i<rozm; i++)
            {
                srednia+=tab[i];
            }
            return srednia/rozm;
        }

};


#endif //LAB3_TABDYN_H
