//hollow pyramid
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j = i; j<=n; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            if(i>=2 &&i<=n-1 && k>=2 && k<=2*i-2)
            {
                cout<<" ";
            }
            else
            {
                cout<<"x";
            }
        }
        cout<<endl;
    }
return 0;
}