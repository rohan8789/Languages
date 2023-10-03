//practice again
#include<iostream>
using namespace std;
bool Check(int, int, int);

int main(int argc, char const *argv[])
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(Check(a, b, c))
    {
        cout<<a<<b<<c <<" is a pythagorean triplet";
    }
    else
    {
        cout<<a<<b<<c << "is not a pythogrean triplet";
    }
    return 0;
}

bool Check(int x, int y, int z)
{
    int a;
    a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }   
    if (a*a == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
