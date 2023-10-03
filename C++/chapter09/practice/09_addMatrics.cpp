#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin>>r>>c;
    int arr1[r][c];
    int arr2[r][c];
    int i, j;
    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            cout<<"Matrix["<<i<<"]["<<j<<"]"<<endl;
            cin>>arr1[i][j];
        }
    }

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            cout<<"Matrix["<<i<<"]["<<j<<"]"<<endl;
            cin>>arr2[i][j];
        }
    }

    int sum[r][c];
    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
           sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

     for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }
   
return 0;
}