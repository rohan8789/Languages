//find max min element of an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i, count = 1, max, min;
    i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    max = arr[0];
    min = arr[0];
    for(i=0; i<n; i++)
    {
        if(max>=arr[i])
        max=arr[i];
        if(min<arr[i])
        min=arr[i];
    }
    cout<<max<<" "<<min;
return 0;
}