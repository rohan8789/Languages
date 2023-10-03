#include<bits/stdc++.h>
using namespace std;

class alpha
{
    int data1;
    public:
    alpha(int i)
    {
        data1 = i;
        cout<<"Constructor called for alpha class: "<<endl;
    }

    void printalpha(void)
    {
        cout<<"The value of data1 is: "<<data1<<endl;   
    }
};

class beta
{
    float data2;
    public:
    beta(float j)
    {
        data2 = j;
        cout<<"Constructor called for beta class: "<<endl;
    }

    void printbeta(void)
    {
        cout<<"THe value of data2 is: "<<data2<<endl;
    }
};

class gamma : public alpha, public beta
{
    int data3;
    int data4;
    public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        data3 = c;
        data4 = d;
        cout<<"constructor called for gamma class"<<endl;
    }
    void printdatagamma(void)
    {
        cout<<"The value of data3 is: "<<data3<<endl;
        cout<<"The value of data4 is: "<<data4<<endl;
    }
};

int main(int argc, char const *argv[])
{
    gamma Rohan(2, 3.8, 6, 7);
    Rohan.printalpha();
    Rohan.printbeta();
    Rohan.printdatagamma();
    return 0;
}


