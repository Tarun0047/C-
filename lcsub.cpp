#include "bits/stdc++.h"
using namespace std;
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    int ith=-1,temp;
    int pivot=arr[r];
    int n=r+1;
    for(int i=0; i<n; i++)
    {
        //if the element is smaller then it is replaced by (i+1)th location and (jth) location
        if(arr[i]<=arr[r])
        {
            temp=arr[ith+1];
            arr[ith+1]=arr[l];
            arr[l]=temp;
        }
        else{
            temp=arr[r];
            arr[r]=arr[ith+1];
            arr[ith+1]=temp;
            r--;
        }
        //after one check
        ith++;
        l++;
    }
}
int main(){
    int n=6;
    int arr[n]={1,3,2,4,8,5};
  //  int ans=kthSmallest(arr,0,5,2);
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    int largest=0;
    int count=1;
    for(int i=0; i<n; i++){
        //if the element exists
        if ((s.find(arr[i]-1))==s.end()){
            int temp1=arr[i]-1;
            int j=1;
            while(s.find(arr[i]+j)!=s.end()){
                int temp2=arr[i]+j;
                count++;
                j++;
            }
        }
        largest=(largest>count)?(largest):(count);
        count=1;
    }
    cout<<largest<<endl;
    return 0;
}