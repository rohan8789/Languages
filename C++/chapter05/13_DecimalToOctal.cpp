#include<iostream>
using namespace std;
int convert(int);

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Octal to given binary is: "<<convert(n);
    return 0;
}

int convert(int x)
{
    int rem, octal = 0, temp = 1;
    while (x != 0)
    {
        rem = x % 8;
        x = x/8;
        octal += rem * temp;
        temp = temp*10;
    }
    return octal;
}
