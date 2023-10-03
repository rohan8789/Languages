#include<bits/stdc++.h>
using namespace std;

class cement
{
    protected:
    int pcbag = 150;
    int num = 500;
    public:
    void fun1(){
        cout<<"Cost of Required cement bags: "<<pcbag*num<<endl;
    }
};

class steel
{
    protected:
    int steelpri=28000;
    public:
    void fun2(){
        int x=3*steelpri;
        cout<<"Cost of 3 Tons of steel is: "<<x<<endl;
    }
};

class wood
{
    protected:
    int woodCost=1500;
    public:
    void fun3(){
        cout<<"Cost of 3 Cubic foot Wood is: "<<3*woodCost<<endl;
    }
};

class derived : public cement, public steel, public wood
{
    public:
    void Display(){
        fun1();
        fun2();
        fun3();

        cout<<"Cost of building a house is: "<<pcbag*num + 3*steelpri + 3*woodCost<<endl;
    }
};

int main()
{
    derived d1;
    cout<<endl<<endl;
    d1.Display();
    cout<<endl<<endl;

return 0;
}