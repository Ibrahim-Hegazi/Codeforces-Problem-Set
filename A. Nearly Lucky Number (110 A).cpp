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
 
int main() {
    fast;
    string s;
    cin >> s;
    int cnt{ 0 };
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '7' || s[i] == '4')
            cnt++;
    }
    bool lucky = true;
    if (cnt == 0) {
        cout << "NO";
        return 0;
    }
    while (cnt > 0) {
        if (cnt % 10 != 4 && cnt % 10 != 7) {
            lucky = false;
            break;
        }
        cnt /= 10;
    }
    if (lucky) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
