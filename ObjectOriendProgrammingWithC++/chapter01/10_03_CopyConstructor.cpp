//copy constructor syntax
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(Complex *c)//copy Constructor
    {
        cout<<c->a<<" "<<c->b<<endl;
        a = c->a;
        b = c->b;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1(2, 3);
    Complex c4(&c1);
    return 0;
}
