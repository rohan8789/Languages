/*
Two dimensional array 
*/

//int arr[m][n];   is declaration of an array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int m, n; 
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
