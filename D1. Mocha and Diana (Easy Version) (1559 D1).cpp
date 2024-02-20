#include <bits/stdc++.h>
using namespace std;

const int N = 1000 + 1;
int n;
int par[N];
void initial() {
    for (int i = 0; i < N; ++i) {
        par[i] = i;
    }
}
/// DP
int find(int u) {   ///
    if (u == par[u])return u;
    return par[u] = find(par[u]);
}
void unionset(int a, int b) {
    int r1 = find(a);
    int r2 = find(b);
    if (r1 == r2) {
        return;
    }
    if (r1 > r2)swap(r1, r2);
    par[r2] = r1;
}
int par2[N];
void initial2() {
    for (int i = 0; i < N; ++i) {
        par2[i] = i;
    }
}
/// DP
int find2(int u) {   ///
    if (u == par2[u])return u;
    return par2[u] = find2(par2[u]);
}
void unionset2(int a, int b) {
    int r1 = find2(a);
    int r2 = find2(b);
    if (r1 == r2) {
        return;
    }
    if (r1 > r2)swap(r1, r2);
    par2[r2] = r1;
}
int main() {
    initial();
    initial2();
    int m1, m2;
    cin >> n >> m1 >> m2;
    int a, b;
    for (int i = 0; i < m1; ++i) {
        cin >> a >> b;
        unionset(a, b);
    }
    for (int i = 0; i < m2; ++i) {
        cin >> a >> b;
        unionset2(a, b);
    }
    vector<pair<int, int>>v;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            int r1 = find(i), r2 = find(j);   /// graph 1
            int r21 = find2(i), r22 = find2(j);  /// 2
            if (r1 == r2)continue;   ///
            if (r21 == r22)continue;
            unionset(i, j);
            unionset2(i, j);
            v.push_back({ i,j });
        }
    }
    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}
