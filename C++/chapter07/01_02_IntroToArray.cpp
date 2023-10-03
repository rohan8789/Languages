#include<iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
     int marks[] = {94, 99, 91, 88, 85};
     int MathsMarks[5];
     MathsMarks[0] = 85;
     MathsMarks[1] = 87;
     MathsMarks[2] = 89;
     MathsMarks[3] = 96;
     MathsMarks[4] = 91;

    //We can change the value of the array
    MathsMarks[3] = 51;
    marks[1] = 455;

    cout<<"These are maths marks\n";
    cout<<MathsMarks[0]<<endl;
    cout<<MathsMarks[1]<<endl;
    cout<<MathsMarks[2]<<endl;
    cout<<MathsMarks[3]<<endl;
    cout<<MathsMarks[4]<<endl;

    cout<<"these are the marks\n";
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
     return 0;
 }
 