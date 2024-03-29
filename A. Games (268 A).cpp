#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MAXNODES = (ll)1e10;



void solve() {
    int n; cin >> n;
    int ans{ 0 };
    vector<int>Home(n), Guest(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Home[i] >> Guest[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Home[i] == Guest[j]) {
                ans++;
            }
        }
    }
    cout << ans;


}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
