// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
public:
    //Complete this function
    bool subArrayExists(int arr[], int n)
    {
        int sum=0;
        bool flag=false;
        unordered_map<int, int> prefix;
        for(int i=0; i<n; i++) {
            sum=sum+arr[i];
            if(prefix.count(sum)>0){
                flag = true;
            }
            else if(sum=0){
                flag=true;
            }
            prefix[sum]=i;
        }
        return flag;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        if (obj.subArrayExists(arr, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}  // } Driver Code Ends
