#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long



int main() {
    fast;

    int t; cin >> t;
    while (t--) {
            
        int n; cin >> n;
        string s; cin >> s;
        string s2 = s;
        s.push_back(' ');
        s.push_back(' ');
        s2.push_back(' ');
        s2.push_back(' ');
        for (int i = 0; i < n;i++ )
        {
            if (s2[i] == 'a' || s2[i] == 'e')
                s2[i] = 'V';
            else
                s2[i] = 'C';
        }
        for (int i = 0; i < n; )
        {
            
            //Second Case
            if (s2[i] == 'C' && s2[i + 1] == 'V' && s2[i + 2] == 'C' && s2[i+3]!='V') {
                cout << s[i] << s[i + 1] << s[i + 2];
                i += 3;
            }
            //First Case
            else if (s2[i] == 'C' && s2[i + 1] == 'V' && s2[i + 2] != 'V') {
                cout << s[i] << s[i + 1];
                i += 2;
            }
            if (i < n)cout << ".";
        }
        cout << "\n";
    }
    return 0;
}
