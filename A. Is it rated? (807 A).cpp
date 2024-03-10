#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int>v1(n), v2(n);
    bool FlagChange = false,FlagOrder=true;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i];
        if (v1[i] != v2[i] && ! FlagChange) {
            FlagChange = true;
        }
        if (i) {
            if (v1[i] > v1[i - 1] && v2[i] > v2[i - 1]) {
                FlagOrder = false;
            }
        }
    }
    if (FlagChange) {
        cout << "rated";
    }
    else if (FlagChange == false && FlagOrder == true) {
        cout << "maybe";
    }
    else {
        cout << "unrated";
    }
}


int main() {
    int t{1};// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
