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
    ll n,m;
    cin >> n >> m;
    

    string s;
    cin >> s;
    string s2 = s;
    while (m--) {
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == 'B' && s2[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
            }
        }
        s2 = s;
    }

    cout << s;
    
    
}

int main() {
    fast;
    int t{ 1 };// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
