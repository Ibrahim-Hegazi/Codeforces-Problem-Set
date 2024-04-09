#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve() {
    //Here you might observe the pattern when you trace the numbers
    ll n, k; cin >> n >> k;
    if (n % 2 == k % 2 && k*k<=n) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int t{ 1 }; cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
