//Pointer to Data Members
#include<iostream>
using namespace std;

class ABC
{ 
public: 
int a;  //data member of ABC
void print()
 { 
    cout << "a is "<< a<<endl; 
} 
    
}; 

int main() 
{ 
    ABC obj1;
    ABC *po;  //pointer of ABC class
    po=&obj1; //pointer po is pointing to Obj1
    
    obj1.a=45;
    obj1.print();
    po->a=60;
    po->print();
    
    int ABC::*ptr; //declared a pointer of int type for ABC class
    ptr=&ABC::a;  //ptr is pointing to data member a of the class
    
    obj1.*ptr=30;  //indirectly a=30
    obj1.print();
    
    po->*ptr=65;  //indirectly a=65
    po->print();
    
 return 0;
    
}