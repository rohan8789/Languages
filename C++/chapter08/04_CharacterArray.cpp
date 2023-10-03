#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //check palindrome
    int n;
    cin>>n;
    char arr[100];
    cin>>arr;

    int check = 1;
    for(int i = 0; i <n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check == 1)
    {
        cout<<arr<<" is a palindrome string"<<endl;
    }
    else
    {
        cout<<"Not a palindrome string"<<endl;
    }

    return 0;
}
