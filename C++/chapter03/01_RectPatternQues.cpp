//printing normal star pattern Rectangle
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, rows = 5, column = 4;
    //cout<<"Enter number of rows and column you want to enter: ";
    //cin>>rows>>column;
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= column; j++)
        {
            cout<<"*";
        }
        cout<<"\n";    
    }
    
    return 0;
}
