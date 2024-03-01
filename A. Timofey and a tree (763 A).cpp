#include<bits/stdc++.h>
#define _ (int)(1e5 + 4)
using namespace std;

int n, ck;
int fa[_], c[_];
vector<int> t[_];

int find(int x) {
    if(fa[x] == x) return x;
    return fa[x] = find(fa[x]);
}
void merge(int u, int v) {
    fa[find(u)] = find(v);
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i ++) fa[i] = i;
    for(int i = 1; i < n; i ++) {
        int u, v; cin >> u >> v;
        t[u].push_back(v);
        t[v].push_back(u);
    }
    for(int i = 1; i <= n; i ++) cin >> c[i];
    for(int i = 1; i < n; i ++) {
        for(int v : t[i]) {
            if(c[i] == c[v]) merge(i, v);
        }
    }
    for(int i = 1; i <= n; i ++) {
        if(fa[i] == i) ck ++;
    }
    for(int i = 1; i <= n; i ++) {
        int pi = find(i), c = 0;
        for(int v : t[i]) {
            if(find(v) != pi) c ++;
        }
        if(ck - 1 == c) {
            cout << "YES\n" << i;
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
