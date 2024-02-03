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


ll n, m;
map<ll,vector<ll>>adj;
vector<ll>color;

bool flag = true;

void bfs(ll start) {
    queue < ll > q;
    q.push(start);
    color[start] = 1;

    while (!q.empty()) {
        ll parent = q.front();
        q.pop();

        for (auto child : adj[parent]) {
            if (color[child] == 0) {
                q.push(child);
                color[child] = 3 - color[parent];
            }
            else {//visited
                if (color[child] == color[parent])
                {
                    flag = false;
                    return;
                }
            }
        }
    }
}


void solve() {
    cin >> n >> m;

    //adj.assign(n + 1, vector<ll>());
    color.assign(n + 1, 0);

    ll u, v;
    for (ll i =0; i <m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
            bfs(i);

    }
    if (flag) {
        vector<ll>g1, g2;
        for (ll i = 1; i <= n; i++)
        {
            if (color[i] == 1)
                g1.push_back(i);
            else
                g2.push_back(i);
        }
        cout << g1.size() << "\n";
        for (ll i = 0; i < g1.size(); i++)
        {
            cout << g1[i] << " ";
        }
        cout << "\n";
        cout << g2.size() << "\n";
        for (ll i = 0; i < g2.size(); i++)
        {
            cout << g2[i] << " ";
        }
    }
    else
        cout << -1;
}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
