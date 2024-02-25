#include <iostream>
using namespace std;
int main()
{
    int n, s, h, m;
    cin >> n >> s ;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        a[i] = h * 60 + m;
    }
    if (a[0]-s-1>=0)
    {
        cout << "0 0";
        return 0;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i + 1] - a[i] > 2 * s + 1) {
            cout << (a[i] + s + 1) / 60 << " " << (a[i] + s + 1) % 60;
            return 0;
        }
    }
    cout << (a[n-1] + s + 1) / 60 << " " << (a[n-1] + s + 1) % 60;
    return 0;
}
