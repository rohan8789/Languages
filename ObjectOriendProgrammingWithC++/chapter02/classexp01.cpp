#include<bits/stdc++.h>
using namespace std;

class cgc
{
    public:
    cgc()
    {
        cout<<"constructor group called"<<endl;
    }
    void gpcollege()
    {
        cout<<"THis is group of college"<<endl;
    }
};

class cu : public cgc
{
    public:
    cu()
    {
        cout<<"Constructor college01 called"<<endl;
    }
    void college01()
    {
        gpcollege();
        cout<<"THis is cu"<<endl;
    } 
};

class ptu : public cgc
{
    public:
    ptu()
    {
        cout<<"Constructor ptu called"<<endl;
    }

    void college02()
    {
        cout<<"This is ptu"<<endl;
    }
};



int main()
{
    cu c1;
    ptu p1;
    c1.college01();
    p1.college02();

return 0;
}