/*
    5
   456
  34567
 2345678
123456789
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
                cout<<j;
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