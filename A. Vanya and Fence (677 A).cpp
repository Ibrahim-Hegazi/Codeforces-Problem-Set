#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    int n, h,ans{0},temp;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > h)ans += 2;
        else ans++;
    }
    cout << ans;
}
