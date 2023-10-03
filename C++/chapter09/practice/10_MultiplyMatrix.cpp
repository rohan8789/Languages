#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int *ptra = *arr;
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "Matrix01[" << i << "][" << j << "]:";
            cin >> *((ptra + i) + j);
        }
    }

    int r1, c1;
    cin >> r1 >> c1;
    int arr1[i][j];
    int *ptrb = *arr1;
    int k;
    int mult[20][20];
    int *ptrc = *mult;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            cout << "Matrix02[" << i << "][" << j << "]:";
            cin >> *((ptrb + i) + j);
        }
    }

    int sum = 0;

    if (c == r1)
    {
        mult[20][20] = 0;
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                for (k = 1; k <= r1; k++)
                {
                    sum += *((ptra + i)+k)* *((ptrb+j)+k);
                }
                *((ptrc + i) + j) = sum;
                sum = 0;
            }
        }

        cout << "Product of the matrix is: "<<endl;
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                cout << *((ptrc + i)+j) << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Wrong Input:";
    }
    return 0;
}