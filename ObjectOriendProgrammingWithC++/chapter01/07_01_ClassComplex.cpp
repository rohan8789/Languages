#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Complex
{

    int r, i;

public:
    Complex(int x, int y){
        r = x;
        i = y;
    }   
    Complex(Complex c, Complex d){
        r = c.r + d.r;
        i = c.i + d.i;
    }
    void displayNum()
    {
        cout << "Your Complex number is " << r << " + " << i << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 8), c2(3, 4);
    Complex c3(c1, c2);
    c1.displayNum();
    c2.displayNum();
    c3.displayNum();

    return 0;
}
