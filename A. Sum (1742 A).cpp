#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
using namespace std;


int main() {
    fast;
    int a, b, c;
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
            cout << "YES\n";
        else cout << "NO\n";
    }
}
