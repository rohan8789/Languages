#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, arr[100], i, j, temp;
    cout<<"Enter the size of an array: ";
    cin>> n;
    cout<<"Enter the elements of an array: ";
    for(i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    for(i = 0; i <n ; i++)
    {
        for(j = i + 1; j < n- 1; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
