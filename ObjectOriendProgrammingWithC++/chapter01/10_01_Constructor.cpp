/*
1. Constructor is a member function of the class
2. the name of constructor is as same as name of the class
3. It is used to initialize the objects of the class
4. it has no return type, so you can't use return keyword
5. it must be an instance member function. so, it cant be static
6. We can not refer to its address

HOW TO CALL A CONSTRUCTOR???
 #Constructor is automatically callled when objects are created
 #constructor is used to solve the problem of initialisation
 
*/
//Syntax initialization of constructor

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    public:
    Complex()
    {
        cout<<"Constructor called"<<endl;
        a = 0; //if we assign any value other than 0,0 then it will give garbage value
        b = 0;
    }
    void display(void)
    {
        cout<<"Value is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1, c2, c3; //constructor called 3 times 
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
