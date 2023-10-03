/*

      1
     121
    12321
   1234321
  123454321

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j ,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-i+1&&j<=n+i-1)
            {
                cout<<k;
                j<n?k++:k--;
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