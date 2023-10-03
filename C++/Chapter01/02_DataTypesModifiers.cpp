
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int a;  //initialization
  a = 15; //decleration
  float b = 23.45;
  char ch = '%';
  bool d = 0;

  cout << "size of int a is: " << sizeof(a) << endl;
  cout << "size of floating point number b is: " << sizeof(b) << endl;
  cout << "Size of Given Character ch is: " << sizeof(ch) << endl;
  cout << "Size of boolean number d is: " << sizeof(d) << endl;

  short int si;   
  long int li;
  long long int lli;
  cout << "Size of shortint si is: " << sizeof(si) << endl;
  cout << "Size of longint li is: " << sizeof(li) << endl;
  cout << "Size of longlongint lli is: " << sizeof(lli) << endl;

  return 0;
}

/*data types are of three types----> primitive, derived, user defined.
  primitve ----> int float char boolean
  derived ----> function array pointer reference
  user defined ----> class structure union enum
  
  */