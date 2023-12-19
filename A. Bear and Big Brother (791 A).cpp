#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long 
#define ull unsigned long long
#define loop(n) for(ll i=0;i<n;i++)
#define lop(m) for(ll j=0;j<m:j++)
#define lpse(i,s,e)for (ll i = s; i <=e ; i++)
using namespace std;



int main() {

	ll a, b;
	cin >> a >> b;
	int count = 0;
	while (a <= b) {
		a = a * 3;
		b = b * 2;
		count++;
	}
	cout << count << endl;
  
    return 0;
}
