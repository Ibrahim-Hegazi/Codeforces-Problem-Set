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
    ll n,m; cin >> n>>m;
    int c{0}, y{0}, mag{0};
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            if (temp == 'C')
                c++;
            else if (temp == 'M')
                mag++;
            else if (temp == 'Y')
                y++;
        }
    }
    if (mag || c || y)
        cout << "#Color";
    else
        cout << "#Black&White";
}

int main() {
    fast;
    
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
