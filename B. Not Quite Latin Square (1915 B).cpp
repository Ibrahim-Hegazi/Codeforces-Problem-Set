#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long



int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        char temp = ' ';
        for (int i = 0; i < 3; i++)
        {
            bool no=false, a =false, b =false, c = false;
            for (int j = 0; j < 3; j++)
            {
                cin >>temp;
                if (temp == '?')
                    no = true;
                
                if (temp == 'A')
                    a = true;
                else if (temp == 'B')
                    b = true;
                else
                    c = true;
                
            }
            if (a && b&&no)
                cout << "C" << "\n";
            else if (b && c&&no)
                cout << "A\n";
            else if (a && c && no)
                cout << "B\n";
                
        }

    }
    return 0;
}
