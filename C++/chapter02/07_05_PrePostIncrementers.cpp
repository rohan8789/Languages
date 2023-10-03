#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 10, j = 20, k;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    return 0;
}
//10 20 -20
//10 - 9 + 19 - 20 + 9 - 20 + 10 - 19
//10 + 10 - 11 - 10 - 19
//9 - 10 - 19
//-20
