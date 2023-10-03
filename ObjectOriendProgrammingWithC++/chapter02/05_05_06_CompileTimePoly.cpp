#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int x, int y){
        real=x;
        imag=y;
    }
    Complex(){}

    Complex operator - (Complex c2)
    {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }

    void output()
    {
        cout<<"Complex number is: "<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1(5, 4);
    c1.output();
    Complex c2(4, 7);
    c2.output();
    Complex c = c1 - c2;
    c.output();
    return 0;
}