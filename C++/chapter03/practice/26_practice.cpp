/*

    1
   12A
  123AB
 1234ABC

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    for(i = 1; i<=4; i++)
    {
        char k=49;
        for(j = 1; j<=7; j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(j==5)
                k=65;
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