/*
3)Aim: - WAP to create database of the following items: 
Name of the student (String), 
Roll number of the student (int), 
Height of the student (cm), 
Weight of the student (kg/gms)

a) Create a Constructor to initialize values
b) Create display () function to display the details
c) Illustrate the use of copy constructor
d) Also implement the concept of destructor. 


*/
#include<bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int roll;
    int height;
    int weight;
    public:
    Student(string n, int r, int h, int w)
    {
        name = n;
        roll = r;
        height = h;
        weight = w;
        cout<<"Constructor called"<<endl;
    }

    void display()
    {
        cout<<endl<<endl;
        cout<<"----------STUDENT'S DETAILS---------"<<endl;
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"Roll no. of the student: "<<roll<<endl;
        cout<<"Height of the student is: "<<height<<" cm"<<endl;
        cout<<"Weight of the student is: "<<weight<<" kg"<<endl;
        cout<<endl;
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    cout<<endl<<endl;
    Student s1("Shivam pandey", 12, 174, 61);
    Student s2(s1);
    s2.display();
    cout<<endl;
return 0;
}





















































// //worling of FriedFunction
// //measure distance in meter and return the same back
// #include<bits/stdc++.h>
// using namespace std;

// class Dist
// {
// private:
//     int meter;

//     friend int Sum(Dist);

// public:
//     Dist() : meter(0) {}
// };

// int Sum(Dist d)
// {

//     d.meter += 30;
//     return d.meter;
// }

// int main()
// {
//     Dist D;
//     cout << "Distance is: " << Sum(D);
//     return 0;
// }