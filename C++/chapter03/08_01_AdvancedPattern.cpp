#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n+1-i; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
