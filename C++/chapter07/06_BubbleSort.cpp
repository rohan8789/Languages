#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, arr[100], j; 
    cout<<"ENter the size of an array: ";
    cin>>n;
    cout<<"Enter the elements of an array: ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for ( i = 0; i < n; ++i)
    {
        for ( j = 0; j < n - i - 1; ++j)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = temp;
            }
            
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    
    
    
    return 0;
}
