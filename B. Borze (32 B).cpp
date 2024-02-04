#include<bits/stdc++.h>
#include <string.h>
#include <numeric>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
typedef priority_queue<int, vector<int>, greater<int>> pq_min;



void solve() {
    string s,ans;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            ans += '0';
        else if (s[i] == '-' && s[i + 1] == '.') {
            ans += '1';
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-') {
            ans += '2';
            i++;
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
