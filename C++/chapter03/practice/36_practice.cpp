/*
1
62
1073
131184
15141295

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<i;
            i=i+j-1;
        }
        cout<<endl;
    }
return 0;
}