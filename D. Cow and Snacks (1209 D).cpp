#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 5e6 + 7;
int parent[N];
int ans{ 0 };

void initial() {
    for (int i = 0; i < N; ++i) {
        parent[i] = i;
    }
}

int find(int u) { //Used to find the root of this node
    if (parent[u] == u) {
        return u;
    }
    else {
        return parent[u] = find(parent[u]); //DP
    }
}

void unionset(int a, int b) {
    int r1 = find(a);
    int r2 = find(b);

    if (r1 == r2) {
        ans++;
        return; // will cause a cycle if we connected these two node
        //We can make an external boolean to detect if we entered here or not
        //In other word to detect if we have a cycle or not
    }

    parent[r1] = r2;
}


int main() {
    int n,k; 
    initial();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) parent[i] = i;
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        unionset(x, y);
    }
    cout << ans << "\n";
    return 0;
}
