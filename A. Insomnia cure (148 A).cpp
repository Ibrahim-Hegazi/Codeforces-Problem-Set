#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	set<int> count;
	for (int i = k; i <= d; i += k)
		count.insert(i);
	for (int i = l; i <= d; i += l)
		count.insert(i);
	for (int i = m; i <= d; i += m)
		count.insert(i);
	for (int i = n; i <= d; i += n)
		count.insert(i);

	cout << count.size() << endl;
}
