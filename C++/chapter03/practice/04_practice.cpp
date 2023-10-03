//inverted right triangle
/*
xxxxx
xxxx
xxx
xx
x
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<= n; j++)
        {
            if(j<=n-i+1)
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
    int n; 
    cin>>n;
    int i, j;
    for(i = 1; i<= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j<=n-i+1)
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

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i<= n; i++)
    {
        for(j = n; j>= i; j--)
        {
            if(j <= i)
            {
                cout<<"x";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
return 0;
}
*/