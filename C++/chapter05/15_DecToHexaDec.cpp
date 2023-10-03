//Practice agAIN
#include<iostream>
using namespace std;

string convert (int);

int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"HExadecimal of the diven decimal number is: "<< convert(n);
    return 0;
}

string convert(int x)
{
    string hex[20];
    int rem, i = 1, j;
    while (x != 0)
    {
        rem = x % 16;
        if (rem <= 9)
        {
            hex[i] = rem + 48;
        }
        else
        {
            hex[i] = rem + 55;
        }
        x = x/16;
        i++;
    }
    for ( j = i; j > 0; j--)
    {
        cout<<hex[j];
    }
    return hex[j];
}