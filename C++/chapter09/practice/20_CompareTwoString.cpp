#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[30];
    cin.getline(c, 30);
    char d[30];
    cin.getline(d, 30);
    if(c != d)
    {
        cout<<"C is not equal to d"<<endl;
    }
    else if(c > d)
    {
        cout<<"C is greater than d"<<endl;
    }
    else if(c < d)
    {
        cout<<"d is greater than c"<<endl;
    }
    else
    {
        cout<<"C is equal to d"<<endl;
    }
return 0;
}