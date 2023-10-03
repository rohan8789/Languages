#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, s;
    for (i = 0; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            s = i + j;
            if (s % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    return 0;
}
