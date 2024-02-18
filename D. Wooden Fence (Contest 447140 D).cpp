//This problem wont be found in the normal problem set on codeforces
//Here is the problem link :   https://codeforces.com/group/NMrIeaZW39/contest/447140/problem/D

//Here is my solution
#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n, x, y; cin >> n >> x >> y;
	if (ceil(n / 2.0) > x || floor(n / 2.0) > y)
	{
		cout << "NO\n";
		return;
	}
	else {
		cout << "YES\n";
		return;
	}
}
int main() {
	int t{ 1 }; cin >> t;
	while (t--) {
		solve();
	}
}
