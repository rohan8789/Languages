#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sum;
    int *x, *y;
    x = &a;
    y = &b;
    cin>>*x>>*y;
    sum = *x + *y;
    cout<<sum<<endl;
return 0;
}