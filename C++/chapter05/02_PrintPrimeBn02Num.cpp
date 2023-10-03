#include <iostream>
#include<math.h>
using namespace std;
bool prime(int);

int main(int argc, char const *argv[])
{
    int a, b, i;
    cout << "Enter upper and olower limit: ";
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i <<"\t";
        }
    }
    return 0;
}

bool prime(int x)
{
    int j;
    for (j = 2; j < x; j++)
    {
        if (x % j == 0)
        {
            return false;
        }
    }

    return true;
}
