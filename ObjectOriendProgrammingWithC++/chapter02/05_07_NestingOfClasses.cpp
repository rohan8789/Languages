#include<bits/stdc++.h>
using namespace std;

class dimension
{
    float p;
    int q;
    public:
    void cube(double x)
    {
        p = x;
        cout<<"cube of an integer: "<<x*x*x<<endl;
    }  

    void cube(int a)
    {
        q = a;
        cout<<"Cube of floating point value is: "<<a*a*a<<endl;
    }
};

int main()
{
    dimension d1, d2;
    d1.cube(8.812);
    d2.cube(8);


return 0;
}