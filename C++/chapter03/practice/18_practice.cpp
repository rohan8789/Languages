/*

    1
   12
  123
 1234
12345
 1234
  123
   12
    1

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        k=1;
        for(j=1; j<=n; j++)
        {
            if(j>=n-i+1)
            {
                cout<<k;
                k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i = 1; i <= n; i++)
    {
        k=1;
        for(j=1; j<=n; j++)
        {
            if(j>i)
            {
                cout<<k;
                k++;
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