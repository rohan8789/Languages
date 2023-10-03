#include<iostream>
using namespace std;

namespace ns1
{
    float var = 4.4;
}
namespace ns2
{
    int var = 4;
}
namespace ns3
{
    int var = 12;
    char b = 'B';
}

//using ns3::var;
using namespace ns3;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<"Hello World\n";
    cout<<ns1::var<<endl;
    cout<<var<<endl;
    cout<<var<<" "<<b<<endl;
    cout<<ns2::var<<endl;
    //cout<<var<<endl;
    return 0;
}
