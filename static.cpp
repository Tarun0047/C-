///Static is a keyword to preserve the value of a variable
///when a variable is declared as static,it is initialized to zero
///static variable is stored in memory and the default value for static value is ZERO
#include<iostream>
using namespace std;

class test{
int number;

static int count;
public:
    void get(int);
    void disp();
};

void test::get(x)
{
number=x;
cout<<"Number:"<<number;
count++;
}

void test::disp()
{
cout<<"Count:"<<count;
}

int test::count;

int main(){
test t1,t2;                    ///OBJECTS OF CLASS
t1.disp();
t2.disp();
t1.get(100);
t1.disp();
return 0;
}

