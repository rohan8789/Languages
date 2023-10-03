/*
6543210
543210
43210
3210
210
10
0
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int i, j, k;
    for(i = 0; i<n; i++)
    {
        
        k=n-i;
        for(j = 0; j<=n-i; j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
    }
return 0;
}