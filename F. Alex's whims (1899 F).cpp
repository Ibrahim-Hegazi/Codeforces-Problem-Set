#include<bits/stdc++.h>
#include <string.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
typedef priority_queue<int, vector<int>, greater<int>> pq_min;



void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i < n; i++)
    {
        cout << i << " " << i + 1 << "\n";
    }
    //to keep track of our parent node we need some variable
    int parent = n-1;
    while (q--) {
        int dist; cin >> dist;
        if (dist == parent)//need to check this codition
            cout << "-1 -1 -1\n";
        else
        {
            cout << n << " " << parent << " " << dist << "\n";
            parent = dist;
        }
    }
}

int main() {
    fast;
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
