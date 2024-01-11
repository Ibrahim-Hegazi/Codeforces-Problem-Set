#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
#define vll vector<ll>
#define vp vector<pair<ll,ll>>



void solve() {
    int n; cin >> n;
    int cnt1{ 0 }, cnt2{ 0 };
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == '+')
            cnt1++;
        else
            cnt2++;
    }
    cout << abs(cnt1 - cnt2) << "\n";
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
