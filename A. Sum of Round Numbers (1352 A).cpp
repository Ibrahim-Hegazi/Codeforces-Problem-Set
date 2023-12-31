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
    string s; cin >> s;
    vector<string>ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0') {
            string temp;
            temp.push_back(s[i]);
            for (int j = i; j < s.length()-1; j++)
            {
                temp.push_back('0');
            }
            ans.push_back(temp);
        }
    }
    cout << ans.size()<<"\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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
