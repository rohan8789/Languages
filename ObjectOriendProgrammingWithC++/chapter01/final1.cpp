//print sum of integers of an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n], i, sum = 0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Sum of integers of an Array is: "<<sum<<endl;
return 0;
}