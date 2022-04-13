#include <iostream>

class Complex
{
private:
    double Re, Im;
public:
    Complex(){}
    Complex(double InRe, double InIm):Re(InRe),Im(InIm)
    {}

    void Print()
    {
        if (Im >= 0)
        {
            std::cout<<Re<<" + "<<Im<<"i"<<std::endl;
        }
        else
        {
            std::cout<<Re<<" - "<<Im*(-1)<<"i"<<std::endl;
        }
    }

    Complex operator -()
    {
        Im = Im*(-1);
        Re = Re*(-1);
    }

    friend double Module(Complex&);
    friend Complex operator+ (const Complex&, const Complex&);
    friend Complex operator- (const Complex&, const Complex&);
    friend Complex operator* (const Complex&, const Complex&);
    friend std::ostream& operator<<(std::ostream& out, Complex& W);
    friend std::istream& operator>>(std::istream& in, Complex& W);

}; 