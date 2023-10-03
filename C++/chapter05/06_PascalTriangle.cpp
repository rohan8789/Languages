#include<iostream>
using namespace std;
int fact(int);

int main(int argc, char const *argv[])
{
    int i, j, n;
    cout<<"Enter a number: ";
    cin>>n;
    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i - j))<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

int fact(int n)
{
    int i, fac = 1;
    for ( i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}
