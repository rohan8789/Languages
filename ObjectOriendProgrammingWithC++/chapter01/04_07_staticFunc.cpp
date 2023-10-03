#include <bits/stdc++.h>
using namespace std;

class employee
{

    string name;
    int age;
    string destignation;
    double salary;
    static string company;

public:
    void setdata(string s, int a, string d, double x, string c)
    {
        name = s;
        age = a;
        destignation = d;
        salary = x;
        company = c;
    }

    void getdata(void)
    {
        cout << endl;
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "destignation is: " << destignation << endl;
        cout << "Salary is: " << salary << endl;
        cout << "company is: " << company << endl;
        cout << endl;
    }
    static void getcompany(string c)
    {
        company = c;
    }
};

string employee::company;

int main(int argc, char const *argv[])
{
    employee rohan, sameer, rishav, monu, sonu;
    rohan.setdata("Rohan Singh", 20, "Patna", 80000, "Google");
    rohan.getdata();
    employee::getcompany("IBM");
    rohan.getdata();

    sameer.setdata("Sameer singh", 21, "Delhi", 55000, "Accenture");
    sameer.getdata();
    employee::getcompany("Samsung");
    sameer.getdata();

    rishav.setdata("Rishav Jayker", 22, "Dehradun", 62600, "StockMarketing");
    rishav.getdata();
    employee::getcompany("SelfEmployed");
    rishav.getdata();

    monu.setdata("Monu singh", 23, "patna", 75000, "jrProgrammer");
    monu.getdata();
    employee::getcompany("FreeLancing");
    monu.getdata();

    sonu.setdata("Sonu singh", 25, "mumbai", 55600, "TheStRegis");
    sonu.getdata();
    employee::getcompany("GrandHayat");
    sonu.getdata();

    return 0;
}
