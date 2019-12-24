#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class account
{
protected:
char name[20];
long int accno;
char type;
int bal;
public:
account()
{
strcpy(name," ");
accno=0;
type=' ';
bal=0;
}
void input()
{
cout<<"\nEnter name:";
cin>>name;
cout<<"Enter accno:";
cin>>accno;
cout<<"Enter type:";
cin>>type;
cout<<"Enter bal:";
cin>>bal;
}
void display()
{
cout<<"\nCustomer Name:"<<name;
cout<<"\nAccount Number:"<<accno;
cout<<"\nType:"<<type;
cout<<"\nBalance:"<<bal;
}
void deposit()
{
int amt;
cout<<"Enter the amount to deposit:";
cin>>amt;
bal=bal+amt;
}
};
class savacct:public account
{
int inter;
public:
int comp_int()
{
int t,r;
r=10;
cout<<"Enter the time:";
cin>>t;
inter=bal*pow(1+r/100.0,t)-bal;
return inter;
}
int update_bal()
{
bal=bal+comp_int();
return bal;
}
void withdrawal()
{
int amt;
cout<<"Enter amount to withdrawn:";
cin>>amt;
if(bal>=amt)
{
bal=bal-amt;
}
else
{
cout<<"The amount cannot be withdrawn:";
}
}
};
class curacct:public account
{
int chq_bk;
int penal;
public:
int min_bal()
{
int ret1=1;
if(bal<=500)
{
penal=50;
bal=bal-penal;
ret1=0;
}
else
{
cout<<"No penality imposed\n";
}
return ret1;
}
void withdrawal()
{
int amt;
cout<<"Enter the amount to withdrawn:";
cin>>amt;
int k=min_bal();
if(k==1)
{
if(bal>=amt)
bal=bal-amt;
}
else
{
cout<<"The amount cannot be withdrawn:";
}
}
};
int main()
{
system("cls");
curacct c1;
savacct s1;
s1.input();
s1.deposit();
s1.comp_int();
s1.update_bal();
s1.withdrawal();
s1.display();
c1.input();
c1.deposit();
c1.withdrawal();
c1.display();
getch();
return 0;
}
