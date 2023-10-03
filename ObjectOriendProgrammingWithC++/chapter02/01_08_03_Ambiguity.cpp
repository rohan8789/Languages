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

class B
{
    public:
   void show()
    {
        cout<<"This is class B!"<<endl;
    }
    
};
class C: public A, public B
{
    public:
    void show(){
        cout<<"This is ambiguity"<<endl;
    }
}
;
int main() {

C obj1;
obj1.show();
obj1.A::show(); //resolving ambiquity
obj1.B::show();
    return 0;
}
