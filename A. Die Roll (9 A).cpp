using namespace std;
#include <iostream>
#include<bits/stdc++.h>
int main()
{
	double y, w;
	int maxx;
	string prop[6] = { "1/1","5/6","2/3","1/2","1/3","1/6"};
	cin >> y >> w;
	maxx = max(y, w);
	cout << prop[maxx-1];
}
