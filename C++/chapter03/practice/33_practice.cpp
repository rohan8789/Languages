/*

      A
     CB
    FED
   JIHG
  ONMLK

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    char k;
    for(i=1; i<=5; i++)
    {
        k=64+i;
        for(j=1; j<=5; j++)
        {
            if(j>=6-i){
            cout<<k;
            k++;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
return 0;
}