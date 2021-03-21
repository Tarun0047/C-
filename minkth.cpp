#include "bits/stdc++.h"
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x; /* save the value at address x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */
}

int partition(int arr[], int start, int end)
{
    int pivot=arr[end];
    int pIndex=start;
    for(int i=start; i<end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[end], arr[pIndex]);
    return pIndex;
}

//void quick_sort(int arr[], int start, int end, int k){
//    if(start<end)
//    {
//        int pIndex=partition(arr, start, end);
//        quick_sort(arr,start,pIndex-1, k);
//        quick_sort(arr, pIndex+1, end, k);
//    }
//}
int kth_smallest(int arr[], int start, int end, int k)
{
    //if k is smaller then the number of elements
        int pIndex=partition(arr,start,end);
        if(pIndex>k){
            kth_smallest(arr,start,pIndex-1,k);
        }
        else if (pIndex<k){
            kth_smallest(arr,pIndex+1,end,k);
        } else{
            return arr[pIndex];
        }
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans=kth_smallest(arr,0, n-1, k-1);
    cout<<ans<<"\n";
    return 0;
}