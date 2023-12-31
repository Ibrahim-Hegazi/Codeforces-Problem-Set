#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


void solve() {
    //ll n{ 0 }; cin >> n;
    string s; cin >> s;
    ll idx{ 1 };
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != '0') {
            idx = i;
            break;
        }
    }
    string s1, s2;
    for (int i = 0; i < idx; i++)
    {
        s1.push_back(s[i]);
    }
    for (int i = idx; i < s.length(); i++)
    {
        s2.push_back(s[i]);
    }
    if (stoi(s1) < stoi(s2) )
        cout << s1 << " " << s2 << "\n";
    else
        cout << "-1\n";
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {

        solve();
        
    }
    return 0;
}
