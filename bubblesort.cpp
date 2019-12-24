#include<iostream>
using namespace std;

  void bubble_sort(int a[],int n){          ///bubble_sort function
    int temp,i,j;                             ///variables of function
for(i=0;i<n;i++)
        {                         ///Outer loop
    for(j=1;j<=n-i-1;j++)
            {                     ///inner loop
        if(a[j]>a[j+1])
            {                  ///MAIN ALGORITHM
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
int a[100],n,i;
cout<<"Enter number of elements=";         ///Entering number of elements
cin>>n;
for(i=1;i<=n;i++){     ///until our choice by array
        cin>>a[i];
}
bubble_sort(a,n);                 ///giving parameters
{
    cout<<"Sorted line is as follows:";
    for(i=1;i<=n;i++){
        cout<<"\t"<<a[i];
    }

return 0;
}}
