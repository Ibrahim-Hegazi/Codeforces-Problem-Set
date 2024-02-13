#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Fast input/output
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast();
    int t; cin >> t;
    x:
    while (t--) {

        int n; cin >> n;
        vector<int>v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mn{ INT_MAX };
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] < mn) {
                mn = v[i] - v[i - 1];
            }
        }
        cout << mn << "\n";
    }
    
    return 0;
}
