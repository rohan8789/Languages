#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    int *x = arr;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i <= n; i++)
    {
        cin>>*x;
        cout<<*x<<endl;
    }


return 0;
}