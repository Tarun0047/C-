#include<iostream>
using namespace std;
class point{
int x,y;
public:
    void get(){
    cin>>x>>y;
    }
    void dis(){
    cout<<x<<y;
    }

point(){                    ///Default constructor
x=0;
y=0;
}
point(int m, int n)          ///Parameter constructor
{
    x=m;
    y=n;
}
};
int main(){
point z=point(5,20);                      ///Explicit
point p(10,20);                           ///Implicit
p.get();
p.dis();
return 0;
}
