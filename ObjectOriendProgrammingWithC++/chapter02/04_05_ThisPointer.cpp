#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
    public:
    A& setdata(int a)
    {
        this->a = a+5;
        return *this;
    }
    void getdata(void)
    {
        cout<<"The value of a is: "<<a<<endl;
    }
};

int main()
{
    A a;
    a.setdata(40).getdata();

return 0;
}

//we were using this pointer implicitly, here, it is the use of explicit this pointer