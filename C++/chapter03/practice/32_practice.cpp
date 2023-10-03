/*

1
3x2
4x5x6
10x9x8x7
11x12x13x14x15


*/

//complicated part is
//i=1, k+1, 
//i=2, k+i

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j, k=0;
    for(i=1; i<=n; i++)
    {
        if(i%2==1){
            k= k+1;
        }
        else{
            k--;
            k=k+i;
            }
        int p=k;
        for(j=1; j<=2*i-1; j++)
        {
            if(j==2||j==4||j==6||j==8){
                cout<<"x";
            }
            else{
                cout<<p;
                if(i%2==0){
                p++;
                k++;
                }
                else
                p--;
            }
            
        }
        cout<<endl;
    }
return 0;
}