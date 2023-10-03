//print n terms of febonacci series
#include <iostream>
using namespace std;
int febo(int);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Febonacci series: " << febo(n);

    return 0;
}

int febo(int a)
{
    int x = 0, y = 1, z, i;
    for (i = 1; i <= a; i++)
    {
        cout << x << endl;
        z = x + y;
        x = y;
        y = z;
    }
    return 0;
}
