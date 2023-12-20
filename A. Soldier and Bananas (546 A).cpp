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

int main() {
    fast;
    ll k, n, w;
    cin >> k >> n >> w;
    ll tot = 0;
    for (int i = 1; i <= w; i++)
    {
        tot += i * k;
    }
    if (tot - n < 0)
        cout << 0;
    else
    cout << tot - n;
    return 0;
}
