/*
1. Constructor overloading is similar to function overloading.
2. if you dont make a constructor, compiler will implicitly
   create a constructor for the code. means, in each program, 
   there is minimum one constructor always.
3. if you make atleat one constructor, compiler will not create 
   any implicit constructor for the program.
*/

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int k)
    {
        a = k;
        cout<<"Paramatrised constructor"<<endl;
    }
    Complex()
    {
        cout<<"Default Constructor"<<endl;
    }
    //This is function overloading

    Complex(Complex &c)//copy constructor
    {
        a = c.a;
        b = c.b;
    }//This is Copy Constructor
};

int main(int argc, char const *argv[])
{
   Complex c1(4, 6), c2(7), c3, c4(8);
    Complex c4(c1); //Copy const will be called 4, 6 will be passed
    return 0;         
}

/*
1. If there is no constructor mad by us in class, Compiler will make two constructor
     *Default constructor
     *Copy Constructor 

NOTE:- 1. If we make a constructor, compiler will not make a default constructor but
       will make a copy constructor
       2. If you make a copy constructor in the class, compiler will neither make default
       nor a copy constructor in the class.
*/