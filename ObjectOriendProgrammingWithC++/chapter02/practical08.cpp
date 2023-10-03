#include<bits/stdc++.h>
using namespace std;

class Electricity
{
    protected:
    int unit, cost;
    public:
    virtual void bill(){
        cout<<"Enter the unit used: ";
        cin>>unit;
        if(unit >0 && unit<=300){
            cost = 0.5*unit;
        }
        if(unit>300){
            cost=0.6*unit;
        }
    }
};

class More_Electricity : protected Electricity
{
    float diff, extra, Tcost;
    public:
    void bill(){
        Electricity::bill();
        if(cost > 250.00){
            diff = cost - 250.00;
            extra = diff*0.15;
            Tcost = cost + extra;
            cout<<"Bill cost for Extra Electrivity is: "<<Tcost<<endl;
        }
        else{
            cout<<"Electricity bill is: "<<cost<<endl;
        }
        
    }
};

int main()
{
    More_Electricity e;
    e.bill();
    
return 0;
}