#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int n, s;
vector<pair<double, int>>v;//contains the distance from the main city of the other cities and the number of people in the other city

bool can(int k) {
    if (s + k >= 1000000) {
        return true;
    }
    else {
        return false;
    }
}

double BinarySearch() {
    ll s{ 0 }, e{ n }, mid;
    double ans{ 0 };
    while (s <= e) {
        ll mid = s + (e - s) / 2;
        if (can(v[mid].second)) {
            ans = v[mid].first;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;

}



void solve() {
    cin >> n >> s;
    int x, y, k;
    double dist;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y >> k;
        dist = sqrt(pow(0 - x, 2) + pow(0 - y, 2));
        v.push_back({ dist,k });
        
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i) {
            v[i].second += v[i - 1].second;
        }
        if (i == n - 1) { //Validating if we have a possible answer
            if (s + v[i].second <= 1000000)
            {
                cout << -1;
                return;
            }
        }
    }
    double ans = BinarySearch();
    cout <<fixed<<setprecision(7)<< ans;
}

int main() {
    int t{ 1 };//cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
