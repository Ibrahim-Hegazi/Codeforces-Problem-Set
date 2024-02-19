#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n; cin >> n;
	vector<int>v(n);
	long long sum{ 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 1; i < n; i++)
	{
		sum += (v[i] - v[i - 1]);
	}
	cout << sum << endl;
}
int main() {
	int t{ 1 }; cin >> t;
	while (t--) {
		solve();
	}
}
