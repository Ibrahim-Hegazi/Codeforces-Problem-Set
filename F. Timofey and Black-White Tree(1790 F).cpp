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



int mn_dist = INT_MAX;

vector<vector<int>>adj;
vector<int>dist;
ll n, m;
void bfs(int start) {
    queue<int>q;
    q.push(start);
    int sz{0}, lvl = 1, front{0};
    //Optimization of the code starts here
    while (sz = q.size())
    {
        while (sz--)
        {
            front = q.front();
            q.pop();
            for (auto i : adj[front])
            {
                if (dist[i] > lvl)
                {
                    q.push(i);
                    dist[i] = lvl;
                }
            }
        }
        lvl++;
        if (lvl == mn_dist)
            break;
    }
}


void solve() {
    cin >> n >> m;
    adj.assign(n + 1000, vector<int>());
    dist.assign(n + 1000, INT_MAX);
    vector<int>arr(n);

    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1 ; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(m);  //Optimization happened here
    for (int i = 0; i < n-1; i++)                 //Optimization happened here
    {
        mn_dist = min(dist[arr[i]], mn_dist );   //Optimization happened here
        cout << mn_dist << " ";                 //Optimization happened here
        if (mn_dist != 1)                       //Optimization happened here
            bfs(arr[i]);                        //Optimization happened here
    }
    cout << "\n";
    mn_dist = INT_MAX;
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
