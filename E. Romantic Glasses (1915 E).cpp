#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define loop(n) for(ll i=0;i<n;i++)
#define lop(m) for(ll j=0;j<m:j++)
#define lpse(i,s,e)for (ll i = s; i <=e ; i++)
using namespace std;
//Alternating Colors Problems
void solve() {
    ll n; cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i % 2 == 1) {
            v[i] = -v[i];
        }
    }
    ll sum{ 0 };
    map<ll, ll>freq;
    freq[0]++;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        freq[sum]++;
        if (freq[sum] > 1) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    fast;
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    
}
