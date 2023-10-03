//This pointer is a pointer keyword which points at the object which calls the member function

#include<bits/stdc++.h>
using namespace std;

class data
{
    int a;
    public:
    void setdata(int a)
    {
        // a = a; //Garbage value
        this->a = a; //this is a constant Pointer
    }
    void getsata(void)
    {
        cout<<"The value of a is: "<<a<<endl;
    }
};

int main()
{
    data a;
    a.setdata(5);
    a.getsata();

return 0;
}