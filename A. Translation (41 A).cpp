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
 
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
