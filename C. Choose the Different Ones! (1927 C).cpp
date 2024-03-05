#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    set<int>s1, s2;
    int cnt1{ 0 }, cnt2{ 0 };
    vector<int>shared;
    
    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        s1.insert(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp; cin >> temp;
        s2.insert(temp);
    }

    //Checking time , we have 4 cases 
    for (int i = 1; i <= k; i++)
    {
        //Found in both sets
        if (s1.find(i) != s1.end() && s2.find(i) != s2.end()) {
            shared.push_back(i);
        }
        //Found in set 1
        else if (s1.find(i) != s1.end()) {
            cnt1++;
        }
        //Found in set 2
        else if (s2.find(i) != s2.end()) {
            cnt2++;
        }
        //Nothing found
        else {
            cout << "NO\n";
            return;
        }
    }
    if (cnt1 + cnt2 + shared.size() == k && cnt1 <= k / 2 && cnt2 <= k / 2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}


int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
