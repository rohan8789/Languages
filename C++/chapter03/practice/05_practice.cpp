//pyramid
/*
    x      i=1 j>=5 && j<=5
   xxx     i=2  j>=n-i+1 && j<=6
  xxxxx    i=3 j>=3 && j<=n+i-1
 xxxxxxx   i=4  j>=2 && j<=8
xxxxxxxxx  i=5  j>=1 && j<=9

xxxxxxxxx
xxxxxxxxx
xxxxxxxxx
xxxxxxxxx
xxxxxxxxx
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j= 1; j<=2*n-1; j++)
        {
            if(j>=n-i+1&& j<=n+i-1)
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
    cin>>n;
    for(i = 1; i<= n; i++)
    {
        for(j = 1; j<=2*n-1; j++)
        {
            if(j>= n-i+1 && j<=n+i-1)
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

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i+1; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<"x";
        }
        cout << endl;
    }  
    return 0;
}
*/