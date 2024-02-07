#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n, p, a,cnt{1};
    int arr[200];
    cin >> n >>p;
    for (int i = 0; i < p; i++)
        cin >> arr[i];
    cin >> a;
    for (int i = p; i < p + a; i++)
        cin >> arr[i];
    sort(arr, arr + p + a);
    for (int i = 0; i < p + a; i++)
        if (cnt == arr[i])
            cnt++;
    cout << ((cnt == n + 1) ? "I become the guy." : "Oh, my keyboard!");
}
