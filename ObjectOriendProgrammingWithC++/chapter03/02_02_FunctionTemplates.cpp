#include<bits/stdc++.h>
using namespace std;

template<class X>
X big(X a, X b)
{
    if(a>b)
    return a;
    else
    {
        return b;
    }
}
int main()
{
    cout<<big(5, 8)<<endl;
    cout<<big(8.1, 5.4)<<endl;
return 0;
}