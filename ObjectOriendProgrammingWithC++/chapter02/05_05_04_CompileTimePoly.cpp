//Overloading of Binary Operators
#include<iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int a, int b) //parameterized constructor
    {
        real = a;
        imag = b;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};
int main()
{
    //by operator overloading
    Complex c1(4, 7), c2(2, 3);
    c1.display();
    c2.display();

    Complex c3;
    c3 = c1 - c2;
    cout<<"------"<<endl;
    c3.display();


    return 0;
}
