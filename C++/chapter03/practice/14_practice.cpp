/*
ABCDCBA
ABC CBA
AB   BA
A     A
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    char k;
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        k='A';
        for(j=1; j<=2*n-1; j++)
        {
            if(j>n-i+1&&j<n+i-1)
            {
                cout<<" ";
                if(j==n)
                k--;
            }
            else
            {
                cout<<k;
                j<=n?k++:k--;
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
    int n, i, j;
    char k = 'A';
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        k='A';
        for(j=1; j<=2*n-1; j++)
        {
            if(j<=n-i+1 || j>=n+i-1)
            {
                cout<<k;
                j<=n?k++:k--;
            }
            else
            {
                cout<<" ";
                if(j==n)
                k--;
            }
        }
        cout<<endl;
    }
return 0;
}
*/