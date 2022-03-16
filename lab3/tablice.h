//
// Created by piotrk on 16.03.2022.
//

#ifndef LAB3_TABLICE_H
#define LAB3_TABLICE_H


class tablice {
    public:
        int Tab1D[10];
        int sum = 0, minn = 0, maxx = 0;

        int suma()
        {
            this->sum = sum;
            for(int i=0; i<10; i++)
            {
                sum = sum + Tab1D[i];
            }
            return sum;
        }

        int max()
        {
            maxx=0;
            this->maxx = maxx;
            for(int i=0; i<10; i++)
            {
                if(i == 0)
                {
                    maxx=Tab1D[i];
                }
                else
                {
                    if(Tab1D[i] > maxx)
                    {
                        maxx = Tab1D[i];
                    }
                }

            }
            return maxx;
        }

        int min()
        {
            minn=0;
            this->minn = minn;
            for(int i=0; i<10; i++)
            {
                if(i == 0)
                {
                    minn = Tab1D[i];
                }
                else
                {
                    if(Tab1D[i] < minn)
                    {
                        minn = Tab1D[i];
                    }
                }

            }
            return minn;
        }

};


#endif //LAB3_TABLICE_H
