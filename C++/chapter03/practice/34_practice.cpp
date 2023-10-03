#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        k=0;
        for(j=1; j<=i; j++)
        {
            if(j==2)
            k=i-1;
            if(j==3)
            k=2*i-2;
            if(j==4)
            k=3*i-3; 
            if(j==5)
            k=2*i+6;
            cout<<" "<<k;
            //k+i-1;
            k++;
        }
        cout<<endl;
    }
return 0;
}