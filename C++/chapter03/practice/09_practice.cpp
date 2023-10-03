#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a==1)
        {
            if(b==1&&c==0||b==0&&c==1)
            {
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
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
    for(i = 1; i<=n; i++)
    {
        for(j = i; j<= n; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k<= i; k++)
        {
            cout<<"x ";
        }
        cout<<endl;
    }
return 0;
}
*/   