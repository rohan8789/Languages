//butterfly
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    for(i = 1; i<= n; i++)
    {
        for(j = 1; j<=2*n-1; j++)
        {
            if(j>i && j<2*n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"x";
            }
        }
        cout<<endl;
    }
    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"x";
            }
        }
        cout<<endl;
    }
return 0;
}