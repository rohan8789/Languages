//getting and displaying students data in terms of their private and public data

#include<bits/stdc++.h>
using namespace std;

class studentData
{
    private:
    int marks;
    public:
    string name;
    int roll; 
    long long contact;
    void setData(int csemarks);
    
    friend studentData setData(studentData data01);

    void getData()
    {
        cout<<"Your Name: "<<name<<endl;
        cout<<"Your roll no: "<<roll<<endl;
        cout<<"Your contact num: "<<contact<<endl;
        cout<<"Your Marks: "<<marks<<endl;
    }
};

studentData setData(studentData data01)
{
    
} 

int main(int argc, char const *argv[])
{
    studentData data01, data02;
    data01.name = "VISHESH SINGH";
    data01.roll = 31;
    data01.contact = 8789471640;
    // data01.setData(97);
    data02 = setData(data01);
    data01.getData();

    return 0;
}
