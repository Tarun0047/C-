#include<iostream>
using namespace std;

int main(){
int loc,itm,n,flag=0;
int beg,mid,end;
int a[15];

cout<<"How many elements u need:";
cin>>n;

cout<<"Enter"<<n<<" elements:";
for(int i=0;i<n-1;i++){
    cin>>a[i];
}
cout<<"Enter the item to be searched:";
cin>>itm;
loc=0;
beg=0;
mid=int((beg+end)/2);
end=n-1;


while((beg<=end) && (itm=!a[mid])){
    if (itm==a[mid]){
    cout<<"Search:";
    loc=mid;
    cout<<"Position:"<<loc+1;
    flag=flag+1;
}
else if (itm<a[mid]){
        end=mid-1;
    }
    else{
        beg=mid+1;
    }
    if(flag==0){
        cout<<"Search is unsuccessful";
    }
    return 0;
}}

