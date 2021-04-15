#include "bits/stdc++.h"
using namespace std;
bool iSS(int set[], int sum, int n){
    bool dp[n+1][sum+1];
    for (int i = 0; i < n+1; ++i) {
        for (int j = 0; j < sum+1; ++j) {
            dp[i][j]= false;
        }
    }
    for (int k = 0; k < sum; ++k) {
        // first row and all columns
        dp[0][k]= false;
    }
    for (int k = 0; k < n; ++k) {
        //first column all rows
        dp[k][0]= true;
    }
    //i refers to the number of items
    for (int i = 1; i < n+1; ++i) {
        // j refers to the sum
        for (int j = 1; j < sum+1; ++j) {
            //not include if the elem is greater then current sum
            if(set[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else
                {
                //either include or not include by getting the OR
                dp[i][j]=dp[i-1][j] || dp[i-1][j-set[i-1]];
            }
        }
    }
    return dp[n][sum];
}
int main()
{
    int arr[]={2,3,3};
    int val=9;
    cout<<iSS(arr,val, 3);
    return 0;
}
