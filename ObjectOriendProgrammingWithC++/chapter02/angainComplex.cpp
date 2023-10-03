#include<bits/stdc++.h>
using namespace std;

class Complex
{
    protected:
    int real, img;
    public:
    void setdata(int x, int y)
    {
        real = x; 
        img = y;
    }
    void Addcomp(Complex &o1, Complex &o2)
    {
        real = o1.real + o2.real;
        img = o1.img + o2.img;
    }
    void getdata(void)
    {
        cout<<"Complex Number is: "<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    // Complex c1, c2, c3;
    // c1.setdata(3, 5);
    // c1.getdata();
    // c2.setdata(4, 3);
    // c2.getdata();
    // c3.Addcomp(c1, c2);
    // c3.getdata();
    
    Complex *ptr1 = new Complex;
    Complex* ptr2 = new Complex;
    Complex* ptr3 = new Complex;
    (*ptr1).setdata(3, 5);
    (*ptr1).getdata();
    (*ptr2).setdata(5, 4);
    (*ptr2).getdata();
    (*ptr3).Addcomp(*ptr1, *ptr2);
    (*ptr3).getdata();

    

return 0;
}