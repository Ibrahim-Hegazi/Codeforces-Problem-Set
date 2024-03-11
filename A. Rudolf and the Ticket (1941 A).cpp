#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int>v1(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    ll cnt{ 0 };
    for (int i = 0; i < n; i++) // For the first pocket
    {
        for (int j = 0; j < m; j++) //For the second pocket 
        {
            if (v1[i] + v2[j] <= k)
                cnt++;
        }
    }
    cout << cnt << "\n";
}


int main() {
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
