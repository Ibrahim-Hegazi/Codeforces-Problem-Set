#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    ll n,k; cin >> n>>k;
    map<int, vector<int>>mp;
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        mp[temp].push_back(i + 1);
    }
    vector<int>ans;
    for (auto ele : mp) {
        int cnt = 0;
        while (k - ele.first >= 0 && cnt <ele.second.size() ) {
            ans.push_back(ele.second[cnt]);
            cnt++;
            k -= ele.first;
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
}


int main() {
    int t{1};// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
