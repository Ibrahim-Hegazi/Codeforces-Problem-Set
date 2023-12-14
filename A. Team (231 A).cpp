#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);std::cout.tie(0);
#define ll long long
#define ld long double
using namespace std;

int main() {
  fast;
    int n,cnt2{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x{ 0 },cnt{0};
        for (int z = 0; z < 3; z++)
        {
            cin >> x;
            if (x == 1)
                cnt++;
        }
        if (cnt >= 2)
            cnt2++;
    }
    cout << cnt2;
    return 0;
}
