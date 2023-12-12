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
    // Problem Link https://codeforces.com/problemset/problem/1907/A
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        char c = s[0];
        char num = s[1]-'0';
        for (int i = 1; i <= 8; i++)
        {
            if(i!=num)
            cout << s[0] << i << "\n";
        }
        for (int i = 0; i < 8; i++)
        {
            if(char('a'+i)!=c)
            cout << char('a'+i) << s[1] << "\n";
        }
    }
    return 0;
}
