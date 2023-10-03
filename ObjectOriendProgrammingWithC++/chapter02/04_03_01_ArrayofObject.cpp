#include<bits/stdc++.h>
using namespace std;

class item
{
    int id; 
    float price;
    public:
    void setdata(int d, float p)
    {
        id = d;
        price = p;
    }
    void getdata(void)
    {
        cout<<"Id of the item is: "<<id<<endl;
        cout<<"Price of the item is: "<<price<<endl;
    }
};

int main()
{
    int size = 4;
    int p;
    float q;
    item *it = new item[size];
    item *tempit = it; //just like linked list nodes
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of the item: "<<i+1<<endl;
        cin>>p>>q;
        it->setdata(p, q);
        //since we are changing the name of the object 4 times
        //we will update the name of the object like it, it1, it2...
        it++;
        /*when last iteration will finish, the last value of it++
         will point somewhere else and if we will cont to call
        it++ in next loop, it will create confusion and will
        given garbage value. To solve this, make duplicate var of it
        and store it there. 
        */
    }

    for (int i = 0; i < size; i++)
    {
        tempit->getdata();
        tempit++;
    }
    
    
return 0;
}