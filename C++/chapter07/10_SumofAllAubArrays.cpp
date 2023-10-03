/*
Given an array of size n, output sum of each subarray of the given array
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout<<sum<<endl;
        }
        
    }
    
    return 0;
}
