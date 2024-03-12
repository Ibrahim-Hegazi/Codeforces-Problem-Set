#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int n; cin >> n;
    string result = "", minn = "zzz";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (i + j + k + 3 == n)
                {
                    result += char(i + 'a');
                    result += char(j + 'a');
                    result += char(k + 'a');
                    minn = min(result, minn);
                }
            }
        }
    }
    cout << minn<<"\n";
}


int main() {
    int t{ 1 }; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
