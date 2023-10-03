#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[30];
    char *x = c;
    cin.getline(x, 30);
    char d[30];
    char *y = d;
    cin.getline(y, 30);
    int i, j;
    for (i = 0; *(x + i) != '\0'; i++);
    for (j = 0; *(y + j) != '\0'; j++, i++)
    {
        *(x + i) = *(y + j);
    }
    *(x + i) = '\0';
    cout << "COncatinated String is: " << x << endl;
    return 0;
}