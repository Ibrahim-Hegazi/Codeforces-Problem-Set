#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long 
#define ull unsigned long long
using namespace std;

int main() {
    fast;
    string s;
    cin >> s;
    vector<char>nums;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
            nums.push_back(s[i]);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1) {
            cout << nums[i];
        }
        else {
            cout << nums[i] << '+';
        }
    }
    return 0;
}
