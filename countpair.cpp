//
// Created by Tarun Dhiman on 02-03-2021.
//

#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
    // code here
//    int x = 0;
//    int count = 0;
//    unordered_map<int, int> map;
////
////    for (int i = 0; i < n; i++) {
////        map[arr[i]]++;
////    }
//    for (int i = 0; i < n; i++) {
//            x = abs(k - arr[i]);
//            if (map.count(x) > 0) {
//                count+=map[x];
//        }
//            map[arr[i]]++;
//    }
//
//    return count;
//}
    int c = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            c += m[k - arr[i]]; //if duplicates exist then it is counted twice as the pair would repeat
        }

        m[arr[i]]++;//anyways storing the element

    }
    return c;
}
    int main() {

        int n=4;
        int arr[n]={1,5,7,1};
        int k=6;
        int ans=getPairsCount(arr, n, k);
        cout<<ans;
        return 0;
    }