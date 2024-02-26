#include<bits/stdc++.h>
using namespace std;

const int N = 2e3 + 5;
int parent[N], sz[N], dislike[N];

int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) {
        if(sz[x] < sz[y]) swap(x, y);
        parent[y] = x;
        sz[x] += sz[y];
    }
}

int main() {
    int n, k, m;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
    for(int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;
        unite(u, v);
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if(find(u) == find(v)) dislike[find(u)] = true;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(parent[i] == i && !dislike[i]) ans = max(ans, sz[i]);
    }
    cout << ans << "\n";
    return 0;
}
/*This code first initializes each person as their own set with size 1. Then, for each pair of friends, it unites their sets. After that, it processes the pairs of people who dislike each other. If two people who dislike each other are in the same set, it marks that set as disliked. Finally, it finds the largest set that is not disliked and prints its size. This is the maximum number of people that can be invited to the party. If no such set exists, it prints 0. This solution works in O(n) time. Please replace N with the maximum number of acquaintances the Beaver can have.*/
/*
why parent[i] == i ???
In the Disjoint Set Union (DSU) data structure, each set is represented by a tree, where each node points to its parent. The root of the tree is the representative of the set, and it is the only node in its tree that points to itself.

So, parent[i] == i is used to check if i is the root of its set. If parent[i] == i, then i is the root of the set, and thus it represents the set in the DSU structure. If parent[i] != i, then i is not the root, and we need to follow the parent pointers to find the root.

This property is used in the find function to identify the representative of the set, and in the union function to merge two sets. In the main function, it is used to iterate over all sets (by iterating over all their representatives).
*/
