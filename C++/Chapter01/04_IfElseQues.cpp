#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, max;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    if (a>b && a >c)
    {
        cout<<"max number is: "<< a;
    }
    else if (b > c)
    {
        cout<<"max number is: "<< b;
    }
    else
    {
        cout<< "max number is: "<< c;
    }
    
    

    return 0;
}
