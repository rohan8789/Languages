#include<bits/stdc++.h>
using namespace std;

void input(int *p, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cin>>*(p+i);
    }
}
void display(int *p, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<*(p+i)<<" ";
    }
}

int main()
{
    int n;
    cin>>n; 
    int arr[n];
    input(arr, n);
    display(arr, n);
return 0;
}