#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[30];
    gets(s);
    int i;
    char sen[30];
    for(i = 0; s[i] != '\0'; i++)
    {
        sen[i] = s[i];
    }
    sen[i] = '\0';
    cout<<"Original string: "<<s<<endl;
    cout<<"Dublicate String: "<<sen<<endl;
return 0;
}