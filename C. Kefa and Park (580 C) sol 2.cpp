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




int n, m,ans{0};
vector<vector<ll>>adj;
vector<ll>vis;
vector<int>arr;
vector<int>cats;


void bfs(int start) {
    queue < int > q;
    q.push(start);
    vis[start] = 1;
    if (arr[start] == 1)
        cats[start] = 1;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (auto child : adj[parent]) {
            if (arr[child] == 1) {
                cats[child]=cats[parent]+1;
            }
            else {
                cats[child] = 0;
            }
            if (!vis[child] && cats[child] <= m) {
                q.push(child);
                vis[child] = 1;

                if (adj[child].size() == 1 && cats[child] <= m && adj[child][0]==parent) //root detection
                    ans++;
            }
        }
    }
}


void solve() {
    cin >> n >> m;

    adj.assign(n + 1, vector<ll>());
    vis.assign(n + 1, 0);
    arr.assign(n + 1, 0);
    cats.assign(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int u, v;
    for (int i = 1; i <= n-1; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

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
