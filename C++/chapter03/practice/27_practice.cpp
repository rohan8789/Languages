/*

1
10
101
1010
10101


*/
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
        for(j=1; j<=i; j++)
        {
            cout<<k;
            k=1-k;//when k=0, then k=1; whenk=1, then k=0
        }
        cout<<endl;
    }

return 0;
}