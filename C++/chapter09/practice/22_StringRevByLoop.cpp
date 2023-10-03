#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string c;
    // getline(cin, c);
    // int i = 0;
    // for(i = c.length()-1; i >= 0; --i)
    // {
    //     cout<<c[i];
    // }

    char c[50];
    cin.getline(c, 50);
    int i = 0;
    int len = strlen(c);
    for(i = len - 1; i >= 0; --i)
    {
        cout<<c[i];
    }
    return 0;
}