//
// Created by Tarun Dhiman on 01-03-2021.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<pair<int,int>> st;
    int intervals[2][2] = {{1,4},{2,3}};
    st.push({intervals[0][0],intervals[0][1]});
    int n=2;
    int i=1;
    int temp=0;
    int temp2=0;
    while (i<n){
        if(st.top().second>=intervals[i][0] && st.top().second<=intervals[i][1]){
            temp=st.top().first;
            st.pop();
            st.push({temp,intervals[i][1]});
            i++;
            continue;
        }
        else if (st.top().second>=intervals[i][0] && st.top().second>intervals[i][1]){
            temp=st.top().first;
            temp2=st.top().second;
            st.pop();
            st.push({temp,temp2});
            i++;
            continue;
        }
        else{
            st.push({intervals[i][0],intervals[i][1]});
        }
        i++;
    }
    vector<vector<int>> v;
    vector<int> t;
    while (!st.empty()) {
        t.push_back(st.top().first);
        t.push_back(st.top().second);
        v.push_back(t);
        t.clear();
        st.pop();
    }
    sort(v.begin(), v.end());
    return 0;
}
