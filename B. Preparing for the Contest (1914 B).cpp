#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
    fast;
    int t{0},n{0},k{0}; cin >> t;
    while (t--) {
        cin >> n >> k;
        int left = 1, right = n;
        vector<int>v;
        
        while (k>=1) {
            v.push_back(left);
            left++;
            k--;
        }
        while (right >= left) {
            v.push_back(right);
            right--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}
