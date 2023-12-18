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
 
    string s;
    ll cnt{0},n;
    cin >> n>>s;
    loop(n) {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt;
}
