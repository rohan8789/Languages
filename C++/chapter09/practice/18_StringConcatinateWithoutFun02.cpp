#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char c[50];
    cin.getline(c, 50);
    char d[50];
    cin.getline(d, 50);
    for( i = 0; c[i] != '\0'; i++);
    for(int j = 0; d[j] != '\0'; j++, i++)
    {
        c[i] = d[j];
    }
    c[i] = '\0';
    cout<<"Concatinated String is: "<<c<<endl;
return 0;
}