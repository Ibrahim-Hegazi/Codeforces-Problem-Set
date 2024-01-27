 #include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    char c = 'a';
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < k; j++)
        {
            s += c;
            c++;
        }
        c = 'a';
    }
    cout << s << "\n";
}

int main()
{
    fast;
    int t{1}; cin >> t;
    while (t--) {
        solve();
    }
    
}
