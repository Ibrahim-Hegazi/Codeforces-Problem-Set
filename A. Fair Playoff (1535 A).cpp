#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    vector<int>v1(4), v2(4);
    int win1{ 0 }, win2{ 0 };
    for (int i = 0; i < 4; i++)
    {
        cin >> v1[i];
        if (i == 1) {
            win1 = max(v1[i], v1[i - 1]);
        }
        if (i == 3) {
            win2 = max(v1[i], v1[i - 1]);
        }
    }
    v2 = v1;
    sort(v2.begin(), v2.end());
    if ((win1 == v2[3] || win1 == v2[2]) && (win2 == v2[3] || win2 == v2[2]))
        cout << "YES\n";
    else
        cout << "NO\n";
}


int main() {
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
