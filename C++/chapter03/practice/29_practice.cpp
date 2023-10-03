/*
           0
          121
         23432
        3456543





*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        k=i-1;
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=n-i+1&&j<=n+i-1)
            {
                cout<<" "<<k;
                j<n?k++:k--;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>i&& j<2*n-i)
            {
                cout<<" "<<k;
                j<n?k++:k--;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
return 0;
}