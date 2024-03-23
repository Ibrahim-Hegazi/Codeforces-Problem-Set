#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXNODES 1e9;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Global variables to store yard dimensions, starting position, and total steps
ll rows{0}, columns{0}, answer{0};
ll xStart{0}, yStart{0};

// Function to check if moving 'factor'('mid') times in the given direction is valid
bool can(ll xCurrent, ll yCurrent, ll xNew, ll yNew,ll factor) {
    return ( ((xCurrent+(factor*xNew))<=rows)   && ((xCurrent + (factor * xNew)) >  0) && ((yCurrent + (factor * yNew)) <= columns) && ((yCurrent + (factor * yNew)) >0));
}


// Binary Search function to find maximum valid steps in a given direction
// In other words ,here we will apply binary search on how many times we can apply each vector ,then add the maximum valid vector movement
void BinarySearch(ll xCurrent,ll yCurrent,ll xNew,ll yNew) {  //Current variables refer to the current point we are standing on , while New variables are the Vector directions and values
    ll start{ 0 }, end{(ll)1e18 },mid{0};
    
    ll TemporarySteps;
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (can(xCurrent, yCurrent, xNew, yNew ,mid)) {
            
            start = mid + 1;
            TemporarySteps = mid;
        }
        else {
            end = mid - 1;
        }
    }
    xStart += xNew*TemporarySteps;
    yStart += yNew*TemporarySteps;
    answer += TemporarySteps;
}

void solve() {
    cin >> rows >> columns;
    cin >> xStart >> yStart;
    ll k; cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll xNew, yNew;
        cin >> xNew >> yNew;
        BinarySearch(xStart, yStart, xNew, yNew);
    }
    cout << answer;
}

int main() {
    fast;
    int t{ 1 }; //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
