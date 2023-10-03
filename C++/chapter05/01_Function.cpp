/*
Function is a piece of code that perform an specific task.
it makes the code short and avoid reptitive part of the code
syntax==
returnType functionName(parameter1, parameter2)
{
    function body
}
*/
//function to add two numbers
#include<iostream>
using namespace std;

int addNum(int m, int n);

int main(int argc, char const *argv[])
{
    int a, b, x;
    cout<<"Enter two number: ";
    cin>>a>>b;
    x = addNum(a,b);

    cout<<"Addition of two numbers is: "<<x;
    return 0;
}

int addNum(int m, int n)
{
    int z;
    z = m+n;
    return z;
}
//must refer concept of stack frame

