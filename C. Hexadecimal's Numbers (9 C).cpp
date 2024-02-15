#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long n, cnt{ 0 };
void rec(long long temp) {
	if (temp > n)
		return;
	else {
		rec(temp * 10);
		rec(temp * 10 + 1);
		cnt++;
	}
}


int main() {
	cin >> n;
	rec(1);
	cout << cnt;
}
