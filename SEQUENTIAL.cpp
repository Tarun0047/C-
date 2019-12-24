#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	char strin[80];
	cout<<"Enter Name:";
	cin>>strin;
	
	int len=strlen(strin);
	fstream file;
	file.open("TEXT",ios::in|ios::out);
	
	for(int i=0; i<len; i++){
		file.put(strin[i]);
	}
	file.seekg(0);
	char ch;
	while(file){
		file.get(ch);
		cout<<"ch";
	}
	return 0;
}
