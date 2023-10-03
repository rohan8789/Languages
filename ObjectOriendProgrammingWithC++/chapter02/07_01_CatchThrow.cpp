// Exception Handling
//Rethrowing the exception using throw keyword



#include<iostream>
using namespace std;

void divide(int a,int b)
{
    try
    {
        if(b==0)
        throw a;
        cout<<"a/b:  "<<a/b<<endl;
    }
    catch(int ex)
    {
        cout<<ex<<"  is not divisible by zero"<<endl;
        throw;  //rethrowing the exception
    }
    
}
int main()
{int a,b;
    cout<<"Enter the values of a and b:  "<<endl;
    cin>>a>>b;
    
    try
    {
        cout<<"This is main function!"<<endl;
        divide(a,b);
        cout<<"Back to main!"<<endl;
    }
    
    catch(int x)
    {
       cout<<"Enter b again!"<<endl;
       
    }
    cout<<"Main continues after catch!"<<endl;
    
    return 0;
}