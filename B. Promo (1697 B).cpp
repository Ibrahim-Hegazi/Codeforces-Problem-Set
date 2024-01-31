#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);std::cout.tie(0);
#define ll long long
#define ld long double
using namespace std;




int main() {
    int n, q;
    cin >> n >> q;
    vector<ll>v(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll>prefix(n+1);
    prefix[0] = v[0];
    for (int i = 1 ; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    reverse(prefix.begin(), prefix.end());
    ll x, y;
    while (q--) {
        cin >> x >> y;
        cout << abs(prefix[x] - prefix[x - y]) << "\n";
    }
}
