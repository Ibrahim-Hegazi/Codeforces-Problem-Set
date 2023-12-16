#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);std::cout.tie(0);
#define ll long long
#define ld long double
using namespace std;


int main() {
    fast;
    int arr[5][5];
    int row{ 0 }, col{ 0 };
    for (int i = 0; i < 5; i++)
        for (int k = 0; k < 5; k++)
        {
            cin >> arr[i][k];
            if(arr[i][k]==1)
            {
                row = i, col = k;
            }
        }
    cout << abs(3 - row-1) + abs(3 - col-1);
    return 0;
}
