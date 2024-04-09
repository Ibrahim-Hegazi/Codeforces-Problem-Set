#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve() {
    ll CostOfTheShovel, SmallCoin;
    cin >> CostOfTheShovel >> SmallCoin;
    for (int i = 1; i < long(1e9); i++)
    {

        int LastDigit = (i*CostOfTheShovel) % 10;
        if (LastDigit == SmallCoin || LastDigit==0 ) {
            cout << i;
            break;
        }
    }
}

int main() {
    int t{ 1 }; //cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
