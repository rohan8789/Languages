/*
Switching time >>> excution time

then, we make it an inline function.

Ques>> when switching time id greater than execution time ??

FUNCTION CAN NOT BE INLINE IF,  
for function which return the value, If your code have loop switch etc inline function will not work.
static function in a code will not become inline
recursive function can not be inline.
for function having no return value, but a return statement 

define such function outside the class
*/
#include<bits/stdc++.h>
using namespace std;

inline int sum(int x, int y) 
{
    cout<<x+y<<endl;  
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<sum(a, b)<<endl;
    cout<<sum(a, b)<<endl;
    cout<<sum(a, b)<<endl;
    cout<<sum(a, b)<<endl;
    cout<<sum(a, b)<<endl;
    cout<<sum(a, b)<<endl;
    

    
return 0;
}