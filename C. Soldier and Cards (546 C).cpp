#include<bits/stdc++.h>
#include <string.h>
#include <numeric>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll  long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define pb push_back
typedef priority_queue<int, vector<int>, greater<int>> pq_min;



void solve() {
    int n; cin >> n;
    int s1; cin >> s1;
    queue<int>q1;
    for (int i = 0; i < s1; i++)
    {
        int temp; cin >> temp;
        q1.push(temp);
    }
    int s2; cin >> s2;
    queue<int>q2;
    for (int i = 0; i < s2; i++)
    {
        int temp; cin >> temp;
        q2.push(temp);
    }
    int cnt = 0;
    while (!q1.empty() && !q2.empty())
    {
        if (cnt > 1e5)
        {
            break;
        }
        if (q1.front() < q2.front())
        {
            int tmp1 = q1.front();
            int tmp2 = q2.front();
            q1.pop();
            q2.pop();
            q2.push(tmp1);
            q2.push(tmp2);
            cnt++;
        }
        else if (q2.front() < q1.front())
        {
            int tmp1 = q2.front();
            int tmp2 = q1.front();
            q1.pop();
            q2.pop();
            q1.push(tmp1);
            q1.push(tmp2);
            cnt++;
        }
    }
    if (cnt > 1e5)
    {
        cout << -1 << endl;
    }
    else if (!q1.empty())
    {
        cout << cnt << " " << 1 << endl;
    }
    else
    {
        cout << cnt << " " << 2 << endl;
    }
}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
