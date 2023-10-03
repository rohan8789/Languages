#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int ToSearch, found = 0, i, j;
    cout<<"Enter the element to br searched: ";
    cin>>ToSearch;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == ToSearch)
            {
                found = 1;
                cout<<ToSearch<<" is the element found at place "<<i<<","<<j;
            }
        }
    }
    if (found == 0)
    {
        cout<<"Element not found\n";
    }
    
    return 0;
}
