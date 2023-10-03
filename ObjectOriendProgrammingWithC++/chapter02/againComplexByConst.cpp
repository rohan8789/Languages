#include<bits/stdc++.h>
using namespace std;

class Complex
{
    protected:
    int real, img;
    public:
    Complex(int x, int y)
    {
        real = x; 
        img = y;
        cout<<"Const_1 called"<<endl;
    }
    Complex(Complex o1, Complex o2)
    {
        real = o1.real + o2.real;
        img = o1.img + o2.img;
        cout<<"COnst_2 called"<<endl;
        cout<<endl;
    }
    ~Complex(){
        cout<<"Destructor Called"<<endl;
    }

    void display(void)
    {
        cout<<"Complex number is: "<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    // Complex c1(2, 4), c2(3, 4);
    // c1.display();
    // c2.display();
    // Complex c3(c1, c2);
    // c3.display();

    Complex* ptr1 = new Complex(3, 4);
    (*ptr1).display();
    Complex* ptr2 = new Complex(4, 5);
    (*ptr2).display();
    Complex *ptr3 = new Complex(*(ptr1), *(ptr2));
    (*ptr3).display();
return 0;
}