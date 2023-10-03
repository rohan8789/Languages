//x on rectangular star
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    for(i =1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
        {
            if(i==j)
            {
                cout<<"\\";
            }
            else if(i==n-j+1)
            {
                cout<<"/";
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