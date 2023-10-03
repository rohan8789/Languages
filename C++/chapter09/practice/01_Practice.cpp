#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 293;
    char b = 'r';
    float c = 23.554f;
    double d = 33.432;
    long long e = 9430648818;

    cout<<"Value is: "<<a<<" Address is: "<<&a<<endl;
    cout<<"Value is: "<<b<<" Address is: "<<&b<<endl;
    cout<<"Value is: "<<c<<" Address is: "<<&c<<endl;
    cout<<"Value is: "<<setprecision(3)<<d<<" Address is: "<<&d<<endl;
    cout<<"Value is: "<<e<<" Address is: "<<&e<<endl;


    return 0;
}
