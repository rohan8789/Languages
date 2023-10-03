/* while do while and for loop*/
//sum of n numbers code

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, sum = 0;
    cout<<"Enter a number: ";
    cin>>n;

    for(i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout<<"Sum of n given number: "<<sum;
    return 0;
}

