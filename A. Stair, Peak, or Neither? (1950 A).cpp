#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int a ,b,c;
    cin>>a>>b>>c;
    if (a<b&& b<c)
        cout<<"STAIR\n";
    else if(a<b && b>c)
        cout<<"PEAK\n";
    else
        cout<<"NONE\n";
}

int main() {
    int t{1};cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
