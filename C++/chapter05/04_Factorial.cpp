#include <iostream>
using namespace std;

int fact(int);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of the given number is: " << fact(n);
    return 0;
}

int fact(int x)
{
    int i, fac = 1;
    if (x < 0)
    {
        cout << "Error";
    }
    else
    {
        for (i = 1; i <= x; ++i)
        {
            fac *= i;
        }
    }
    return fac;
}

//stl library
//IEEE
//CODE FORCES AND CODE SHEF
//INTERVIEW BIT
//STL STANDARD TEMPLATE LIBRARY
//OPERATION SYSTEM, DATABASE MANAGEMENT SYSTEM, OOPS, SYSTEM
//LEETCODE