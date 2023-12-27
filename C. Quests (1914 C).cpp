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
 
 
ll n, k;
 
void solve() {
    cin >> n >> k; vector<ll>first(n), sec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> first[i];
        if (i)
            first[i] += first[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> sec[i];
        if (i)
            sec[i] = max(sec[i], sec[i - 1]);
    }
    ll mx{ 0 };
    for (int i = 0; i < n; i++)
    {
        if (i >= k)
            break;
        mx = max(mx, first[i] + ((k - (i + 1)) * sec[i]  )       );
    }
    cout << mx << "\n";
}
 
int main()
{
    fast;
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
}
