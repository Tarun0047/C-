//
// Created by Tarun Dhiman on 02-03-2021.
//
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices){
    int buy_day=INT_MAX;
    int sell_day=0;
    int max_profit=0;
    int n=prices.size();
    for(int i=0; i<n; i++){
        if(prices[i]<buy_day) {
            buy_day = min(buy_day, prices[i]);
        }
        else
        max_profit=max(buy_day,prices[i]-buy_day);
    }
    return max_profit;
}

int main(){
    vector<int> prices{2,4,1};
    int n=prices.size();
    cout<<maxProfit(prices);
    return 0;
}
