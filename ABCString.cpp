#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        string a;
        cin >> a;
        int n = a.size();
        map<char, int> mp;
        for (int i = 0; i < n; i++) {

            mp[a[i]]++;
        }
        int first = 0;
        int second = 0;
        int third = 0;
        if (mp.count('A') > 0) {
            first = mp['A'];
        }
        if (mp.count('B') > 0) {
            second = mp['B'];
        }
        if (mp.count('C') > 0) {
            third = mp['C'];
        }

        //if the length is 2
        if (third == 0 || first == 0 || second == 0) {
            if (third == 0) {
                if (first != second) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                }
            } else if (first == 0) {
                if (third != second) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                }
            } else if (second == 0) {
                if (first != third) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                }
            }
        }
            //if the length>2
        else if (third == second || first == second || first == third) {
            cout << "NO" << "\n";
        } else {
            vector<int> v = {first, second, third};
            sort(v.begin(), v.end(), greater<>());
            int x = abs(v[0] - v[1]);
            if (x == v[2]) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}

