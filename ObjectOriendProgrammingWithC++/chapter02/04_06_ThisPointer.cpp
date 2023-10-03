#include<bits/stdc++.h>
using namespace std;

class point
{
    int a;
    public:
    void set(int x)
    {
        this->a = x;
    }
    void get(void)
    {
        cout<<"Value is: "<<a<<endl;
    }
};

int main()
{
    point pt;
    pt.set(10);
    pt.get();
    pt.set(30);
    pt.get();
    //Will Give Garbage value if we dont use This pointer.

return 0;
}