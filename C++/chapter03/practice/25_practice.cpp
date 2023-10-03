//rhombus
/*
   ****
  ****
 ****
****
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    for(i = 1; i<= 6; i++)
    {
        for(j =1; j<= 12; j++)
        {
            if(j>=7-i&&j<=13-i)
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



/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n; 
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        for(j =1; j<=2*n; j++)
        {
            if(j>=n-i+1 && j<=2*n-i+1)
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
}*/




























/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j; 
    for(i = 1; i<= n; i++)
    {
        for(j = 1; j<=n-i+1; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k<=n; k++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
return 0;
}*/