#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1, j = 2, k = 3;
    int m;
    m = i-- - j-- - k--;
    cout << m << endl;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    return 0;
}
