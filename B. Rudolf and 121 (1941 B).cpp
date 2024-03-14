#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i < n-2; ++i) {
        //These lines order is important
        if(v[i]<0){
            cout<<"NO\n";
            return;
        }
        v[i+1]-=2*v[i];
        v[i+2]-=v[i];
        v[i]-=v[i];
    }
    for(auto ele:v){
        if(ele!=0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}


int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
