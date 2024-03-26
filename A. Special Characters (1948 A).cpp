#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MAXNODES = (ll)1e6;






void solve() {
    int n; cin >> n;
    if (n %2== 1)
        cout << "NO\n";
    else {
        string s;
        int j = 0;
        for (int i = 0; i < n; i+=2)
        {
            if (j % 2 == 0)
                s += "AA";
            else
                s += "BB";
            j++;
        }
        cout << "YES\n" << s << "\n";
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
