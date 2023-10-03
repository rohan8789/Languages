//This Pointer 

#include <iostream> 
using namespace std;   

class ABC
{
    int x;
    string name;
    
    public:
    //this is a pointer which referes to the calling object
    void assign(int x,string name)  //x=6
    {
        this->x=x;  //ambiguous or confusing
        this->name=name;
    }
    void display()
    {
        cout<<"x= "<<x<<endl;
        cout<<"Name=  "<<name<<endl;
    }
};
int main()
{
    ABC obj1;
    obj1.assign(6,"Harman");
    obj1.display();
    return 0;
}