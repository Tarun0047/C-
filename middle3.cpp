
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int middle(int a, int b, int c)
    {
        //code here//Position this line where user code will be pasted.
        int x=(a>b)?a:b;
        int y=(x>c)?x:c;

        //y is greatest from all

        int w=(a>b)?b:a;
        int z=(w>c)?c:w;

        int sum=a+b+c;
        sum-=z;
        sum-=y;
        return sum;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends
