#include<iostream>
using namespace std;
int convert(string);

int main(int argc, char const *argv[])
{
    string n;
    cout<<"Enter a hexadecimal number: ";
    cin>>n;
    cout<<"decimal number of the given hexadecimal number is: "<<convert(n);
    return 0;
}
int convert(string x)
{
    int i, ans = 0, base = 1;
    int len = x.size();
    for ( i = len - 1; i >= 0; i--)
    {
        if (x[i]>= '0' && x[i] <= '9')
        {
            ans += (x[i] - 48)*base;
            base = base *16;
        }
        else if (x[i]>='A' && x[i]<= 'F')
        {
            ans += (x[i] - 55)*base;
            base = base*16;
        }
    }
    return ans;
}
