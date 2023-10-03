#include<bits/stdc++.h>
using namespace std;

int sum(int *m, int *n)
{
    return *m + *n;
}

int main()
{
    int a;
    int *x = &a;
    cout<<"Eter value of x: ";
    cin>>*x;
    int b; 
    int *y = &b;
    cout<<"Enter value of y: ";
    cin>>*y;

    cout<<"Sum: "<<sum(x, y);
return 0;
}