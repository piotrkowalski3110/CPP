#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void WpiszLosowe(int arr[6])
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++) arr[i] = rand() % (100 - 1) + 1;
}

void Druk(int arr[6])
{
    for (int i = 0; i < 6; i++) cout << "Arr [" << i << "] = " << arr[i] << endl;
}

int main() {
    int Arrau[6];
    WpiszLosowe(Arrau);
    Druk(Arrau);
    return 0;
}
