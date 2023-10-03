/*
1. Ambiguity-----> two function having same name but different class and task. 
   which one will be called??
*/

#include<bits/stdc++.h>
using namespace std;

class base1
{
    public: 
    void greet(void)
    {
        cout<<"Good Morning"<<endl;
    }
};

class base2
{
    public: 
    void greet(void)
    {
        cout<<"Shubh prabhat"<<endl;
    }
};

class derived : public base1, public base2
{
    public:
    void greet()
    {
        cout<<"Hi"<<endl;
        // base1::greet();
        // base2::greet();
    }
   

};

int main(int argc, char const *argv[])
{
    //Ambiguity01
    base1 o1;
    base2 p1;
    o1.greet();
    p1.greet();
    derived d;
    d.greet();
    return 0;
}
