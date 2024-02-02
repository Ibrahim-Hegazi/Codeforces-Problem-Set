#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long 
#define ull unsigned long long
#define loop(n) for(ll i=0;i<n;i++)
#define lop(m) for(ll j=0;j<m:j++)
#define lpse(i,s,e)for (ll i = s; i <=e ; i++)
using namespace std;




int n, t;
vector<vector<ll>>adj;
vector<bool>visited;
bool found = false;
void DFS(int u) {
    visited[u] = true;
    for (auto v:adj[u])
    {
        if (v == t) {
            found = true;
        }
        if (!visited[v]&&v<n) {
            DFS(v);
        }
    }
}



int main() {
    fast;
    cin >> n >> t;
    visited.resize(n+10);
    adj.resize(n+10);
    ll v{0};
    for (int i = 1; i < n; i++)
    {
        cin >> v;
        adj[i].push_back(i+v);
    }
    DFS(1);
    if (found)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}







