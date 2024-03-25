#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
#define vll vector<ll>
#define vp vector<pair<ll,ll>>


void solve() {
    int n, k;
    cin >> n >> k;
    float year{ 2023 };int temp{ 0 };
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (year / temp == int(year / temp)) {
            year/=temp;
        }
        else if(!flag) {
            cout << "NO\n";
            flag = true;
        }
    }
    if (flag)
        return;
    cout << "YES\n";
    while (k--) {
        if (year != 1) {
            cout << int(year) << " ";
            year /= year;
        }
        else
            cout << "1 ";
    }
    cout << "\n";

}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {

        solve();

    }
    return 0;
}
