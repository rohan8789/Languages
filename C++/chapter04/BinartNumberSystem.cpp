#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, rem, count; 
    cout<<"Enter a number: ";
    cin>>n;
    count = rem;
    while(n != 0)
    {
        rem = n % 2;
        n = n/ 10;
    }
    cout<<"binary is: "<<count;
    return 0;
}
