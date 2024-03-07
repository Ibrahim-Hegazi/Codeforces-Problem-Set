#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    if ((arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[2] + arr[1] > arr[0]) || (arr[3] + arr[1] > arr[2] && arr[3] + arr[2] > arr[1] && arr[2] + arr[1] > arr[3]))
        cout << "TRIANGLE";
    else if ((arr[0] + arr[1] >= arr[2] && arr[0] + arr[2] >= arr[1] && arr[2] + arr[1] >= arr[0]) || (arr[3] + arr[1] >= arr[2] && arr[3] + arr[2] >= arr[1] && arr[2] + arr[1] >= arr[3]))
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
}
