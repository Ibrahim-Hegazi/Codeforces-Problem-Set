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


const ll dx[] = { -1,-1,-1,0,1,1,1,0 };
const ll dy[] = { -1,0,1,1,1,0,-1,-1 };


vector<vector<ll>>adj;
vector<ll>dist;


void bfs(int start) {
    queue < int > q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : adj[u]) {
            if (dist[v] == 0) {
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}


void solve() {
    int n, m; cin >> n >> m;
    adj.assign(n + 1, vector<ll>());
    dist.assign(n + 1, 0);
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    vector<ll>even, odd;
    for (ll i = 1; i <= n; i++)
    {
        if (dist[i] % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    if (even.size() < odd.size()) {
        cout << even.size() << "\n";
        for (int i = 0; i < even.size(); i++)
        {
            cout << even[i] << " ";
        }
        cout << "\n";
    }
    else {
        cout << odd.size() << "\n";
        for (int i = 0; i < odd.size(); i++)
        {
            cout << odd[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
