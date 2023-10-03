#include<bits/stdc++.h>
using namespace std;

void fun(int a)
{
    cout<<"I am first fun: "<<a<<endl;
}

template<class t>
void fun(t a)
{
    cout<<"I am Templatized first fun: "<<a<<endl;
}

template<class t>
void funct(t a)
{
    cout<<"I am another Templatized funtion: "<<a<<endl;
}


int main()
{
    fun(5);//it will call the exact match
           // as eExact match takes the highest priority
    funct('v');

return 0;
}