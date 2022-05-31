#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

double Srednia(int tab[10])
{
    double avg = 0;

    for(int i=0; i<10; i++)
    {
        avg += tab[i];
    }
    avg = avg/10;
    cout<<"Srednia arytmetyczna: " << avg << endl;
}

void druk(int tab[10])
{
    for(int i=0; i<10; i++)
    {
        cout<<"tab["<<i<<"] = " << tab[i] << endl;
    }
}

double kolo(double promien)
{
    cout<<"Pole kola: "<<M_PI*pow(promien,2)<<endl;
    cout<<"Obwod kola: "<<2*M_PI*promien;
}

double pol_ob(double prom, double* pole, double* objetosc)
{
    *pole = 4 * M_PI * pow(prom,2);
    *objetosc = (4*M_PI*pow(prom,3))/3;
}

int zamiana(int& refl1, int& refl2)
{
    int help;
    help = refl1;
    refl1 = refl2;
    refl2 = help;
    help = 0;
}

int sort(int& refA, int& refB, int& refC)
{
    int tab[3] = {refA, refB, refC};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                swap(tab[j], tab[j + 1]);
            }
        }
    }
    refA = tab[0];
    refB = tab[1];
    refC = tab[2];
}

int mod_tablica(int i[10], int skalar)
{
    cout<<"Losowana tablica:"<<endl;
    for(int j = 0; j<10; j++)
    {
        *(i+j)= rand()%(100-1+1)+1;
        cout<<"tablica["<<j<<"] = "<<*(i+j)<<endl;
    }

    cout<<endl;
    cout<<"Mnozenie przez zadany skalar:"<<endl;
    for(int j = 0; j<10; j++)
    {
        *(i+j)= *(i+j) * skalar;
        cout<<"tablica["<<j<<"] = "<<*(i+j)<<endl;
    }

    cout<<endl;
    cout<<"Potegowanie tablicy:"<<endl;
    for(int j = 0; j<10; j++)
    {
        *(i+j)= pow(*(i+j),2);
        cout<<"tablica["<<j<<"] = "<<*(i+j)<<endl;
    }
}

int jedynkiizera(int tab[5][5])
{
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            if(j==i)
            {
                tab[i][j] = 1;
            }
            else
            {
                tab[i][j] = 0;
            }
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

double fRand(double fMin, double fMax)

{

    double f = (double)rand() / RAND_MAX;

    return fMin + f * (fMax - fMin);

}


int main()
{
    srand(time(NULL));
    ///////////zad1
    /*
    int tab[10];

    for(int i=0; i<10; i++)
    {
        tab[i] = rand()%51;
    }

    druk(tab);
    Srednia(tab);
     */

    ///////////zad2
    /*
    double r;
    cout<<"Podaj promien kola: ";
    cin >> r;
    kolo(r);
    */

    ///////////zad3
    /*
    double prom=0 , obj = 0, pole = 0;
    double *wsk_obj = &obj;
    double *wsk_pole = &pole;
    cout<<"Podaj promien: ";
    cin>>prom;
    pol_ob(prom, wsk_pole, wsk_obj);
    cout<<"Pole kuli wynosi: "<<pole<<" a objetosc wynosi: "<<obj<<endl;
     */

    ///////////zad4
    /*
    int l1, l2;
    cout<<"Podaj l1: ";
    cin >> l1;
    cout<<"Podaj l2: ";
    cin >> l2;
    zamiana(l1,l2);
    cout<<"Po zamianie: l1="<<l1<<" i l2="<<l2;
     */

    ///////////zad5
    /*
    int A,B,C;
    cout<<"Podaj A: ";
    cin>>A;
    cout<<"Podaj B: ";
    cin>>B;
    cout<<"Podaj C: ";
    cin>>C;
    sort(A,B,C);
    cout<<"Posortowane: "<<A<<" "<<B<<" "<<C;
     */

    ///////////zad6
    /*
    int tablica[10] = {0,0,0,0,0,0,0,0,0,0};
    int skalar;
    cout<<"Podaj skalar: ";
    cin >> skalar;
    mod_tablica(tablica, skalar);
    */

    ///////////zad7
    /*
    int tab[5][5];
    jedynkiizera(tab);
    */

    ///////////zad8
    double **tablica;
    int min, max;
    int w, k;
    cout << "podaj pierwszy wymiar tablicy: ";
    cin >> w;
    cout << "podaj drugi wymiar tablicy: ";
    cin >> k;

    cout<<"Podaj min: ";
    cin >> min;
    cout<<"Podaj max";
    cin >> max;


    tablica = new double*[w];
    for (int i = 0; i < w; i++)   tablica[i] = new double[k];

    for (int i = 0; i<w; i++)
    {
        for (int j = 0; j<k; j++)
        {
            tablica[i][j] = fRand(min,max);
        }
    }

    cout<<endl;

    for (int i = 0; i<w; i++)
    {
        for (int j = 0; j<k; j++)
        {
            cout << "tablica["<<i<<"]["<<j<<"] = "<<tablica[i][j]<<endl;
        }
    }
    cout << endl;
    for (int i = 0; i < w; i++)
    {
        delete[] tablica[i];
    }
    delete[] tablica;

return 0;
}