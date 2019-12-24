#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream buckyfile;  //file object
	buckyfile.open("C:\tuna.txt");           //automatically create fiel for u 
	
	buckyfile<<"I love tuna and tuna loves me!\n";
	buckyfile.close();
	
	
}
