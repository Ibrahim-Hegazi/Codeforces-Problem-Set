#include <iostream>
using namespace std;
int main()
{
    //My Way
    /* string arr[1000];
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (int(s[0]) + int(s[1]) + int(s[2]) == int(s[3]) + int(s[4]) + int(s[5]))
            arr[i] = "YES";
        else
            arr[i] = "NO";
    }
    for (int i = 0; i < t; i++)
        cout << arr[i] << endl;*/



    //Better way(sohil's way)
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        cout << (s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "YES\n" : "NO\n"); //Here we are comparing ascii values
    }
}
