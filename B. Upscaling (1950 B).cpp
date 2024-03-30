#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MAXNODES = (ll)1e10;


void solve() {
    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0) {
                s += "##";
            }
            else {
                s += "..";
            }
        }
        cout << s << "\n" << s << "\n";
        s = "";
    }
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
        
    while (t--) {
        solve();
    }
    return 0;
}
