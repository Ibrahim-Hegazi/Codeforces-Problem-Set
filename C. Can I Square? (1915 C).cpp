#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long



int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll sum{ 0 },temp{0};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        if (sqrt(sum) == int(sqrt(sum))) {
            cout << "YES\n";
        }
        else
            cout << "NO\n";

    }
    return 0;
}
