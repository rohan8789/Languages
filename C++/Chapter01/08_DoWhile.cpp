//Ques 7 using dowhile loop

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    do
    {
        cout << n << endl;
        cin >> n;

    } while (n > 0);

    return 0;
}
