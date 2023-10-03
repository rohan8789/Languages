#include<bits/stdc++.h>
using namespace std;

class student
{
    int rollno;
    public:
    void getnum(int r){
        rollno=r;
    }
    void putnum(){
        cout<<"Rollno is: "<<rollno<<endl;
    }
};

class test: virtual protected student
{
    protected:
    double marks;
    public:
    void getmarks(double m){
        marks=m;
    }
    void putmarks(){
        cout<<"Marks Obtained: "<<marks<<endl;
    }
};

class sports : virtual protected student
{
    protected:
    double score;
    public:
    void getscore(double s){
        score = s;
    }
    void putscore(){
        cout<<"Score Obtained: "<<score<<endl;
    }
};

class result : protected test, protected sports
{
    double total;
    public:
    void getTotal(int t){
        total = t;
    }
    void Display(){
        cout<<endl<<endl;
        getnum(12);
        putnum();
        getmarks(97.13);
        putmarks();
        getscore(95.34);
        putscore();
        total = marks + score;
        cout<<"Total marks and score obtained(out of 200) is: "<<total<<endl;
        cout<<endl<<endl;
    }
};

int main()
{
    result r1;
    r1.Display();

return 0;
}