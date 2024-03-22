#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXNODES 1001

ll n, money, AnswerItem{0}, AnswerCost{0};
vector<ll> v;  // value of the items

ll calc(ll k) {
    vector<ll> TemporaryCosts = v;
    for (int i = 0; i < n; i++) {
        TemporaryCosts[i] = TemporaryCosts[i] + (k * (i + 1));
        // It is important not to sort now because we want to apply the given cost function,
        // which considers the base cost of the item and its index multiplied by the number of items to buy.
        // We will sort after applying this function to each item.
    }
    // Now we can sort
    sort(TemporaryCosts.begin(), TemporaryCosts.end());
    // Now we can apply the prefix sum and sum up to 'k' items
    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += TemporaryCosts[i];
        if (sum > money) {
            return sum;
        }
    }
    return sum;
}

bool can(ll k) {
    ll sum = calc(k);
    // Check if the total cost of buying 'k' items is within the budget.
    if (sum <= money) {
        AnswerCost = sum;
        return true;
    } else {
        return false;
    }
}

ll binarySearch(ll start, ll end) {
    ll sum = 0;
    while (start <= end) {
        ll mid = start + (end - start) / 2;
        // 'mid' represents the number of items we are considering to buy within the budget (k).
        if (can(mid)) {
            AnswerItem = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;  // If the key is not found
}

void solve() {
    cin >> n >> money;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
  
    binarySearch(0, n);
    cout << AnswerItem << " " << AnswerCost;
}

int main() {
    int t{1};  // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
