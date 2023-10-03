#include<iostream>
using namespace std;
int Sum(int);

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Sum of n natural number is: "<< Sum(n);
    return 0;
}

int Sum(int x)
{
    int i,sum = 0;
    for ( i = 0; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}
