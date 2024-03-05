#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


//In this problem he will give us the some array that looks like a frequency array and we should find the appropriate string to output
void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    char c = 'a';
    string ans = "";
    map<char, int>freq;
    for (int i = 0; i < n; ++i) {
        if (v[i] == 0) {
            ans += c;
            freq[c]++;
            c++;
        }
        else { //Now we will need to find a letter which will have a v[i] value then add that letter to the string
            for (auto ele : freq) {
                if (ele.second == v[i]) {
                    ans += ele.first;
                    freq[ele.first]++;
                    break;

                }
            }
        }
    }
    cout << ans << "\n";
}


int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
