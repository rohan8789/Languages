#include<bits/stdc++.h>
using namespace std;

class record
{
    string name;
    int age;
    public:
    record(){}
    record(string n, int a){
        name=n; 
        age=a;
    }
    record operator >(record r1)
    {
        if(this->age > r1.age)
        {
            return *this;
        }
        else
        {
            return r1;
        }
    }
    void Display()
    {
        cout<<name<<" is greater";
    }
};

int main()
{
    record r("Rohan", 23), r2("Sameer", 21), r3;
    r3 = r > r2;
    r3.Display();



return 0;
}