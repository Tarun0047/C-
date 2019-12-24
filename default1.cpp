#include<iostream>
using namespace std;
void area(int l,int b){
int m;
m=l*b;
cout<<"\nArea of rectangle:"<<m;
}
void area(int a){
int z;
z=a*a;
cout<<"\nArea of square:"<<z;
}
void area(float m){
int z;
z=3.14*m*m;
cout<<"\nArea of circle:"<<z;
}
int main(){
area(10,20);
area(30);
area(55);
return 0;
}
