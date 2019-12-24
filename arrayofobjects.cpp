#include<iostream>
using namespace std;
class product
{
    int sno;
public:
    void get(){
    cin>>sno;
    }
    void dis(){
    cout<<sno;
    }
};
int main(){
int i;
product p[i];              ///we don't have to repeat many time as this enables us to write
for(i=0;i<=9;i++){
    p[i].get();
}
for(i=0;i<=9;i++){
    p[i].dis();
}
return 0;
}


