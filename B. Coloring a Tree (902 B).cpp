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
vector<int>colors;
ll n,ans{0};
void dfs(int parent,int child) {
    vis[child] = true;
    if (colors[child] != colors[parent])
        ans++;
    for (auto v : adj[child]) {
        if (!vis[v]) {
            //if (v == parent) // to avoid going back to the parent
            //    continue;
            //else
                dfs(child, v);
        }
    }
}
 
void solve() {
    //ll n;
    cin >> n;
    adj.resize(n + 10);
    colors.resize(n + 10);
    vis.resize(n + 10);
    int u;
    for (int i = 2; i <= n; i++)
    {
        cin >> u;
        adj[i].push_back(u);
        adj[u].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> colors[i];
    }
    dfs(0, 1);
    cout << ans;
}
 
int main() {
    fast;
    
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
