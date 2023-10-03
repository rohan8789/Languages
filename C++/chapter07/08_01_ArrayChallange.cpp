//given an array of size n. for every i from 0 to n-1, output max(a[0], a[1].. a[i])
//EXAMPLE:
// 1  0  5  4  6  8
//{1}{1}{5}{5}{6}{8}

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, arr[100] , mx = INT_MIN;
    cin>>n;
    for(int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout<<mx<<endl;
    }
    
    return 0;
}
