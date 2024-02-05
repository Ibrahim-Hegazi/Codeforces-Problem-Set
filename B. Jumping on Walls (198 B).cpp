#include<bits/stdc++.h>
#include <string.h>
#include <numeric>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll  long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
typedef priority_queue<int, vector<int>, greater<int>> pq_min;


#pragma region DFS

//vector<vector<int>>adj;
//vector<int>vis;
//ll n{0},m{0};
//void dfs(int u) {
//    //cout << u << " ";
//    vis[u] = true;
//    for (auto v : adj[u]) {
//        if (!vis[v]) {
//            dfs(v);
//        }
//    }
//
//}

#pragma endregion


#pragma region BFS_FOR_DIST_AND_PATH

//vector<vector<int>>adj;
//vector<int>dist;
//vector<int>parent;//used when we need to find the shortest path between two nodes
//ll n, m;
//void bfs(int start) {
//    queue<int>q;
//    q.push(start);
//    dist[start] = 0;
//    parent[start] = -1;
//
//
//    while (!q.empty()) {
//        int u = q.front();
//        q.pop();
//
//        //cout << u << " ";
//        for (auto v : adj[u]) {
//            if (dist[v] == -1) {
//                q.push(v);
//                dist[v] = dist[u] + 1;
//                parent[v] = u;
//            }
//        }
//    }
//}


//void print_path(int end) {
//    int current = end;
//    stack<int>ans;
//    while (current != -1) {
//        ans.push(current);
//        current = parent[current];
//    }
//    if (dist[n] == -1) {
//        cout << "IMPOSSIBLE\n";
//        return;
//    }
//    cout << ans.size() << "\n";
//    while (!ans.empty()) {
//        cout << ans.top()<<" ";
//        ans.pop();
//    }
//
//}


#pragma endregion

#pragma region BFS_TOPO

//vector<vector<int>>adj;
//vector<int>inDegree;
//vector<int>ans;
//vector<int>parent;
//bool flag = true;
//ll n, m;
//void BFS_TOPO(int n) {
//    pq_min q;
//    for (int i = 1; i <= n; i++)
//    {
//        if (inDegree[i] == 0) {
//            q.push(i);
//        }
//    }
//    while (!q.empty()) {
//        int u = q.top();
//        q.pop();
//        ans.push_back(u);
//        for (auto v : adj[u]) {
//            inDegree[v]--;
//            if (inDegree[v] == 0) {
//                q.push(v);
//                parent[v] = u;
//            }
//        }
//    }
//    if (ans.size() != n) {//used to detect loops
//        flag = false;
//    }
//}

#pragma endregion


#pragma region BFS Bipartite
//
//vector<vector<int>>adj;
//vector<int>color;
//ll n, m;
//bool bipartite = true;
//void BFS_Bipartite(int start) {
//    queue<int>q;
//    q.push(start);
//    color[start] = 1;
//    while (!q.empty()) {
//        int u = q.front();
//        q.pop();
//
//        for (auto v : adj[u]) {
//            if (color[v]==0) {//not visited
//                color[v] = 3 - color[u];
//                q.push(v);
//            }
//            else {//visited
//                //We will need to check if the two meighboring nodes have the same color
//                //if so then that mean that this graph or tree cant be bipartite
//                if (color[u] == color[v]) {
//                    bipartite = false;
//                }
//            }
//        }
//    }
//}

#pragma endregion



//const ll dx[] = {0,0,1,-1,1,-1,-1,1 };
//const ll dy[] = { -1,1,0,0,1,-1,1,-1 };



int n, k;
char grid[int(1e5 + 5)][2];
map<pair<ll, ll>, vector<pair<ll, ll>>>adj;
map<pair<ll, ll>, bool>vis;
bool valid(ll i,ll j) {
    return ( (i > n) || (i>-1 && j>-1 && j<2 && !vis[{i,j}] && grid[i][j]!='X') );
}

bool bfs(ll startx, ll starty) {

    queue<pair<ll, ll>>q;
    q.push({ startx,starty });
    vis[{startx, starty}] = 1;
    ll sz{ 0 }, lvl{ 1 };


    while (sz = q.size()) {

        while (sz--) {

            ll x = q.front().first;
            ll y = q.front().second;
            q.pop();

            if (x > n - 1)
                return true;

            //Take care here
            //We can the indices that are inside the pair v which is inside the vector which is inside the map that is called adj
            for (auto v : adj[{x, y}]) {
                if (valid(v.first, v.second)) {
                    vis[{v.first, v.second}]=1;
                    q.push({ v.first, v.second });
                }
            }
        }
        //The rise of the water simulation
        vis[{lvl, 0}] = 1;
        vis[{lvl, 1}] = 1;
        lvl++;
        
    }
    return false;
}




void solve() {
    //Basic Input
    cin >> n >> k;

    //Testing Done
    for (ll j = 0; j < 2; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            cin >> grid[i][j];
        }
    }



    //One of the main differences
    const ll dx[] = { k, k, 1 ,-1};
    const ll dy[] = { 1, -1, 0 ,0};


    //Adjacency list initialization (MIGHT NEED REVISION)
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 2; j++) {
            for (ll d = 0; d < 4; d++) { 
                ll new_i = i + dx[d];
                ll new_j = j + dy[d];


                if (valid(new_i, new_j)) {
                    adj[{i, j}].push_back({ new_i, new_j });
                }
            }
        }
    }

    //BFS
    bool ans=bfs(0, 0);
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) { 
        solve();
    }
    return 0;
}
