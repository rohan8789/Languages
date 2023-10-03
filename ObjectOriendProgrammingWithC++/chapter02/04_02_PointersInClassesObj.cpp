#include<bits/stdc++.h>
using namespace std;

class Complex
{
    protected:
    int real, img;
    public:
    Complex(){}
    Complex(int a, int b){real = a; img =b;}
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void getData(void)
    {
        cout<<"Complex is: "<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    /*
    //By Pointers
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(1, 1);
    (*ptr).getData();
    */
    /*
    //by dynamic memory allocation
    Complex* ptr = new Complex; //we can pass value as constructor in Complex(3, 4)
    (*ptr).setData(3, 7);
    (*ptr).getData();
    //ARROW OPERATOR
    ptr->setData(3, 5);
    ptr->getData();
    */


    //Array of Objects
    Complex* ptr = new Complex[5];
    (*ptr).setData(3, 7);
    (*ptr).getData();
    (ptr[1]).setData(4, 8);
    (ptr[1]).getData();
    (ptr[2]).setData(1, 3);
    (ptr[2]).getData();
    (&ptr[3])->setData(5, 9);
    (&ptr[3])->getData();
    ptr->setData(3, 7);
    ptr->getData();


return 0;
}


//Normal
// Complex c1;
// c1.setData(12, 13);
// c1.getData();