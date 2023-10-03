#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, originaln, rem, sum =0;
    cout<<"Enter a number: ";
    cin>>n;
    originaln = n;
    while(n!=0)
    {
        rem = n % 10;
        sum += pow(rem, 3);
        n = n/ 10; 
    }
    if (sum == originaln)
    {
        cout<<"Armstrong Number is: "<<originaln;
    }
    else
    {
        cout<<"Not an armstrong number"<<originaln;
    }
    
    return 0;
}
