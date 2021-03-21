#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s){
    int i=0, j=s.size()-1;
    while(i<j){
       swap(s[i],s[j]);
       i++;
       j--;
    }
}

int main()
{
    vector<char> s;
    char a;
    int n;
    cin>>n;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            s.push_back(a);
        }
        reverseString(s);
    return 0;
}
