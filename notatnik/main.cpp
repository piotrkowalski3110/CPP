#include <iostream>
#include <locale.h>
#include <fstream>
#include <string>

using namespace std;
bool open();
bool good();
int menu, wiersz, nadpdop;
string zdanie, nazwa;


void read(string name)
{
    system("cls");
    fstream plik;
    string uzytkownik = std::getenv("username");
    string sciezka = "C:/users/" + uzytkownik + "/desktop/" + name;
    plik.open(sciezka, ios::in);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            getline(plik, zdanie);
            cout << zdanie << endl;
        }
        plik.close();
    }
    else
    {
        system("cls");
        cout << "Dostep do pliku nie zostal przyzany!" << endl;
        cout << "Brak uprawnien lub plik nie istnieje!" << endl;
        cout << endl;
    }
    system("pause");
    system("cls");
}

void del(string name) {
    fstream plik;
    string uzytkownik = std::getenv("username");
    string sciezka = "C:/users/" + uzytkownik + "/desktop/" + name;
    plik.open(sciezka, ios::out | ios::trunc);
    plik.close();
    system("cls");

}

void create(string name)
{
    system("cls");
    cout << "Ile linijek tekstu ma zostac zapisanych?" << endl;
    cout << "> ";
    cin >> wiersz;
    system("cls");
    for (int i = 0; i <= wiersz; i++)
    {
        cout << "Jaki tekst ma zostac zapisany na pulpicie?" << endl;
        cout << "> ";
        getline(cin, zdanie);

        fstream plik;
        string uzytkownik = std::getenv("username");
        string sciezka = "C:/users/" + uzytkownik + "/desktop/" + name;
        plik.open(sciezka, ios::out | ios::app);

        if (plik.good() == true)
        {
            system("cls");
            plik << zdanie << endl;
        }
        else
        {
            system("cls");
            cout << "Dostep do pliku nie zostal przyznany!" << endl;
            system("pause");
            exit(0);
        }

        plik.close();
    }
}

void overwrite(string name)
{
    fstream plik;
    string uzytkownik = std::getenv("username");
    string sciezka = "C:/users/" + uzytkownik + "/desktop/" + name;
    del(name);

    system("cls");
    cout << "Ile linijek tekstu ma zostac zapisanych?" << endl;
    cout << "> ";
    cin >> wiersz;
    system("cls");
    for (int i = 0; i <= wiersz; i++)
    {
        cout << "Jaki tekst ma zostac zapisany na pulpicie?" << endl;
        cout << "> ";
        getline(cin, zdanie);
        plik.open(sciezka, ios::out | ios::app);

        if (plik.good() == true)
        {
            system("cls");
            plik << zdanie << endl;
        }
        else
        {
            system("cls");
            cout << "Dostep do pliku nie zostal przyznany!" << endl;
            system("pause");
            exit(0);
        }

        plik.close();
    }
}

int main() {
    setlocale(LC_CTYPE, "Polish");
    while(true) {
        cout << "########## NOTATNIK ##########" << endl;
        cout << endl;

        cout << "Podaj opcję menu jaką chciałbyś wybrać:" << endl;
        cout << "1. Zapis podanego tekstu do pliku" << endl;
        cout << "2. Odczyt pliku" << endl;
        cout << "3. Kasowanie zawartosci pliku" << endl;
        cout << "4. Edycja pliku (nadpisanie lub dopisanie)" << endl;
        cout << "0. WYJŚCIE" << endl;

        cout << endl << "> ";
        cin >> menu;

        switch (menu) {
            case 1:
                system("cls");
                cout<<"Podaj nazwę pliku: "<<endl;
                cin>>nazwa;
                system("cls");
                create(nazwa);
                break;

            case 2:
                system("cls");
                cout<<"Podaj nazwę pliku: "<<endl;
                cin>>nazwa;
                read(nazwa);
                break;

            case 3:
                system("cls");
                cout<<"Podaj nazwę pliku: "<<endl;
                cin>>nazwa;
                del(nazwa);
                break;

            case 4:

                system("cls");
                cout << "Podaj opcję:" << endl;
                cout << "1. Nadpisz" << endl << "2. Dopisz" << endl << "0. Wyjdź" << endl << "> ";
                cin >> nadpdop;
                switch (nadpdop)
                {
                    case 1:
                        system("cls");
                        cout<<"Podaj nazwę pliku: "<<endl;
                        cin>>nazwa;
                        system("cls");
                        overwrite(nazwa);
                        main();
                        break;

                    case 2:
                        system("cls");
                        cout<<"Podaj nazwę pliku: "<<endl;
                        cin>>nazwa;
                        system("cls");
                        create(nazwa);
                        main();
                        break;

                    case 0:
                        system("cls");
                        main();
                        break;

                    default:
                        system("cls");
                        cout << "Zła opcja!" << endl;
                        system("pause");
                        system("cls");
                        main();
                        break;
                }

            case 0:
                return 0;

            default:
                system("cls");
                cout << "BŁĘDNA WARTOŚĆ!" << endl << endl;
                system("pause");
                system("cls");
        }
    }
}