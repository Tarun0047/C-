#include<iostream>
using namespace std;

class car{
//int x,y;
//char c[10];
//char n[10];
int cc;                       ///variables in car
//char color[10];
int rcno;
//char name[10];
public:

  void get(){               ///getting cc and rcno
  cin>>cc>>rcno;}

  void dis(){                            ///displaying cc and rcno
  cout<<"CC:"<<cc<<endl<<"RC:"<<rcno;
  }

  car(){          ///default    constructor
  cc=0;
  rcno=0;}

  car(int m,int n){    ///parameter    constructor
  cc=m;                ///initializing m value in cc
  rcno=n;              ///initializing n value in rcno
  }
  };
  int main(){
  car c1=car(1000,12345);            //explicit
  //car c1();
  c1.get();
  c1.dis();
  car c2(2000,6785);			    //implicit
  //c2.get();
  //c2.dis();
  return 0;
  }
   // car(){
   // name='alto';
   // cc=1000;
   // color='black';
   // rcno=1234;
   // }
  /* (int cc,char color,int rcno,char name)
    {
      int x=cc;
       int y=rcno;
       char c=color;
       char n=name;
    }*/
//};
