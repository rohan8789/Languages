#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, j;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
        }
        
        cout<<"\n";
    }
    return 0;
}
