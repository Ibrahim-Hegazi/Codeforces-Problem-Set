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
    //int n; cin >> n;
    ll a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 0) 
        cout << "Bob\n";
    else
        cout << "Alice\n";
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
