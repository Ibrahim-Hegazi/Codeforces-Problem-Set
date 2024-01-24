
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
vector<int>arr;
ll n, m, ans{ 0 };
void dfs(int child,int parent,int cats=0) {  //Take care from cats=0 (optional parameter)
    if (cats > m)
        return;
    for (auto v : adj[child]) {
        if (v!=parent) {//to avoid loops
            if (arr[v] == 1)
                dfs(v, child, cats + 1);
            else
                dfs(v, child);//here we gonna reset the cats counter becuase he was asking about the consecutive number of cats
        }
    }
    if (adj[child].size() == 1 && adj[child][0] == parent)
        ans++;
}

void solve() {
    cin >> n >> m;
    adj.resize(n + 10);
    arr.resize(n + 10);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int u, v;
    for (int i = 0; i < n-1; i++)
    {
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    dfs(1, -1, arr[1]);
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
