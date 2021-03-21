// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    // arr[] : The input Array
    // N : Size of the Array
    // X : Sum which you need to search for
    //Function to find if there exists a triplet in the
    //array arr[] which sums up to X.
    bool twosum(int arr[], int n, int X, int i){
        int j=n-1;
        int sum=0;
        while (i<j){
            if (arr[i]+arr[j]>X) j--;
            else if (arr[i]+arr[j]<X) i++;
            else return true;
        }
        return false;
    }
    bool find3Numbers(int arr[], int N, int X)
    {
        //Your Code Here
        sort(arr, arr+N);
        int need_sum=0;
        for (int i = 0; i < N; i++) {
            if(twosum(arr,N,abs(arr[i]-X),i+1)){
                return 1;
            }
        }
        return 0;
    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,sum;
        cin>>N>>sum;
        int i,A[N];
        for(i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        cout <<  ob.find3Numbers(A, N, sum) << endl;
    }
}
// } Driver Code Ends
