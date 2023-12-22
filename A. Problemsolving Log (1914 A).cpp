#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
    fast;
    int t{ 0 }, n{ 0 }; string s; cin >> t;
    while (t--) {
        cin >> n >> s;
        map<char, int>mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int ans{ 0 };
        for (auto item : mp) {
            if (int(item.first - 65) < item.second) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
