#include<iostream>
using namespace std;

int main(){
float amount;
float value(float p, int n,float r=0.15);         ///Default arguments
void printline(char ch='*',int lin=40);            ///Default arguments
printline();                                       ///Calling default arguments
amount=value(5000.00,5);
cout<<"amount:"<<amount;
amount=value(100.5,3,0.30);
printline('=');                                   ///taking default value
//printline('2');

return 0;
}
float value(float p,int n,float r){
int year=1;
float sum=p;
while(year<=n){
    sum=sum*(1+r);
    year=year+1;
}
return sum;
}
void printline(char ch, int lin){
for(int i=1;i<=lin;i++)
cout<<ch;
}
