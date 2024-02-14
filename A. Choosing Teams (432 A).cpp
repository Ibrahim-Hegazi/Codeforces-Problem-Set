#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Fast input/output
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast();
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (5 - temp >= k)
            cnt++;
    }
    cout << cnt / 3;
    return 0;
}
