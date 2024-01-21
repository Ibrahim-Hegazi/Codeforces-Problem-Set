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
    string s;
    ll cnt{ 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
            cnt += 4;
        else if (s == "Cube") 
            cnt += 6;
        else if (s == "Octahedron")
            cnt += 8;
        else if (s == "Dodecahedron")
            cnt += 12;
        else
            cnt += 20;
    }
    cout << cnt;
}

int main() {
    fast;
    
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
