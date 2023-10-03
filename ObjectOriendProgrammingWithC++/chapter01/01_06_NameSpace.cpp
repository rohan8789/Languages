#include<iostream>
using namespace std;

namespace ns1
{
    void fun(void)
    {
        cout<<"Hello World"<<endl;
    }
}

int main(int argc, char const *argv[])
{
    ns1::fun();
    return 0;
}
