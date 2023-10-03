//We can solve the previous ques using loop.
#include<bits/stdc++.h>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int age;
    int marks;
    long long contact;
    char uid[50];
};

int main(int argc, char const *argv[])
{
    int i, n;
    student s[1000];
    for(i = 0; i <= 5; i++)
    {
        cout<<"Enter the details of "<<i<< " students"<<endl;
        cout<<"Enter your name: ";
        cin>>s[i].name;
        cout<<"Enter your roll no.: ";
        cin>>s[i].roll;
        cout<<"Enter your Age: ";
        cin>>s[i].age;
        cout<<"Enter your marks: ";
        cin>>s[i].marks;
        cout<<"Enter your contact num: ";
        cin>>s[i].contact;
        cout<<"Enter yyour uid: ";
        cin>>s[i].uid;
    }

    cout<<"Details of employees are: ";
    for (int i = 0; i <= 5; i++)
    {
        cout<<"Entered name is: "<<s[i].name<<endl;
        cout<<"Roll number entered is: "<<s[i].roll<<endl;
        cout<<"Age is: "<<s[i].age<<endl;
        cout<<"Marks obtained: "<<s[i].marks<<endl;
        cout<<"Contact details are: "<<s[i].contact<<endl;
        cout<<"Uid of the student is: "<<s[i].uid<<endl;
    }
    
    return 0;
}

