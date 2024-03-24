#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXNODES 1e9;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n, k; cin >> n >> k;
    if (n -1> k)
        cout << n<<"\n";
    else
        cout << 1<<"\n";
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
