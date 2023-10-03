//mirrored right angle triangle.cpp
/*
     x  i=1; j =   5  
    xx  i=2  j=   45
   xxx  i=3; j=  345
  xxxx        j>=n-i+1
 xxxxx
xxxxxx
*/
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i<= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j>=n-i+1)
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