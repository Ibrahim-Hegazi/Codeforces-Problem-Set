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
    ll mn{LLONG_MIN},ans{0},temp{0},zero{0};
    vector<pair<ll,ll>>pos,neg;
    for (int i = 0; i < n; i++)
    {
        cin >>temp;
        if (temp > 0)
            pos.push_back({ temp,i });
        else if (temp == 0)
            zero++;
        else
            neg.push_back({ temp,i });
    }
    if (zero)
        cout << "0\n";
    else if (neg.size() % 2 == 0 && neg.size()>0 ) {
        srt(neg);
        cout << "1\n" << neg.back().second + 1 << " 0\n" ;
    }
    else if (neg.size() %2 != 0)    {
        cout << "0\n";
    }
    else if(pos.size()>0) {
        cout << "1\n" << pos.back().second + 1 << " 0\n";
    }
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
