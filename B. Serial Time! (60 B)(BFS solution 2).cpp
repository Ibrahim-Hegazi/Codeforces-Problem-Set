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


//const ll dx[] = {0,0,1,-1,1,-1,-1,1 };
//const ll dy[] = { -1,1,0,0,1,-1,1,-1 };



int n, m, k;
char grid[12][12][12];
const int dx[] = { 0,1,0,-1,0,0 };
const int dy[] = { 1,0,-1,0,0,0 };
const int dz[] = { 0,0,0,0,1,-1 };



map<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>>adj;
map<pair<int, pair<int,int>>, bool>vis;

bool valid(int i,int j,int z) {
    return (i > -1 && j > -1 && z > -1 && i < n && j < m && z < k && !vis[{i, { j ,z}}] && grid[i][j][z] != '#' );
}

int bfs(int x, int y ,int z) {

    queue<pair<int, pair<int,int>>>q;
    q.push({ x,{y,z} });
    vis[{x, { y , z } }] = 1;
    int sz{ 0 }, lvl{ 1 },ans{0};


    while (sz = q.size()) {

        while (sz--) {

            int x = q.front().first;
            int y = q.front().second.first;
            int z = q.front().second.second;
            q.pop();

            ans++;

            //Take care here
            //We can the indices that are inside the pair v which is inside the vector which is inside the map that is called adj
            for (auto v : adj[{x, { y, z }}]) {
                if (valid(v.first, v.second.first,v.second.second)) {
                    vis[{v.first, { v.second.first,v.second.second }}] = 1;
                    q.push({ v.first, { v.second.first,v.second.second } });
                }
            }
        }
        lvl++;
    }
    return ans;
}




void solve() {
    //Basic Input
    cin >> k >> n >> m;
    for (int z = 0; z < k; z++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j][z];
            }
        }
    }

    //Adjacency List
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int z = 0; z < k; z++)
            {
                for (int d = 0; d < 6; d++)
                {
                    if (valid(i + dx[d], j + dy[d], z + dz[d]))
                        adj[{ i, { j,z } }].push_back({ i + dx[d],{j + dy[d],z + dz[d] } });
                }
            }
        }
    }


    int x, y;
    cin >> x >> y;
    cout<<bfs(x - 1, y - 1, 0);//We subtracted one because the array is zero indexed

}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) { 
        solve();
    }
    return 0;
}
