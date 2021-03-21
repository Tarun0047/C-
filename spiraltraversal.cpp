// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        // code here
        int left=0;
        int right=c-1;
        int top=0;
        int down=r-1;
        int dir=0;
        vector<int> v;
        while(top<=down && left<=right)
        {
            if(dir==0)     //left to right
            {
                for(int i=0; i<=right; i++){
                    v.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1)   //top to bottom
            {
                for(int i = top; i<=down;i++) {
                    v.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir==2)   //right to left
            {
                for(int i = right ; i>=left;i--) {
                    v.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(dir==3)
            {
                for(int i = down; i>=top;i--) {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r);

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends