#include<iostream>
using namespace std;
int factorial(int n);
int main()
{/*
    int a [6] ={1,4,6,7,8,5};
    int n;
    cout << " enter the no whic h  u want to search  : ";
    cin >>n;
    int i;
    for (int  i=0 ;i< 6; i++ ){
        if (a[i]==n){
            cout<< " element is found on "<<i+1;
            break;
        }
    }
    if (i==6){
        cout<< " element is not found :";
    }*/
    int n;
    cout<<" enter the no to find factorial : " ;
    cin >>n;
    cout<<" " <<endl;
     int fact=factorial(n);
    cout<<fact;
    return 0;
}
int factorial (int n){

if (n==0 && n==1){
    return 1;
}
else
{


return (n* factorial(n-1));
}
}
