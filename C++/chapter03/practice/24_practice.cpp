/*

     A1
    AB12
   ABC123
  ABCD1234


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int i, j;
    for(i =1; i<= n; i++)
    {
        char k = 'A';
        for(j = 1; j<= 2*n; j++)
        {
            if(j>=n-i+1 && j<=n+i)
            {
                if(j==5)
                k='1';
                cout<<k;
                k++;
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