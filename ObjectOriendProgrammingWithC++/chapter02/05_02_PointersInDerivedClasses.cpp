#include<bits/stdc++.h>
using namespace std;

class base
{
    int a, b;
    public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata(void)
    {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
    }
};

class derived : public base
{
    string name;
    public:
    void set(string s)
    {
        name = s;
    }
    void get(void)
    {
        cout<<"Name is: "<<name<<endl;
    }
};

int main()
{
    base *ptr = new base;
    ptr->setdata(3, 5);
    ptr->getdata();

    //cannot call properties of derived using base class pointer

    derived *ptr1 = new derived;
    ptr1->set("Rohan Singh");
    ptr1->get();
    //derived class pointer can call the methods of base class beacuse properties has been inherited

return 0;
}