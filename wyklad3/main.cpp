#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class zwierzeta
{
protected:
    double masa;
    int wiek;
public:
    void oddycha()
    {}
    void patrzy()
    {}
};

class ryba: public zwierzeta
{
public:
    void plywa()
    {}
};

class ssaki : public zwierzeta
{
public:
    void biega()
    {}
};

class kot : public ssaki
{
private:
    string rasa;
public:
    void poluje()
    {}

};



int main() {
    zwierzeta zwierze;
    ssaki dziobak;
    kot kotek;

    zwierzeta* zwierzak;

    zwierzak = new ssaki;

    return 0;
}
