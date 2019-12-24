#include<iostream>
using namespace std;
class car{
int x,y;
string c;
string n;
int cc;string color;int rcno;string name;
public:
    car(){
    name="alto";
    cc=1000;
    color="black";
    rcno=1234;
    }
    car(int cc,string color,int rcno,string name)
    {
        x=cc;
        y=rcno;
        c=color;
        n=name;
    }
};
