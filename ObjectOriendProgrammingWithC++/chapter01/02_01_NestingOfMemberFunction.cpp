//Nesting of member function
/*
we know that the public function can be accessed by object of that class using dot operator
a member function can be called by using its name inside another member function
of the same class
Example
Use class to input and check  a binary number and convert to ones compliment and display it in main function
*/
#include <bits/stdc++.h>
using namespace std;

class binary
{
    string s;

    void chk_bin(void);
public:
    void read(void)
    {
        cout <<endl<<endl<< "Enter a binary  number: ";
        cin >> s;
    }
    void ones_c(void);
    void display(void);
};

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Input" << endl;
            exit(0);
        }
    }
}

void binary::ones_c(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << endl<< "Ones Compliment of the Given binary number is: "<<endl<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main(int argc, char const *argv[])
{
    binary b;
    b.read();
    //b.chk_bin();
    b.ones_c();
    b.display();

    return 0;
}

/*
but where is nesting of member function in above program
Actually, you can call it in the start of the upcoming function
i.e, 
instead of writing b.chk_bin(); in main function, you can directly
call it at the start of display function without using a dot operator
.
.
.
if i make the chk_bin or any function private, no one will be able to  access it
through main function
*/
