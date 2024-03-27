#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll intro,extro,uni; // Variable that gonna hold that value for each group of people
    cin>>intro>>extro>>uni;
    ll ans{0};
    ans+=intro; // Introvertes want to be only
    if(extro%3!=0){ // Checking if we can satisfy the extroverted people needs

        if(uni<3-(extro%3)) // If we can add some of the universal people to the extroverted people to satisfy the extroverted people
        {
            cout<<"-1\n";
            return;
        }
        else{
            ans+=ceil((extro+uni)/3.0);
        }
    }
    else{
        ans+=extro/3;
        ans+=ceil(uni/3.0);
    }
    cout<<ans<<"\n";
}



int main()
{
    int t{1};cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
