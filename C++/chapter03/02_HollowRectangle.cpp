#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, rows, column;
    cout<<"Enter the number of ROws and Column you want to enter: ";
    cin>>rows>>column;

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= column; j++)
        {
            if(i == 1 || i == rows || j == 1 || j == column)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
