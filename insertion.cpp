#include<iostream>
using namespace std;
void insertion(int LA[],int ITEM,int POS){
int K,n,i;
int UB=n-1;
for(K=UB;K>=POS;K--){               //K will go to UB to POS and decrease its value
    LA[K+1]=LA[K];
}
	LA[POS]=ITEM;
 //   UB++;

cout<<"\nThe resultant array is:";          //Displaying the array
for(i=0;i<=n;i++){                   
    cout<<"\n"<<LA[i];
}}
int main(){
int a[10],i,n,itm,pos;
cout<<"How many elements:";
cin>>n;
cout<<"Enter the number of elements:\n";
for(i=0;i<n-1;i++)
    {
    cin>>a[i];
}
cout<<"Enter the item to insert:";
cin>>itm;
cout<<"\nEnter the position:";
cin>>pos;
insertion(a,itm,pos);
return 0;
}
