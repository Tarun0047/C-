#include<iostream>
using namespace std;
class product{           ///class is bye default private
int srno;
float price;
public:
void get()
{
cout<<"Enter your product details:";         ///Members of this class which can access the data
cout<<"\nSerial no:";
cin>>srno;
cout<<"Price:";
cin>>price;
}
void dis()
{
cout<<"\nSERIAL NO:"<<srno;
cout<<"\nPRICE:"<<price;
}
};
int main(){
product p;
p.get();
p.dis();
return 0;
}
