#include<iostream>
#include<fstream>
using namespace std;

class student
{
	int roll,marks;
	char name[8];
	public:
		void get()
		{
			cout<<"\nEnter data:\n";
			cout<<"\nRoll No:";
			cin>>roll;
			cout<<"\nName:";
			cin>>name;
			cout<<"Marks:";
			cin>>marks;
		}
		void dis()
		{
			cout<<"Name:"<<name;
			cout<<"\nRoll No:"<<roll;
			cout<<"\nMarks:"<<marks;
		}
};
int main()
{
	ofstream fout;
	student s;
	int n,i;
	fout.open("Student.txt",ios::binary);
	cout<<"Writing File:";
	for(int i=0; i<1; i++)
	{
		s.get();
		fout.write((char*)&s,sizeof(s));
	}
	fout.close();
	
	ifstream fin;
	fin.open("Student.txt",ios::binary);
	fin.read((char*)&s,sizeof(3));
	
	while(!fin.eof())
	{
		s.dis();
			fin.read((char*)&s,sizeof(s));
		}
	fin.close();
	return 0;	
}
