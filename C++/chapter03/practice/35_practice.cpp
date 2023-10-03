#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j, k;
    for(i=1; i<=n; i++)
    {
        k=1;
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=n-i+1&&j<=n+i-1&&k)
            {
                cout<<"x";
                k=0; 
            }
            else
            {
                k=1;
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}