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

int main()
{
    int n,cnt{0},temp; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        cnt += temp;
        if (cnt >= 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}
