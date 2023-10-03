/*
Write a program to demonstrate the unary operator overloading for operator ++. 
Make a class Test having a data member x. 
Create a default constructor to initialize the data member. 
1) Overload operator ++ (Pre) with definition to pre-decrement the value of a variable 
2) Overload operator ++ (post) with definition to post-decrement the value of variable.
*/

// #include <iostream>
// using namespace std;

// class Test
// {
//     int x;

// public:
//     Test(int i)
//     {
//         x = i;
//         cout << "Original value of x : " << x << endl;
//     }
//     void operator++(int)
//     {
//         --x;
//         cout << "Value after decrementation : " << x << endl;
//     }

//     void operator++()
//     {
//         x--;
//     }

//     void display()
//     {
//         cout << "Value after incremetation " << x << endl;
//     }
// };

// int main()
// {
//     Test t1(12);
//     ++t1;
//     t1.display();

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Test
{
    int x;
    public:
    Test()
    {
        x=0;
    }
    Test(int n)
    {
        x=n;
    }
    void operator ++()//pre decrement overloading
    {
        --x;
    }
    void operator ++(int)//post decrement overloading
    {
        x--;
    }
    void Display()
    {
        cout<<"Number is: "<<x<<endl;
    }
};

int main()
{
    Test t1(12);
    cout<<endl;
    cout<<"Before Pre decrement: "<<endl;
    t1.Display();

    cout<<"After Pre decrement: "<<endl;
    ++t1;
    t1.Display();

    cout<<"Before Post decrement: "<<endl;
    t1.Display();

    cout<<"After Post decrement: "<<endl;
    t1++;
    t1.Display();
    cout<<endl;

return 0;
}