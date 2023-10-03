//a^b;
//3^4 = 3 * 3* 3 *3
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b, a = 1, e;
    cout<<"Enter number and its expo: ";
    cin>>b>>e;
    for (int i = 1; i <= e; i++)
    {
        a = a * b;
    }
    cout<<"Value: "<<a<<endl;
    
    
return 0;
} 