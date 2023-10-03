#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i < n/*or squrt(n)*/; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n == i)
    {
        cout << "Prime number is: " << n;
    }
    else
    {
        cout << "Not a Prime number:" << n;
    }
    return 0;
}
