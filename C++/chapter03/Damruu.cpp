#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=n ; i>=1 ; i--)
    {
        for(j=n-i ; j>=1 ; j--)
        {
            cout<<" ";
        }
        for(j=2*i-1 ; j>=1 ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n-i ; j++)
        {
             cout<<" ";
        }
        for(j=1 ; j<=2*i-1 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<" ";
        }
        for(j=2*n-1 ; j>=2*i-1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            cout<<" ";
        }
        for(j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main()
{
 int i,j,k,n;
cin>>n;

 for(i=n ; i>=1 ; i--)
 {
     for(j=n ; j>=i ; j--)
     {
        cout<<" ";
     }
     for(j=i ; j>=1 ;j--)
     {
         cout<<"* ";
     }
     cout<<endl;
 }

 for(i=1 ; i<=n ; i++)
 {
     for(j=i ; j<=n ; j++)
     {
        cout<<" ";
     }
     for(j=1 ; j<=i ;j++)
     {
         cout<<"* ";
     }
     cout<<endl;
 }
return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main()
{
 int i,j,k,n;
cin>>n;

 for(i=1 ; i<=n ; i++)
 {
     for(j=1 ; j<=i ; j++)
     {
        cout<<" ";
     }
     for(j=1 ; j<=n+1-i ;j++)
     {
         cout<<"* ";
     }
     cout<<endl;
 }

 for(i=1 ; i<=n ; i++)
 {
     for(j=i ; j<=n ; j++)
     {
        cout<<" ";
     }
     for(j=1 ; j<=i ;j++)
     {
         cout<<"* ";
     }
     cout<<endl;
 }
return 0;
}*/