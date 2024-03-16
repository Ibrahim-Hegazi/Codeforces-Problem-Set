#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n);
    int mn{ INT_MAX };
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (i) {
            if (s[i] == 'L' && s[i - 1] == 'R' && ((max(v[i], v[i - 1]) - min(v[i], v[i - 1])) / 2) <mn){
                mn = ((max(v[i], v[i - 1]) - min(v[i], v[i - 1])) / 2);
            }
        }
    }
    if (mn == INT_MAX)
        cout << -1;
    else
        cout << mn;
   
}

int main() {
    int t{ 1 };//cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
