#include<iostream>
using namespace std;

template<class T>
class spunky{
	public:
		spunky(T x){
			cout<<x<<" is not character!"<<endl;
		}
};

template<>           //this is the line we are telling cpp that we are using template specialization
class spunky<char>{                   //since u r using template specialization so what type of data for specialize
public:
	spunky(char x){
		cout<<x<<" is indeed!!! a character"<<endl;
	}
};

int main()
{
spunky <int> obj1(7);	
spunky <double> obj2(3.156);	
spunky <char> obj3('q');	

	return 0;
}
