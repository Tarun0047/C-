#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("Country");
	fout<<"USA";
	fout<<"Canada";
	fout<<"UK";
	fout<<"INDIA";
	
	const int N=80;
	char line[N];
    
	ifstream fin;
	fin.open("Country");
	while(fin)
	{
		fin.getline(line N);
		cout<<line;
	}
	fin.close();
return 0;
}
