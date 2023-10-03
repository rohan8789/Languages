//Static Binding-- Compile time binding

#include<iostream>
using namespace std;

class Vehicle
{ 
public: 

void print()
 { 
    cout << "This is a Vehicle! "<<endl; 
} 
    
}; 
class Scooter: public Vehicle
{
    public:
    void print()
    {
        cout << "This is a Scooter! "<<endl; 
    }
};
int main() 
{ 
    Vehicle *vptr; //base class pointer
    Vehicle v1;  //base class object
    
    vptr=&v1;  //vptr is pointer to object of base class
    
    vptr->print();
    
    Scooter s1; //object of derived class
    vptr=&s1;  //vptr is pointer to object of derived class
    
    vptr->print();
    
 return 0;
    
}