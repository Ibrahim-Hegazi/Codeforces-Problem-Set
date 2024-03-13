#include <iostream>
#include <vector>
using namespace std;

void solve() {
    //To solve this problem we will need to check for map , pie , and mapie  ; if we found any of then we will delete the middle letter (in other words increment the counter by one)
    int n; cin >> n;
    string s;
    cin >> s;
    string temp;
    int cnt{ 0 };
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'p' || s[i] == 'm') {
            if (s.substr(i, 5) == "mapie") { // The main tricky case
                cnt++;
                i += 3;
            }
            else if (s.substr(i, 3) == "map") {
                cnt++;
                i += 1;
            }
            else if (s.substr(i, 3) == "pie") {
                cnt++;
                i += 1;
            }
        }
    }
    cout << cnt<<"\n";
}

int main() {
    int t = 1;  cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
