//count negative number from array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i, count=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            count=count+1;
        }
    }
    cout<<"Negative num: "<<count<<endl;
return 0;
}