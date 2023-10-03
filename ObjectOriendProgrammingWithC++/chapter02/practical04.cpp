#include<bits/stdc++.h>
using namespace std;

class publication
{
    protected:
    string tittle;
    float price;
    public:
    void getdata(){
        cout<<"Enter Tittle: ";
        cin>>tittle;
        cout<<"Enter price: ";
        cin>>price;
    }
    void putdata(){
        cout<<"Tittle of the publication is: "<<tittle<<endl;
        cout<<"Price of the book is: "<<price<<endl;
    }
};

class book : public publication
{
    int page;
    
    public:
    void getdata(){
        cout<<endl<<endl;
        publication::getdata();
        cout<<"Enter pages: ";
        cin>>page;
        cout<<endl;
        
    }
    void putdata(){
        publication::putdata();
        cout<<"Pages are: "<<page<<endl;
        cout<<endl<<endl;
        
    }
};

class tape : public publication
{
    float min;
    public:
    void getdata(){
        cout<<endl;
        publication::getdata();
        cout<<"Enter duration of tape played(in minutes): ";
        cin>>min;
    }
    void putdata(){
        publication::putdata();
        cout<<"Duration of tape played: "<<min<<endl;
        cout<<endl<<endl;
    }
};


int main()
{
   book b1;
   tape t1;
   b1.getdata();
   t1.getdata();

   b1.putdata();
   t1.putdata(); 


return 0;
}