//Making bank deposit with prinicpal value, year and interest rate
#include<bits/stdc++.h>
using namespace std;
class bankDeposit
{
    int pValue;
    int year;
    float interestRate;
    float returnValue;

    public:
    bankDeposit(){};
    bankDeposit(int p, int y, float r)
    {
        pValue = p;
        year = y;
        interestRate = r;
        returnValue = pValue;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1+interestRate);
        }
    }
    bankDeposit(int p, int y, int r)
    {
        pValue = p;
        year = y;
        interestRate = float(r)/100;
        returnValue = pValue;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1+interestRate);
        }
    }
    void Display(void)
    {
       cout<<"Principle amount was "<<pValue<<
        " return value after "<<year<< "years is: "<<returnValue<<endl;
    }
};

int main(int argc, char const *argv[])
{
    bankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;
    cout<<"Enter the value of p, y, r: ";
    cin>>p>>y>>r;

    bd1 = bankDeposit(p, y, r);
    bd1.Display();

    cout<<"Enter the value of p, y, R: ";
    cin>>p>>y>>R;

    bd2 = bankDeposit(p, y, R);
    bd2.Display();
    return 0;
}
