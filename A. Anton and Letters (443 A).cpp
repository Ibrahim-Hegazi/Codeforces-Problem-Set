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
    string s;
    getline(cin, s);
    map<char, int>mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '{' && s[i] != ',' && s[i] != '}'&&s[i]!=' ') {
            mp[s[i]]++;
        }
    }
    cout << mp.size();
}

int main() {
    fast;
    
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
