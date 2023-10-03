//right angle triangle
/*
x      i=1   j= 1
xx     i=2  j = 12
xxx    i=3; j = 123
xxxx   i=4 j =  1234
xxxxx  i=5  j = 12345     
*/

/*
11 12 13 14 15    
21 22 23 24 25
31 32 33 34 35 
41 42 43 44 45
51 52 53 54 55

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
        for(j = 1; j<=n; j++)
        {
            if(j<=i)
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



/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j<=i)
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