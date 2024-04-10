#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve() {
    int a, b, c,cnt{0};
    cin >> a >> b >> c;
    while(a + b <= c){
        a++;
        cnt++;
    }
    while (a + c <= b) {
        c++;
        cnt++;
    }
    while (b + c <= a) {
        b++;
        cnt++;
    }
    cout << cnt;
}

int main() {
    int t{ 1 }; //cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
