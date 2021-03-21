// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:


    int median(vector<vector<int>> &matrix, int r, int c) {
        // code here
        for (int i = 0; i <r; i++) {
            sort(matrix[i].begin(), matrix[i].end());  //sorting all the row matrix
        }
        unordered_map<int ,int >  umap;   //to be continued
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;
    }
    return 0;
}  // } Driver Code Ends