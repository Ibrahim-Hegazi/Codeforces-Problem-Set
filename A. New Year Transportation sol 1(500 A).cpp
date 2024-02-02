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




vector<vector<ll>>adj; 
vector<bool>vis;
ll n, m;

bool bfs(ll start) {
    queue < ll > q;
    q.push(start);
    vis[start] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : adj[u]) {
            if (!vis[v])
            {
                q.push(v);
                vis[v] = 1;
                if (v == m)
                    return true;
                if (v > m)
                    return false;
            }
        }
    }
    return false;
}

void solve() {
    cin >> n >> m;
    adj.assign(2*n , vector<ll>());
    vis.assign(2*n , 0);
    
    ll v;
    for (ll i = 1; i < n; i++)
    {
        cin >> v;
        if (v + i > m || i > m )
            continue;
        adj[i].push_back(i + v);
    }
    
    bool ans=bfs(1);
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    fast;
    int t{ 1 };// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
