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
    
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a{0}, d{0};
    for (ll j = 0; j < n; j++)
    {
        if (s[j] == 'A')
            a++;
        else
            d++;
    }
    if (a == d)
        cout << "Friendship";
    else if (a > d)
        cout << "Anton";
    else
        cout << "Danik";
    return 0;
}
 
