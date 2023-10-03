/*

ABCDEFG
ABC EFG
AB   FG
A     G

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
        k='A';
        for(j=1; j<=2*n-1; j++)
        {
            if(j>n-i+1&&j<n+i-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<k;
                k++;
            }
        }
        cout<<endl;
    }
return 0;
}