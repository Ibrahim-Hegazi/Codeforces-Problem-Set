#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 



void solve() {
    ll n; cin >> n;
    vector<int>v {100,20,10,5,1};
    int cnt{ 0 };
    for (int i = 0; i < 5; i++)
    {
        ll temp = n / v[i];
        cnt += temp;
        n -= temp * v[i];
    }
    cout << cnt;
}

int main() {
    int t{ 1 };//cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
