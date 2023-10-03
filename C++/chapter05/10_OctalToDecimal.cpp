/*
137 = 1*10^2 + 3*10^1 + 7*10^0 
*/

#include<iostream>
#include<math.h>
using namespace std;

int convert(long long);

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<"Octal number converted is: "<<convert(n);
    return 0;
}

int convert(long long x)
{
    int rem, sum = 0, i = 0;
    while (x != 0)
    {
        rem = x % 10;
        sum += rem * pow(8, i);
        i++;
        x = x/10;
    }
    return sum;
}
