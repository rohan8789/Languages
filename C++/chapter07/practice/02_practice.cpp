//input and print negative element in an array
#include<bits/stdc++.h>
using namespace std;

void Array(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
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