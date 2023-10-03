#include<bits/stdc++.h>
using namespace std;

int big(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
}

double big(double x, double y)
{
    if(x>y)
    return x;
    else
    return y;
}
//Just Beacuse of data type we have to repeat the same funtion
//we can have a smarter approach towards this i.e, Function Templates
//just replace data type by X and pass different data types as per your wish
int main()
{
    cout<<big(4, 5)<<endl;
    cout<<big(5.5, 4.5);
return 0;
}