#include <iostream>
#include<math.h>
#include <cstdio>
using namespace std;
int main()
{
	int n, k;
	double total = 0;
	int x[200], y[200];
	cin >> n >> k;
	for (size_t i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (size_t i = 0; i < n - 1; i++)
		total += sqrt(pow((x[i] - x[i + 1]), 2) + pow((y[i] - y[i + 1]), 2));
	printf("%f\n", k * (total / 50));
} 
