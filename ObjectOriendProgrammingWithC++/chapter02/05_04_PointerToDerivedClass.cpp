#include<bits/stdc++.h>
using namespace std;


class base{
    public:
    int n1;
    void display(){
        cout<<"This is base class: "<<n1<<endl;
    }
};

class derived:public base{
    public:
    int n2;
    void display(){
        cout<<"This is derived class: "<<n2<<endl;
    }
};

int main()
{
    //They will call their respective display function;
    // base *b=new base();
    // b->n1=34;
    // b->display(); 
    // derived* d=new derived();
    // d->n2=43;
    // d->display();


    //Even if the object is of derived class type, function of base class will be called because pointer is of base class type;<------this is late binding
    base *b=new derived();
    // b->n1=43;
    b->display();

    // derived* d= new base(); //error
    // d->display();
return 0;
}