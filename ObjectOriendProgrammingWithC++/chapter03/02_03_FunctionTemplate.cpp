//What if we had two diff datatypes in parameter
//say 5, 8.8. In that case 
#include<bits/stdc++.h>
using namespace std;

template<class x, class y>
x big(x a, y b)
{
    if(a<b)
    return a;
    else
    return b;
}
int main()
{
    cout<<big(5.5, 5);
return 0;
}