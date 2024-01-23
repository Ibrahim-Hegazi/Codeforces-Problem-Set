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

int n, ans;
int x[101], y[101], vis[101];
 
void DFS(int node) {
    vis[node] = 1;
    for (int j = 0; j < n; ++j) {
        if (!vis[j] ){
          if(x[node] == x[j] || y[node] == y[j]) {
            DFS(j);
          }
        }
    }
}
 
int main(){
 
    fast;
    cin >> n;
    for (int i = 0; i < n; i++)cin >> x[i] >> y[i];
    for (int i = 0; i < n; ++i) {
        if (!vis[i])DFS(i), ans++;
    }
    cout << ans - 1;
 
    return 0;
}
