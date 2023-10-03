#include <bits/stdc++.h>
using namespace std;

class patient
{
    int id;
    string disease;
    string result;

public:
    string name;
    void setData(int x, string d, string r)
    {
        id = x;
        disease = d;
        result = r;
        // cout<<"Enter your name: "<<endl;
        // cin>>name;
        // cout<<"Enter id: "<<endl;
        // cin>>id;
        // cout<<"Enter disease: "<<endl;
        // cin>>disease;
        // cout<<"Enter result: "<<endl;
        // cin>>result;
    }
    void getData(void)
    {
        cout << "Name is: " << name << endl;
        cout << "id is: " << id << endl;
        cout << "Disease is: " << disease << endl;
        cout << "Result: " << result;
    }
};

int main(int argc, char const *argv[])
{
    patient p;
    
    p.name = "Sameer Singh";
    p.setData(12, "Corona", "+ve"); 
    p.getData();
    // p.name = "ROhan Singh";
    // p.id = 23;
    // p.result = '+';
    // p.disease = "coronA";

    return 0;
}
