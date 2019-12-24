#include<iostream>
using namespace std;
int main(){
int a[50],i,n,itm,loc;
cout<<"Enter the number of element:";
cin>>n;
cout<<"Enter the numbers:"<<endl;
for(i=0;i<=n-1;i++){
    cin>>a[i];
}
cout<<"Enter the no to be searched:";
cin>>itm;
for(i=0;i<=n-1;i++){
    if(itm==a[i]){
        loc=i;
        break;
    }
}
if(loc>=0){
    cout<<itm<<" is found in on:"<<loc+1;
}
else{
    cout<<endl<<"Item does not exist";
}
return 0;
}
