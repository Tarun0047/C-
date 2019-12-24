#include<iostream>
using namespace std;

template<class T>

class bucky{
	T first, second;         //generic datatype
	public:
		bucky(T a,T b){
			first=a;
			second=b;
		}
		T bigger();
};

template<class T>    //we alwayyyyys neeeeeeeeeeeed functiiiiiiiiionnn defination dont know why they give kinda screwed oops

T bucky<T>::bigger()             //we use T becase function parameter must be same in class as use   kinda weeeeeird and stupidddddddddddd 
{
   	return(first>second?first:second);
}	

int main()
{
	bucky <int> bo(69,105);   //weeee neeed to explictly addd INT diffeternt type of integer
	cout<<bo.bigger();                  //notice we don't need to to add formal parameter in bigger because by :: it hassssssss it
}
