#include<iostream>
using namespace std;

template<class buckey>

int add(buckey x,buckey y)
{
	int z;
	z=x+y;
	cout<<"\nSum:"<<z;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers to add:\n";
	cin>>a>>b;
	add(a,b);
	return 0;
}
