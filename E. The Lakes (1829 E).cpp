#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXNODES 1001


int grid[MAXNODES][MAXNODES];
bool vis[MAXNODES][MAXNODES];
const ll dx[] = { -1,0,1,0 };
const ll dy[] = { 0,-1,0,1 };
ll mx{ 0 };
ll rows, cols;

bool valid(ll i, ll j) {
    return(i >= 0 && j >= 0 && i < rows && j < cols && grid[i][j] != 0 && !vis[i][j]);
}

void bfs(ll i,ll j) {
    ll temp{ 0 };
    queue<pair<ll,pair<ll,ll>>>q;
    q.push({ grid[i][j],{i,j} });
    vis[i][j] = 1;
    temp += grid[i][j];
    mx = max(mx, temp);
    while (!q.empty()) {
        i = q.front().second.first;
        j = q.front().second.second;
        q.pop();
        for (ll k = 0; k < 4; k++)
        {
            ll ii = i + dx[k];
            ll jj = j + dy[k];
            if (valid(ii, jj) ){
                q.push({ grid[ii][jj],{ii,jj} });
                vis[ii][jj] = 1;
                temp += grid[ii][jj];
            }
        }
        mx = max(mx, temp);
    }
}



void solve() {
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> grid[i][j];
            vis[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (!vis[i][j] && grid[i][j]!=0) {
                bfs(i, j);
            }
        }
    }
    cout << mx<<"\n";
}

int main() {
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
        mx= 0 ;
    }

    return 0;
}
