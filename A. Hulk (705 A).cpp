#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	for (int i = 1; i < n+1; i++)
		cout << ((i % 2 == 0) ? "I love " : "I hate ") << ((i == n) ? "it " : "that ");
}
//This code could have been inside the loop
/*if (i == n) {
			if (i % 2 == 0)
				cout << "I love it ";
			else
				cout << "I hate it ";
		}
		else
		{
			if (i % 2 == 0)
				cout << "I love that ";
			else
				cout << "I hate that ";
		}*/
