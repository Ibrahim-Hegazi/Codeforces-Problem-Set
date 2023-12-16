#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long 
#define ull unsigned long long
using namespace std;



int main() {
    fast;
    string a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.length(); i++)
    {
        char z = a[i];
        char y = b[i];
        int n = int(tolower(z));
        int m = int(tolower(y));

        if (n > m) {
            cout << 1;
            return 0;
        }
        else if (n < m) {
            cout << -1;
            return 0;
        }
    }
    cout << 0;
}
