#include<iostream>
using namespace std;
class DM
{
int m,cm;	
DM()
{
}
DM(int x, int y)
{
}
friend void exchange(DM& ,DB&);
};
class DB
{
int feet,inches;
DB()
{
	feet=0;
	inches=0;
}
DB(int x, int y)
{
	feet=x;
	inches=y;
}
friend void exchange(DM&,DB &);
				
};
void exchange(DM & x,DB & y)
{
	DB.x=DM.m*3.2804+DM.cm*0.394+DB.feet+DB.inches
}
int main()
{
float a,b;
cout<<"\nEnter two values";
cin>>a>>b;
cout<<"\nEnter your choice 1 to convert m,cm to feet inche and 2 for ft,inches to m,cm "
cin>>choice;
switch(choice)
{
	case 1:
		cout<<"\nDo you want to convert another m,cm into feet and inches:";
		DM dm(a,b);
		dm.exchange()
		break;
	case 2:
		cout<<"\nDo you want to convert feet inches into meter and centimeter:";
		DB db(a,b)
		break;
	default:
	cout<<"\nInvalid choice";
	break;	
		
}
}









