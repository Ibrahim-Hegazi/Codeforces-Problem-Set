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
    ll n; cin >> n;
    map<ll, ll>mp;
    ll temp{ 0 };
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
        if (mp[temp] > 1)
            ans = false;
    }
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
