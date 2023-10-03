//Function Prototype should should be exactly same for function overriding
//virtual function is used to make successful compilation of RunTime Polymorphism


#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    int x;
    virtual void display(int m)
    {
        x = m;
        cout<<"Value of x is: "<<x<<endl;
    }    
};

class derived : public base
{
    public:
    int a;
    void display(int r)
    {
        a = r;
        cout<<"Value of a is: "<<a<<endl;
    }
};

int main()
{
    base b;
    base *ptr;
    ptr = &b;
    ptr->display(5);

    derived d;
    ptr = &d;//after applying virtual in base class, base class ptr can call derived class method 
    ptr->display(8);
    
return 0;
}