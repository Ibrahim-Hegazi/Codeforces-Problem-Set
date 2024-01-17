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
    int n; cin >> n;
    int cnt{ 0 };
    bool xpos = false, xneg = false, ypos = false, yneg = false, ans = true;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > 0)xpos = true;
        if (x < 0)xneg = true;
        if (y > 0)ypos = true;
        if (y < 0)yneg = true;
        if (xpos && xneg && yneg && ypos)
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
