#include <iostream>
using namespace std;
int main()
{
	long long n, m, current, remaining = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> current;
		long long total = remaining + current;
		long long cnt = total / m;
		remaining = total % m;
		cout << cnt << " ";
	}
	return 0;
}
/* for each day, we calculate the total number of names to be written (which is the sum of the remaining space on the current page and the names to be written on the current day). Then, we calculate how many times we will turn the page (cnt) by dividing the total number of names by the capacity of each page (m). The remaining space on the current page is then updated to be the remainder of the division.*/
