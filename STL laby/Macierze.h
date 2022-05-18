//
// Created by piotrk on 18.05.22.
//

#ifndef STL_LABY_MACIERZE_H
#define STL_LABY_MACIERZE_H

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <time.h>
#include <iomanip>

using namespace std;


class Macierze {
public:

    vector<vector<int>> vec_dwuwym;

    Macierze(int a = 5, int b = 5) {

        srand(time(NULL));

        for (int i = 0; i < a; i++) {
            vector<int> tab;
            for (int j = 0; j < b; j++) {
                tab.push_back(rand() % (50 - 1) + 1);
            }
            vec_dwuwym.push_back(tab);
        }
    }

    void wyswietlMacierz() {
        for (int i = 0; i < vec_dwuwym.size(); i++) {
            for (int j = 0; j < vec_dwuwym[i].size(); j++) {
                cout << setw(2) << setfill('0');
                cout << vec_dwuwym[i][j] << " ";
            }
            cout<<endl;
        }
    }

};


#endif //STL_LABY_MACIERZE_H
