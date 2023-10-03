//read and print element using recursion
#include<bits/stdc++.h>
using namespace std;

void Array(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"elements: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n; 
    int arr[n];
    Array(arr, n);
return 0;
}