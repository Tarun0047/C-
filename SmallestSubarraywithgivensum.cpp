// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cout<<sb(a,n,x)<<endl;
    }
    return 0;
}// } Driver Code Ends

int sb(int arr[], int n, int x)
{
    // Your code goes here
    int i=0,j=n-1,count=0, s1=0, s2=0;
    sort(arr, arr+n);
    if((arr[0])==0)  i=1;

    while (i<j)
    {
        s1+=arr[i];
        s2+=arr[j];
        if(s1+s2>x) {

            j--;
        }
        else if (s1+s2<x) {
            count++;
            i--;
        }
        else{
            break;
        }
    }
}