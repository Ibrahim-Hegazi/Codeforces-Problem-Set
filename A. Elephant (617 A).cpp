#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {

    ll n; cin >> n;
    ll cnt{0};
    cnt += n / 5;
    n %= 5;
    if (n == 0)
        cout << cnt;
    else
        cout << cnt + 1;
    return 0;
}
