#include<bits/stdc++.h>
using namespace std;

class B
{
    public:
    void say(void)
    {
        cout<<"Hello Rohan !!"<<endl;
    }
};

class D : public B
{
    public:
    void say(void)
    {
        cout<<"Bbye Rohan !!"<<endl;
    }
};

int main()
{
    B c;
    c.say();

    D d;
    d.say();

/*Ambiguity02----->  when you create function for derived class
      same as base class then, you can call it with their respective 
      classes and they will call their respective function.
      but, 
      if you delete one of the function then run the program, then,
      no matter what, it will call the left function having same name     
    */
    return 0;
}
