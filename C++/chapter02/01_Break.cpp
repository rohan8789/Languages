//Jumps in loops
//break and continue statements comes under jumps in loops
//it is used to control the flow of the loop on meeting some specified conditions
/*
neha loves travelling but she is allowed to go outside only on odd days. 
write a c++ program to identify if she could go outside or not
*/

#include <iostream>
using namespace std;

int main()
{
    int x, i;
    cout << "Enter the date neha wants to go outside";
    cin >> x;
    for (i = 1; i <= 30; i++)
    {
        if (x % 2 == 0)
        {
            continue;
        }
        cout << "Neha can go outside on " << i << endl;
    }

    return 0;
}
