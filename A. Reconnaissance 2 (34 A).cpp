#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mn{ abs(v[0]-v[n-1])},idx1{0},idx2{n-1};
    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) < mn) {
            mn = abs(v[i] - v[i - 1]);
            idx1 = i;
            idx2 = i - 1;
        }
    }
    cout << idx1+1<< " "<<idx2+1;
}


int main() {
    int t{ 1 };// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
