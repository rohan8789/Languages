//insert an element 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int pos;
    cin>>pos;
    for(i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=k;
    n++;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}