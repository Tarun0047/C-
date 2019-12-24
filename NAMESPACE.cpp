#include<iostream>
using namespace std;
namespace first
{
	void sayhello()
	{
		cout<<"Hello first namespace"<<endl;
	}
}
namespace second
{
	void sayhello()
	{
		cout<<"hello second";
	}
}
int main()
{
	first::sayhello();
	second::sayhello();
	return 0;
}
