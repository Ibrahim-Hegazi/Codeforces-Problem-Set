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


int n;
bool diff(int n) {
    int num1 = n % 10;
    n /= 10; 
    int num2 = n % 10;
    n /= 10;
    int num3 = n % 10;
    n /= 10;
    int num4 = n % 10;
    n /= 10;
    return (num1 == num2 || num1 == num3 || num1 == num4 || num2 == num3 || num2 == num4 || num3 == num4);
}

void solve() {
    cin >> n;
    n++;
    while (diff(n)) {
        n++;
    }
    cout << n;
}

int main()
{
    fast;
    int t{1};// cin >> t;
    while (t--) {
        solve();
    }
    
}



