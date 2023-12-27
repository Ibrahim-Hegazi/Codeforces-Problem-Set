#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long 
#define ull unsigned long long
#define loop(n) for(ll i=0;i<n;i++)
#define lop(m) for(ll j=0;j<m:j++)
#define lpse(i,s,e)for (ll i = s; i <=e ; i++)
using namespace std;


char grid[3][3];
string ans ="ZZZ";
int dx[] = { 0, 0, 1, -1, -1, -1, 1, 1 }; 
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
void compareAndChange(string v) {
    if(v<= ans){
        ans = v;
    }
}
bool valid(int i, int j) {
    return (i >= 0 && i < 3 && j >= 0 && j < 3 );
}
void backtracking(string v,int x,int i,int j,int lasti,int lastj) {//X is for the current variable number that we are at
    if (!valid(i, j) || (i == lasti && j == lastj)) return;
    v[x] = grid[i][j];
    if (x == 2) {
        compareAndChange(v);
        return;
    }
    for (int o = 0; o < 8; o++)
    {
        int ii = i + dx[o];
        int jj = j + dy[o];
        if (ii != lasti || jj != lastj)
        backtracking(v, x+1, ii, jj,i,j);
    }
}

void solve() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }
    string temp{"   "};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            backtracking(temp, 0,i,j,-1,-1);
        }
    }

    cout << ans;
    ans = "ZZZ";
}

int main()
{
    fast;
    int t{1}; //cin >> t;
    while (t--) {
        solve();
    }
    
}
