#include<iostream>
using namespace std;
int main()
{
	int a,b,d;
	char c,f,Y;
	do{
	cout<<"\nEnter First number, operator and second number:";
	cin>>a>>c>>b;
	switch(c)
	{
	case '+':	
			d=a+b;
			cout<<"\nAnswer is:"<<d;
    break;
    case '-':	
			d=a-b;
			cout<<"\nAnswer is:"<<d;
    break;
	case '*':	
			d=a*b;
			cout<<"\nAnswer is:"<<d;
    break;
	case '/':	
			d=a/b;
			cout<<"\nAnswer is:"<<d;
    break;
	default:
	      cout<<"\nInvalid operation:";
	break;
	  	
}
cout<<"\nDo another(Y/N):";
cin>>f;	
}while(f!='N');

return 0;
}

