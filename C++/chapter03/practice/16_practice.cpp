//half diamond
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=n-i+1&& j<=n)
            {
                cout<<"x";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i =1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
        {
            if(j>i)
            {
                cout<<"x";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}