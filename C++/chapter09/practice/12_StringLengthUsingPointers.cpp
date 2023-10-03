#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "Chandisarh University consumes a lots of my time";
    char *s = str;

    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    cout<<"Length of the string: "<<length;
    
return 0;
}