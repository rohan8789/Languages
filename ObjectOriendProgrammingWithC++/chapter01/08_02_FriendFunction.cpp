//Add complex numbers using friend function
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int r, i;
    public:
    void setdata(int x, int y)
    {
        r = x;
        i = y;
    }
    friend Complex setBySum(Complex o1, Complex o2);

    void Display()
    {
        cout<<"Complex number is "<<r<<"+"<<i<<"i"<<endl;
    }
};

Complex setBySum(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.r + o2.r), (o1.i + o2.i));
    // r = o1.r + o2.r;
    // i = o1.i + o2.i;
    return o3;
}

int main(int argc, char const *argv[])
{
    Complex c1, c2, c3;
    c1.setdata(4, 6);
    c1.Display();

    c2.setdata(4, 3);
    c2.Display();
    
    c3 = setBySum(c1, c2);
    c3.Display();
    

    
    return 0;
}
