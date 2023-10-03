//Example1 of Try Catch

#include<iostream>
using namespace std;

int main()
{
    int x,y,res;
    cout<<"Enter values of x and y: ";
    cin>>x>>y;
    cout<<endl;
    
    try  //try block
    {
        if(y==0)
        {
            throw 'e'; //throw keyword-- will throw the exception
        }
        res=x/y;
        cout<<"Result is:  "<<res<<endl;
    }
    catch(char ex)  //handle the exception-- take some corrective action
    {
        cout<<"Denominator is zero! Enter the correct value for y!"<<endl;
    }
    
   
    
    return 0;
}