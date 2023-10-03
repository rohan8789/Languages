#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, rem, count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        rem = n % 10;
        count = count * 10 + rem;;
        n = n/10;
    }
    cout<<"Reverse number is: "<<count;
    return 0;
}
