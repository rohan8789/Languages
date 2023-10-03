/*
 1      0        0        1
 2^3*1 + 2^2*0 + 2^1*0 + 2^0*0 = 9
*/
#include <iostream>
#include <math.h>
using namespace std;
int convert(long long);

int main(int argc, char const *argv[])
{
    long long int n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << "Decimal number converted is: " << convert(n);

    return 0;
}

int convert(long long x)
{
    int rem, sum = 0, i = 0;
    while (x != 0)
    {
        rem = x % 10;
        x = x / 10;
        sum += rem * pow(2, i);
        ++i;
    }
    return sum;
}
