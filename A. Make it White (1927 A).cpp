#include<bits/stdc++.h>
#include <string.h>
#include <numeric>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll  long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
typedef priority_queue<int, vector<int>, greater<int>> pq_min;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p1{ 0 }, p2{(int)s.length() - 1 };
    while (p1 < p2) {
        if (s[p1] != 'B') {
            p1++;
        }
        else if (s[p2] != 'B')
            p2--;
        else
            break;
    }
    cout << p2 - p1+1<<"\n";
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
