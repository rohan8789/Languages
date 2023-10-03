#include <iostream>
using namespace std;
int fact(int);

int main(int argc, char const *argv[])
{
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;

    int ans = fact(n) / (fact(r) * fact(n - r));
    cout<<ans;
    return 0;
}

int fact(int x)
{
    int i, fac=1;
    if (x < 0)
    {
        cout << "Error";
    }
    else
    {
        for (i = 2; i <= x; i++)
        {
            fac *= i;
        }
    }
    return fac;
}
