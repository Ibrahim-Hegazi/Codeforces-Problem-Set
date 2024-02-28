#include<bits/stdc++.h>
using namespace std;

const int N = 1e2 + 5;
int parent[N], sz[N];

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        if (sz[x] < sz[y]) swap(x, y);
        parent[y] = x;
        sz[x] += sz[y];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> permutation(n + 1), favorite(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
    for (int i = 1; i <= n; i++) cin >> permutation[i];
    for (int i = 1; i <= n; i++) cin >> favorite[i];
    for (int i = 1; i <= n; i++) {
      /*The conditions if(i - d[i] >= 1) and if(i + d[i] <= n) are used to ensure that the indices of the cells we are trying to unite are within the valid range of the array (from 1 to n).

      The value d[i] is the favorite number of the i-th cell, and it determines which other cells this cell can directly exchange its value with. According to the problem statement, the i-th cell can exchange its value with the j-th cell if |i - j| = d[i]. This means the j-th cell could be d[i] positions to the left of the i-th cell (which gives j = i - d[i]) or d[i] positions to the right of the i-th cell (which gives j = i + d[i]).

      So, for each cell i, we try to unite it with the cell d[i] positions to its left (i - d[i]) and the cell d[i] positions to its right (i + d[i]), but only if these cells exist, i.e., their indices are within the valid range of the array. That’s why we check if i - d[i] >= 1 and i + d[i] <= n before trying to unite the cells.
      */
        if (i - favorite[i] >= 1) 
            unite(i, i - favorite[i]);
        if (i + favorite[i] <= n) 
            unite(i, i + favorite[i]);
    }
    for (int i = 1; i <= n; i++) {
      /*
      The find function is used to find the representative of the set that a cell belongs to. If two cells i and p[i] belong to the same set, it means that they can reach each other through a series of exchanges.

So, for each cell i, it checks if i and p[i] are in the same set. If they are not (find(i) != find(p[i])), it means that the i-th cell cannot reach its position in the final state through exchanges, so it prints “NO” and returns.

If all cells can reach their positions in the final state, it means that the final state is reachable, so it prints “YES”.

This is the final check after all the unions have been made based on the favorite numbers and the colors of the cells. It ensures that each cell ends up in the correct position according to the given permutation.
      */
        if (find(i) != find(permutation[i])) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
