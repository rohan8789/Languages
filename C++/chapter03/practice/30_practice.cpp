/*

A
BA
CBA
DCBA
EDCBA

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    char k;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        k=64+i;
        for(j=1; j<=i; j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
    }
return 0;
}