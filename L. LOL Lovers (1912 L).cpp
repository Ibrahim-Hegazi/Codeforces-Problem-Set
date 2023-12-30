#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


void solve() {
    ll n{ 0 }; cin >> n;
    string s; cin >> s;
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            v[i].first++;
        else
            v[i].second++;
        if (i)
        {
            v[i].first += v[i - 1].first;
            v[i].second += v[i - 1].second;
        }
    }
    bool flag = false;
    int idx{ 0 };
    for (int i = 0; i < n-1; i++)
    {
        if (v[n - 1].first - v[i].first != v[i].first && v[n - 1].second - v[i].second != v[i].second) {
            flag = true;
            idx = i + 1;
            break;
        }
    }
    if (flag)
        cout << idx<<"\n";
    else
        cout << -1<<"\n";
}

int main() {
    fast;
    
    int t{1}; //cin >> t;
    while (t--) {

        solve();
        
    }
    return 0;
}
