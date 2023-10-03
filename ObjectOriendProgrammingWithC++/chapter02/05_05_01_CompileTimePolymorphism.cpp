#include<bits/stdc++.h>
using namespace std;

class dimension
{
    int l, b, r;
    public:
    void area(int m, int n)
    {
        l = m;
        b = n;
        cout<<l*b<<endl;
    }
    void area(int o)
    {
        r = o;
        cout<<3.14*r*r<<endl;
    }
    void area()
    {
        cout<<"This is CompileTime Polymorphism"<<endl;
    }

};


int main()
{
    dimension d;
    d.area();
    d.area(3, 9);
    d.area(5);
return 0;
}