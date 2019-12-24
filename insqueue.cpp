#include<iostream>
#define max 10
using namespace std;
int q[max],front=-1,rear=-1,item;
void insertion(int q[],int item)
{
	if(rear==max-1)                 //if REAR=N
	{
		cout<<"\nQueue Overflow";
		exit(0);
	}
	else if(front==-1 || rear==-1)
	{
		front=0;
		rear=0;
	}
	else{
		rear=rear+1;
	}
	q[rear]=item;
}
void dis(int q[]){
	int i;
	if(front!=-1){
		cout<<"\nItem at queue\n";
		for(i=front;i<=rear;i++){
			cout<<" "<<q[i];
		}
	}
}
	
int main(){
cout<<"Enter item to insert:";
cin>>item;
insertion(q,item);
return 0;
}
