#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
typedef priority_queue<int, vector<int>, greater<int>> pq_min;



#pragma region BFS Bipartite

vector<vector<int>>adj;
vector<int>color;
ll n, m,cnt1{0},cnt2{0};
bool bipartite = true;
void BFS_Bipartite(int start) {
    queue<int>q;
    q.push(start);
    color[start] = 1;
    cnt1++;
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : adj[u]) {
            if (color[v]==0) {//not visited
                color[v] = 3 - color[u];
                if (color[v] == 1)
                    cnt1++;
                else
                    cnt2++;
                q.push(v);
            }
            else {//visited
                //We will need to check if the two meighboring nodes have the same color
                //if so then that mean that this graph or tree cant be bipartite
                if (color[u] == color[v]) {
                    bipartite = false;
                }
            }
        }
    }
}

#pragma endregion




void solve() {
    cin >> n;// >> m;
    adj.assign(n + 10, vector<int>());
    color.assign(n + 10, 0);
    int u, v;
    for (int i = 0; i < n-1; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS_Bipartite(1);
    cout << (cnt1 * cnt2)-(n - 1);
}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
