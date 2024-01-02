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

void solve() {
    ll n; cin >> n;
    if (n % 2 == 1)
        cout <<fixed<<setprecision(0)<< "-" << ceil(n / 2.0);
    else
        cout << fixed << setprecision(0) << ceil(n / 2.0);
}

int main()
{
    fast;
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    
}
