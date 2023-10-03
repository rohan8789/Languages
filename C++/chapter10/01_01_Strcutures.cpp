//Why do we need structures ?
/*
we have array with us to store thousands of variables and their values
then, why do we need another term, structure which is similar to an array.
lets find out.

Strucutres are the user defined data type in c/c++ which allows us to
combine data of different types together together. same thing is done by array 
but for similar data type. structure stores the data in form of records.
*/

//print all the information of 5 student using structures
#include<bits/stdc++.h>
using namespace std;

char convert(char);

struct student
{
    int roll;
    int marks;
    long long contact;
    int age;
    char idno[30];
};

int main(int argc, char const *argv[])
{
    struct student Rohan = {12, 57, 9430648818, 20, "20BCS4835"};
    struct student Sameer = {16, 52, 8789471640, 19, "20BCS4836"};
    struct student Rishu = {14, 53, 9987362722, 20, "20BCS3840"};
    struct student Chandru = {07, 58, 943562722, 21, "20BCS4844"};
    struct student Rishav = {19, 49, 8687357322, 20, "20BCS4888"};

    cout<<"Entered name: "<<Rohan.roll<<endl;
    cout<<"Marks obtained: "<<Rohan.marks<<endl;
    cout<<"Contact number provided is: "<<Rohan.contact<<endl;
    cout<<"Your age is: "<<Rohan.age<<endl;
    cout<<"Your id number provided by university is: "<<Rohan.idno<<endl;

    cout<<"Entered name: "<<Sameer.roll<<endl;
    cout<<"Marks obtained: "<<Sameer.marks<<endl;
    cout<<"Contact number provided is: "<<Sameer.contact<<endl;
    cout<<"Your age is: "<<Sameer.age<<endl;
    cout<<"Your id number provided by university is: "<<Sameer.idno<<endl;

    cout<<"Entered name: "<<Rishu.roll<<endl;
    cout<<"Marks obtained: "<<Rishu.marks<<endl;
    cout<<"Contact number provided is: "<<Rishu.contact<<endl;
    cout<<"Your age is: "<<Rishu.age<<endl;
    cout<<"Your id number provided by university is: "<<Rishu.idno<<endl;

    cout<<"Entered name: "<<Chandru.roll<<endl;
    cout<<"Marks obtained: "<<Chandru.marks<<endl;
    cout<<"Contact number provided is: "<<Chandru.contact<<endl;
    cout<<"Your age is: "<<Chandru.age<<endl;
    cout<<"Your id number provided by university is: "<<Chandru.idno<<endl;

    cout<<"Entered name: "<<Rishav.roll<<endl;
    cout<<"Marks obtained: "<<Rishav.marks<<endl;
    cout<<"Contact number provided is: "<<Rishav.contact<<endl;
    cout<<"Your age is: "<<Rishav.age<<endl;
    cout<<"Your id number provided by university is: "<<Rishav.idno<<endl;
    
    return 0;
}
