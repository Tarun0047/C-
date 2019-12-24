#include<iostream>
using namespace std;

inline int square(int n){
return(n*n);
}

int main(){
int a=1,num;
while(a<=2){
    cout<<"Enter the no:";                     ///REPEAT TILL A<=2 AND ENTER THE NUMBER
    cin>>num;
    a++;
}
cout<<"The value of number after squaring:"<<square(num);   ///CONCEPT OF INLINE FUNCTION
return 0;
}
