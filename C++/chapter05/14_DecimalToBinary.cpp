#include<iostream>
//#include<math.h>
using namespace std;
long long convert(int);

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Converted binary number is: "<<convert(n);
    return 0;
}

long long convert(int x)
{
    int rem, temp = 1;
    long binary = 0;
    while (x != 0)
    {
        rem = x % 2;
        x = x / 2;
        binary += rem *temp;
        temp = temp*10;
    }
    return binary;
    
}
