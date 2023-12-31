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

int n;
vector<vector<int>>adj;
vector<bool>vis;
vector<int>l;//Levels frequency (frequency array for levels)

void dfs(int node, int level) {
    l[level]++;
    vis[node] = true;
    for (auto v : adj[node]) {
        if (!vis[v]) {
            dfs(v, level + 1);
        }
    }
}

void solve() {
    cin >> n;
    adj.resize(n + 1);
    l.resize(n + 1);
    vis.resize(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int x; cin >> x;
        adj[x].push_back(i);
    }
    dfs(1, 0);
    ll ans{ 0 }, sum{ 0 }; //sum variable is used for the remaining nodes in each level
    // Our algorithm will include take 2 nodes from each level and then add the rest to the sum variable then divide that sum variable at the end
    for (int i = 0; i < n; i++)
    {
        if (l[i] + sum >= 2) {
            ans++;
            sum += l[i] - 2;
        }
    }
    cout << ans + sum / 2<<"\n";
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {

        solve();
        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
            l[i] = 0;
            vis[i] = false;
        }
    }
    return 0;
}
