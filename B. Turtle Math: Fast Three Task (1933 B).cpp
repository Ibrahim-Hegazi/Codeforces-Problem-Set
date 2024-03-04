#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    ll sum=0;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%3==0){
        cout<<"0\n";
        return;
    }
    for(auto ele :v ){
        if((sum-ele)%3==0){
            cout<<"1\n";
            return;
        }
    }
    if(sum%3==2)
    {
        cout<<"1\n";
        return;
    }
    else{
        cout<<"2\n";
        return;
    }
}



int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
