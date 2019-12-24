#include<iostream>
using namespace std;

	void disp()
	{
		int x;
		try
		{
			cout<<"Enter a number to throw:";
			cin>>x;
		    throw x;	
		}
		catch(int no)
		{
			throw;
		}
	}
int main()
{
	try
	{
		disp();
	}
	catch(int no)
	{
	cout<<"Exception is caught the number is:"<<no;	
	}
	return 0;
}
