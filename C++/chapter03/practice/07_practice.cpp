//hollow triangles
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=i; j++)
        {
            if(i == n || j==1||i==j)
            {
                cout<<"x";
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