/*

syntax for initialization list:-
COnstructor(argument list) : initialization-section
{
    assignment + other code;
}

Example:-

class Exam
{
    int maths;
    int programming;
    public:
        Exam(int i, int j) : maths(i), programming(j)
      //Exam(int i, int j) : maths(i), programming(i + j)
        {
            Constructor-body
            cout<<"construction executed"<<endl;
            cout<<"Marks in maths is: "<<maths<<endl;
            cout<<"Marks in programming is: "<<programming<<endl;
        }
};
*/

#include<bits/stdc++.h>
using namespace std;

class Exam
{
    int a;
    int b;

public:
    //Exam(int i, int j) : a(i), b(j)     //---> a=4, b=8
    //Exam(int i, int j) : a(i), b(i+j)    //a=4, b=12
    //Exam(int i, int j) : a(i), b(2 * j)  //a=4, b=16
    //Exam(int i, int j) : a(i), b(a * j)    //a=4, b=32
    Exam(int i, int j) : b(j), a(i + b)  //a=garbage, b = 8 //This will create 
                                // problem because a is initialized first
    {
        cout<<"Constructor called"<<endl;
        cout<<"value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
    }
};

int main()
{
    Exam(4, 8);
    return 0;
}
