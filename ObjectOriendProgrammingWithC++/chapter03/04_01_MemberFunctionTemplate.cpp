#include<bits/stdc++.h>
using namespace std;

template<class t>
class Default
{
    public:
    t data;
    Default(t x)
    {
        data =x;
    }
    void display();
};

template<class t>
void Default<t>:: display()
    {
        cout<<data<<endl;
    }

int main()
{
    Default<double>d1(12.34);
    cout<<d1.data<<endl;
    Default<int>d2(88);
    d2.display();
return 0;
}