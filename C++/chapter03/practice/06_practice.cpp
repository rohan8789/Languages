//inverted pyramid

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    int i, j;
    for(i =1; i<=n; i++)
    {
        for(j = 1; j<=2*n-1; j++)
        {
            if(j>=i && j<=2*n-i)
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
    int i, j, n;
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=9; j++)
        {
            if(j>=i && j<=9-i+1)
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
*/