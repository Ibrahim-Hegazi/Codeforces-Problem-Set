#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main() {
    fast;
    int n, a, b, cnt{ 0 }, mx{ INT_MIN };
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cnt -= a;
        cnt += b;
        mx = max(mx, cnt);
    }
    cout << mx;
    return 0;
}
