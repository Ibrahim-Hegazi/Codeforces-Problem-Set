#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    vector<ll>v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll num1= abs(v[3] - v[2] - v[1]);
    ll num2 = abs(v[3] - v[1] - v[0]);
    ll num3 = abs(v[3] - v[2] - v[0]);
    cout << num1 << " " << num2 << " " << num3;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
