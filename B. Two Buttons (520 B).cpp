#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
 
ll n, m;
vector<int>dist;
void bfs(int start) {
    queue<int>q;
    q.push(start);
    dist[start] = 0;


    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u * 2 < m * 2 && dist[u*2]==-1) { //Tricky
            q.push(u * 2);
            dist[u * 2] = dist[u] + 1;
        }
        if (u > 1 && dist[u -1] == -1) {//Tricky
            q.push(u -1);
            dist[u - 1 ] = dist[u] + 1;
        }
    }
}



void solve() {
    cin >> n>>m;
    dist.assign(2*max(n,m)+1, -1);//Tricky
    bfs(n);
    cout << dist[m];
}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
