//WAP to calculate sum ofmarks of n students of a
//class inputted via dynamic memory allocation.

#include <bits/stdc++.h>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        cout<<endl<<endl;
        throw "Division by zero condition!";
        cout<<endl<<endl;
    }
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
        cout<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, sum =0;
//     cout<<endl;
//     cout<<"Enter Number of students in class: ";
//     int *ptr = new int[n];
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"Enter Marks in sub["<<i<<"]: ";
//         cin>>*(ptr+i);
//         sum = sum + *(ptr+i);
//     }
//     cout<<"Sum of Marks is: "<<sum<<endl;
//     cout<<endl;

// return 0;
// }