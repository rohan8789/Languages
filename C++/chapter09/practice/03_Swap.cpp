#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, s;
    int *x, *y;
    x = &a;
    y = &b;
    cout<<"enter value of a and b is: ";
    cin>>*x>>*y;

    cout<<"Value of a is: "<<*x<<" Value of b is: "<<*y<<endl;
    s = *x;
    *x = *y;
    *y = s;

    cout<<"Value of a is: "<<*x<<" Value of b is: "<<*y<<endl;

return 0;
}