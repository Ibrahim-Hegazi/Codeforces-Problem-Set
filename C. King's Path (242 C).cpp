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






map<ll,vector<pair<ll,ll>>>adj;
map<pair<ll,ll>,bool>vis;
map<pair<ll, ll>, ll>dist;

ll Xstart{0}, Ystart{0}, Xend{0}, Yend{0};
const ll dx[] = { -1,-1,-1,0,1,1,1,0 };
const ll dy[] = { -1,0,1,1,1,0,-1,-1 };

bool valid(ll x, ll y) {
    bool flag = false;
    if (adj.find(x) != adj.end()) {
        for (auto v : adj[x])
        {
            if (v.first <= y && v.second >= y) {
                flag = true;
                break;
            }
        }
        //Take care form the brackets here, they are tricky as f
        return (flag && 
                (x <= max(Xend, Xstart) || y <= max(Yend, Ystart) || x >= min(Xend, Xstart) || y >= min(Yend, Ystart))    //Specially this line
                && !vis[{x,y}]);
    }
    else {
        return false;
    }
}

ll bfs(ll x0,ll y0) {
    queue < pair < ll, ll> > q;
    q.push({ x0,y0 });
    vis[{x0, y0}] = 1;
    dist[{x0, y0}] = 0;

    while (!q.empty()) {
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();

        if (x == Xend && y == Yend) {
            return dist[{x,y}];
        }

        for (ll i = 0; i < 8; i++)
        {
            ll xx = x + dx[i];
            ll yy = y + dy[i];
            if (valid(xx, yy)) {
                q.push({ xx,yy });
                vis[{xx, yy}] = 1;
                dist[{xx, yy}] = dist[{x, y}] + 1;
            }
        }
    }
    return -1;
}

void solve() {
    
    cin >> Xstart >> Ystart >> Xend >> Yend;
    ll q;
    cin >> q;
    ll r, st, end;
    while (q--) {
        cin >> r >> st >> end;
        adj[r].push_back({ st,end });
    }
    cout << bfs(Xstart,Ystart);
}

int main() {
    fast;
    int t{ 1 };// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
