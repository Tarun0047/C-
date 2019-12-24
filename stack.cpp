#include<iostream>
#include<stdint-gcc.h>
#define MAXSIZE 10
using namespace std;
void push();
int pop();
void traverse();
int stack[MAXSIZE];
int top=-1;
int main(){
int choice;
char ch;
do{
    cout<<"\n1.PUSH";
    cout<<"\n2.POP";
    cout<<"\n3.TRAVERSE";
    cout<<"\nEnter your choice";
    cin>>choice;
    switch(choice){
    case 1: push();
    break;
    case 2: cout<<"\nThe deleted element is:"<<pop();
    break;
    case 3: traverse();
    break;
    default:cout<<"\nYou Entered wrong choice";
    }
    cout<<"\nDo you wish to continue(Y/N)";
    fflush(stdin);
    cin>>ch;
}
while(ch='Y'||ch='y');
return 0;
}
void push(){
    int itm;
if(top==MAXSIZE-1)
{
    cout<<"Full";
    exit(0);
}
else
    cout<<"Enter the element to be inserted:";
    cin>>itm;
    top=top+1;
    stack[top]=itm;
}
void pop(){
int itm;
if(top==-1){
    cout<<"Empty:";
    exit(0);
}
else{
    itm=stack[top];
    top=top-1;
}
return(itm);
}
void traverse()
{
    int i;
    if(top==-1)
    {
        cout<<"The stack is empty";
        exit(0);
    }
    else{
        for(i=top;i>=0;i--){
            cout<<"Traverse the element";
            cout<<"\n"<<stack[i];
        }
    }
}

