#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

int n;
int grid[10][10];
vector<int>v;

bool check() {
    bool triangle = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (triangle) {
            if ((v[i + 1] == v[i] + 2 || v[i + 1] == v[i] - 2) && v[i + 1] != v[i]) {
                continue;
            }
            else if (v[i] == 0)
                return true;
        }
        else if (v[i] != 0 && v[i+1]!=v[i])
            triangle = true;
        if (v[i + 1] == v[i] && v[i]!=0)
            return false;
    }
    return triangle;
}

void solve() {
    cin >> n;
    v.assign(n, 0);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int cnt{ 0 };
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = s[j]-'0';
            if(grid[i][j]==1)
                cnt++;
        }
        v[i] = cnt;
    }
    
    if (check())
        cout << "TRIANGLE"<<endl;
    else
        cout << "SQUARE"<<endl;
}


int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
