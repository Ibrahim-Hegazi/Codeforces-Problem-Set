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
    //For each player we want to compare between : Leaving the biggest number in his or her bag OR removing the biggest value in the opponents bag
    ll n{ 0 }; cin >> n;
    vll v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vp temp;
    for (int i = 0; i < n; i++)
    {
        temp.pb({ v1[i] + v2[i],i });
    }
    rsrt(temp);
    ll ans{0};
    for (int i = 0; i < n; i++)
    {
        //Alice Turn
        if (i % 2 == 0) {
            ans += v1[temp[i].second] - 1; //Error might occur here if you didnt take care which index you are using
        }
        //Bob Turn
        else {
            ans -= v2[temp[i].second] - 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    fast;
    
    int t{1}; cin >> t;
    while (t--) {

        solve();
        
    }
    return 0;
}
