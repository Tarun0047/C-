#include<iostream>
using namespace std;
int main(){
int a[50],i,mid,beg,last,n,itm,loc;
cout<<"How many elements:";
cin>>n;
cout<<"Enter the number of elements:\n";
for(i=0;i<n-1;i++){
    cin>>a[i];
}
cout<<"Enter the element to be search:";
cin>>itm;

beg=0;
last=n-1;
mid=((beg+last)/2);            ///this is the mid first step
while(beg<=last){
     if (a[mid]<itm)               ///comparing the middle element    
	 {
        beg=mid+1;
     }

    else if(a[mid]==itm)          //second step
	{ 
        cout<<"Search is successful\n";    
        cout<<"Position of item is:"<<mid+1;
        break;
    }

    else                            
	{
        last=mid-1;
    }
    mid=((beg+last)/2);            ///this is the mid
}
    if(beg>last){
        cout<<"Search is unsuccessful";
    }
return 0;
}
