using namespace std;
#include <iostream>
#include<bits/stdc++.h>
int main()
{
	int k,count=0;
	cin >> k;
	int y[12];
	for (int i = 0; i < 12; i++)
		cin >> y[i];
	sort(y, y + 12);
	int t = 0;
	for (int i = 11; i >= 0; i--) {
		if (t >= k)
			break;
		t += y[i];
		count++;
	}
	if (t >= k)
		cout << count;
	else
		cout << "-1";
	return 0;
}
