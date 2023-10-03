/*
1. Destructor is the instance member of the class
2. The name of the estructor is same as the name of the class but preceded by the sybmol ~
3. Destructor can never be static
4. Destructor has no return Type
5. Destructor takes no argument. so, no overloading possible
6. It can't be static
7. 
*/

//syntax
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    public:
    ~Complex() //Destructor
    {
        cout<<"Destructor called";
    }
};

void fun()
{
    Complex obj;
}

int main(int argc, char const *argv[])
{
    fun();
    return 0;
}

/*
1. invoked automatically.
2. compiler makes default destructor, but if you make a destructor yourself then,
   compiler will not be making a destructor
3. Destructor is the last function before the object is destroyed
4. destructor is not the reason for destroying the object. it is done because 
   function ends at that point
*/