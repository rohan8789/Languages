#include<bits/stdc++.h>
using namespace std;

class alpha
{
    protected:
    int data1;
    public:
    alpha(int a)
    {
        data1 = a;
        cout<<"Constructor for alpha called"<<endl;
    }
    void printalpha(void)
    {
        cout<<"Value of a is: "<<data1<<endl;
    }
};

class beta
{
    protected:
    float data2;
    public:
    beta(float b)
    {
        data2 = b;
        cout<<"Constructor for beta called"<<endl;
    }
    void printbeta(void)
    {
        cout<<"Vlaue of b is: "<<data2<<endl;
    }
};

class gamma : public alpha, public beta
{
    protected:
    int data3, data4;
    public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        data3 = c;
        data4 = d;
        cout<<"Constructor for gamma class called"<<endl;
    }
    void printgamma(void)
    {
        cout<<"value of c is: "<<data3<<endl;
        cout<<"Value of d is: "<<data4<<endl;
    }
};

int main()
{
    gamma g(3, 5.2, 6, 9);
    g.printalpha();
    g.printbeta();
    g.printgamma();
return 0;
}