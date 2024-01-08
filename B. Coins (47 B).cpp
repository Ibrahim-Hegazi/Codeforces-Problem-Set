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
    map<char, int>mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    int cnt{ 0 };
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '>')
        {   
            mp[s[0]]++;    
            if (mp[s[0]] == 1)
                cnt++;
        }
        else {
            mp[s[2]]++; 
            if (mp[s[2]] == 1)
                cnt++;
        }
    }
    if (cnt != 3) {
        for (auto it : mp) {
            if (it.second == 0)
            {
                cout << it.first;
            }
        }
        for (auto it : mp) {
            if (it.second == 1)
            {
                cout << it.first;
            }
        }
        for (auto it : mp) {
            if (it.second == 2)
            {
                cout << it.first;
            }
        }
    }
    else
        cout << "Impossible";
}

int main() {
    fast;
    
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
