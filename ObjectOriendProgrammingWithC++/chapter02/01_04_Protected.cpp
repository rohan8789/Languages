#include<bits/stdc++.h>
using namespace std;

class base
{
    protected:
    int a;
    private:
    int b;
};

/*
For a PROTECTED member
             public derivation      private derivation  protected derivation
1. private      Not inherited         Not inherited        Not inherited
2. protected      protected             private              protected
3. public         public                private              protected
*/

class derived : protected base
{

};

int main(int argc, char const *argv[])
{
    base b;
    derived d;
    //cout<<d.a<<endl; will not work since A is protected in base and derived class
    return 0;
}
