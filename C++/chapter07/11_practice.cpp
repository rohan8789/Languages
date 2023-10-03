//sorting
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i, c;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[i+1])
        {
            c=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=c;
        }
    }
    cout<<"Sorted array: "<<arr[i]<<" ";
return 0;
}