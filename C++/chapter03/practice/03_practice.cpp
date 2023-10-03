//inverted mirrored right triangle
/*
xxxxxx  i=1 j=12345
 xxxxx  i=2 j= 2345
  xxxx  i=3 j=  345
   xxx    j=1  j<=n-i+1  j++
    xx
     x
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
        for(j =1; j<=n; j++)       
        {
            if(j>=i)
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























/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<= n-i+1; j++)
        {
            /*if(j>= i)
            {
                cout<<"x";
            }
            else
            {
                cout<<"x";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j<=n; j++)
        {
            if(j>=i)
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