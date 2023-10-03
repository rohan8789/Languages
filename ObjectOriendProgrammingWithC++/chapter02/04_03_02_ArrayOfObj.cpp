/*The problem:  cin>> leaves the newline character (\n) in the iostream.  
If getline is used after cin>>, the getline sees this newline character 
as leading whitespace, thinks it is finished and stops reading any further.
*/
#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int marks;
	public:
		void setData()
        {
            
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter marks: ";
            cin>>marks;
        }
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student *st= new Student[5];
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		st[i].setData();
	}

	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}

