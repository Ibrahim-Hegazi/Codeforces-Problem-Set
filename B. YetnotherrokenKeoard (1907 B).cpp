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
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        stack<pair<char,int>>upper, lower;// char ,pos
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == toupper(s[i])) {
                upper.push({ s[i],i });
            }
            else if (s[i] == tolower(s[i])) {
                lower.push({ s[i],i });
            }
            if (s[i] == 'B') {
                upper.pop();
                s[i] = ' ';
                if (!upper.empty()) {
                    s[upper.top().second] = ' ';
                    upper.pop();
                }
            }
            else if (s[i] == 'b') {
                lower.pop();
                s[i] = ' ';
                if (!lower.empty()) {
                    s[lower.top().second] = ' ';
                    lower.pop();
                }
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ') {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
