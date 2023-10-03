#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"elements: ";
    int i;
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Elements to search: ";
    cin>>k;
    for(i = 0; i < n; i++)
    {
        if(k == arr[i])
        {
            cout<<"Element found: "<<k<<endl;
            break;
        }
    }
    if(k != arr[i])
    {
        cout<<"Elements not found";
    }
return 0;
}