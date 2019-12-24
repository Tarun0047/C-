#include<iostream>
using namespace std;
class rational
{
    double numerator,denominator;
public :
    rational(){
         numerator =0;
         denominator=0;
    }
    rational(double x ,double y)
    {
        numerator=x;
        denominator=y;
    }
    void reduce ();
     void operator +(rational);
     
	 void display()      //display
     {
         cout<<numerator<<"\\"<<denominator;

     }
      friend ostream & operator << (ostream &out, rational &obj)
     {
          out<<obj.numerator<<"\\"<<obj.denominator;
         return out;
     }
     friend istream &operator >>(istream &stream, rational &obj )
     {
         cout<<"enter the numerator : ";

          stream>>obj.numerator;
          cout<<"enter the denominator :";
          stream>>obj.denominator;
         return stream;
     }

};
void rational ::operator+(rational c)
{

double tempnumeratior= numerator + c.numerator;
double tempdenominator=denominator+c.denominator;
rational(tempnumeratior,tempdenominator);
display();
}

void rational::reduce(){

cout<<"\nAfter reducing \n";
int gcd,a,b,t;
  
  a = numerator;
  b = denominator;

  while (b != 0) 
  {
    t = b;
    b = a % b;
    a = t;
  }
  gcd=a;
  
  numerator =numerator/a;

  denominator =denominator/a;

}


int main()
{
    rational obj();
    cin>>obj;
    cout<<obj;
    cout<<"\n";
    obj.reduce();
    cout<<obj;

}

