//swap
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int x, y;
    cout<<"Enter value of a and b: ";
    cin>>x>>y;
    swap(x, y);
    cout<<"value of a, b is: "<<x<<" "<<y;
return 0;
}