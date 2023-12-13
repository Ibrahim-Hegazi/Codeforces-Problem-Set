#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
using namespace std;

int main() {
    fast;
    string a;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        if (a.length() > 10)
        {
            cout << a[0] << a.length() - 2 << a[a.length() - 1] << "\n";
        }
        else
            cout << a << "\n";
    }
}
