// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        // code here
        priority_queue<int> pq;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                pq.push(-mat[i][j]);
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                mat[i][j]=pq.top()*(-1);
                pq.pop();
            }
        }
        return  mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
//    1
//    4
//    10 20 30 40
//    15 25 35 45
//    27 29 37 48
//    32 33 39 50
}  // } Driver Code Ends