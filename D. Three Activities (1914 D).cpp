#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


void solve() {
    ll n{0},temp{0}; cin >> n;
    vector<pair<ll, ll> >v1, v2, v3;//Value Then Index
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back({ temp,i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v2.push_back({ temp,i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v3.push_back({ temp,i});
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    sort(v3.rbegin(), v3.rend());
    ll ans{ 0 };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second) {
                    ans = max(ans, v1[i].first + v2[j].first + v3[k].first);
                }  
            }
        }
    }
    cout << ans << "\n";
    
}

int main() {
    fast;
    
    int t; cin >> t;
    while (t--) {

        solve();
        
    }
    return 0;
}
