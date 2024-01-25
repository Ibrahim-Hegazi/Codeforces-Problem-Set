#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
#define vll vector<ll>
#define vp vector<pair<ll,ll>>


void solve() {
    ll n; cin >> n ;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    srt(v);
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
