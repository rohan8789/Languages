//copy elements to another array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int arr[n], arr1[n];
    int i, c;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Element before copy: "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Element after copy: "<<endl;
    for(i=0; i<n; i++)
    {
        c=arr[i];
        arr[i]=arr1[i];
        arr1[i]=c;
        cout<<arr1[i]<<" ";
    }

return 0;
}