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
 
 
vector<vector<int>>adj;
vector<bool>vis;
ll n, m, ans{ 1 };
void dfs(int u) {
    vis[u] = true;
    for (auto v : adj[u]) {
        if (!vis[v]) {
            ans *= 2;
            dfs(v);
        }
    }
}
 
void solve() {
    ll n, m; cin >> n >> m;
    adj.resize(n + 10);
    vis.resize(n + 10);
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
    {   
        if(!vis[i])
            dfs(i);
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
