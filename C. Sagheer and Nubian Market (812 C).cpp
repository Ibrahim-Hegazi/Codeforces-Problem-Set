#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXNODES 1001


ll n, money,AnswerItem{0},AnswerCost{0};
vector<ll>v;//value of the items


ll calc(ll k) {
    vector<ll>TemporaryCosts = v;
    for (int i = 0; i < n; i++)
    {
        TemporaryCosts[i] = TemporaryCosts[i] + (k * (i + 1));
        //It is  important to not sort now 
        //Because we will need to sort based on the cummulative cost of the item itself and its index multiplied by the number of items we gonna buy (In other words , we want to sort after we apply the given function which can be found in the question) 
    }
    //Now we can sort
    sort(TemporaryCosts.begin(), TemporaryCosts.end());
    //Now we can apply the prefix sum and we will end summing when we reach the number of items that we determined using the binary serach
    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += TemporaryCosts[i];
        if (sum > money) {//This if condition is used to reduce the number of loops in some cases
            return sum;
        }
    }
    return sum;
}

bool can(ll k) {
    ll sum = calc(k);
    if (sum <= money) {
        AnswerCost = sum;
        return true;
    }
    else {
        return false;
    }
}


ll binarySearch(ll start, ll end ) {
    ll sum = 0;
    while (start <= end) {
        ll mid = start +(end - start) / 2; //mid == k in the question or the number of the items that we gonna buy
        if (can(mid)) {
            AnswerItem = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;//If the key is not found
}




void solve() {
    cin >> n >> money;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
  
    binarySearch(0, n );
    cout << AnswerItem << " " << AnswerCost;
}

int main() {
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
