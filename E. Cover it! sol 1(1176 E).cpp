#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // adjacency list representation of the graph
vector<int> color; // stores the color of each node

void bfs(int start) {
    queue<int> q;
    q.push(start);
    color[start] = 1; // color the start node as 1

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : adj[u]) {
            if (color[v] == 0) { // if the node hasn't been colored yet
                color[v] = 3 - color[u]; // color it with the opposite color
                q.push(v);
            }
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    adj.assign(n + 1, vector<int>());
    color.assign(n + 1, 0);
    int u,v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1); // start BFS from node 1

    // Count the number of vertices in each color
    int cnt1 = count(color.begin(), color.end(), 1);
    int cnt2 = n - cnt1;

    // Choose the color with fewer vertices
    int chosenColor = (cnt1 < cnt2) ? 1 : 2;

    // Print the number of chosen vertices
    cout << min(cnt1, cnt2) << "\n";

    // Print the indices of the chosen vertices
    for (int i = 1; i <= n; i++) {
        if (color[i] == chosenColor) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); // speed up I/O operations
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
