#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    ll sum=0;
    for (int i = 0; i < n; ++i) {
        int temp;cin>>temp;
        sum+=abs(temp);
    }
    cout<<sum<<"\n";
}



int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
