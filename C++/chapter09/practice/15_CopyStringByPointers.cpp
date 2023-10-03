#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[40];
    char d[40];
    char *s = c;
    char *p = d;

    gets(c);
    for (int i = 0; c[i]!= '\0'; i++)
    {
        d[i] = c[i];
    }
    cout<<"Original: "<<c;
    cout<<endl<<"New : "<<d;
    
    
    
    

    
return 0;
}