#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, arr[n], i;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    cout<<"Enter the size of an aray: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout<<"Max number is: "<<maxNo<<"and min number is: "<<minNo<<endl;
    return 0;
}

