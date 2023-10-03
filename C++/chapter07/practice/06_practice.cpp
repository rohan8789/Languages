//total evenodd num in an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i, count=0, rohan=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        count=count+1;
        if(arr[i]%2!=0)
        rohan=rohan+1;
    }
    cout<<"Even: "<<count<<endl;
    cout<<"Odd: "<<rohan;
return 0;
}