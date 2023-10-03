#include <iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"This is class A!"<<endl;
    }
    
};

class B: public A //single level inheritance
{
    public:
   void show()    //function overriding 
    {
        cout<<"This is class B!"<<endl;
    }
    
};
/*class C: public A, public B
{
    
    public:
   /*void show()
    {
        cout<<"This is class C!"<<endl;
    }*/
//}; 
int main() {

B b1;
b1.show();

b1.A::show();


A a1;
a1.show();

    return 0;
}
