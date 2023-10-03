#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 2;
    int j = 3, k;
    // k = i++ - ++j;
    k = i + j + i++ + j++ + ++i + ++j;
    cout << i << j << k << endl;
    return 0;
}
