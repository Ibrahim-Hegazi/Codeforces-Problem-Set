#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
 
 
 
int main() {
    fast;
 
    int t; cin >> t;
    while (t--) {
        vector<int>v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if (v[0] == v[1])
            cout << v[2]<<"\n";
        else
            cout << v[0]<<"\n";
    }
    return 0;
}
