#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int lower = 0;
	int upper = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == tolower(s[i])) {
			lower++;
		}
		if (s[i] == toupper(s[i])){
			upper++;
		}
	}
	if (upper > lower) {
		for (int i = 0; i < s.length();i++)
		{
			s[i] = toupper(s[i]);
		}

	}
	else {
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = tolower(s[i]);
		}
	}
	cout << s;
	return 0;
}
