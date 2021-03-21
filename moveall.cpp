
#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int start, int end)
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
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    partition(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}