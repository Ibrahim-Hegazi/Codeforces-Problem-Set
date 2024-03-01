#include<iostream>
#define int long long
using namespace std;
const int N = 4e5 + 5;
int f[N], ans[N], sum[N], a[N], del[N];
int find(int x){
	if(x == f[x]) return x;
	return f[x] = find(f[x]);
}
void init(int n){
	for(int i = 0; i <= n; i++) f[i] = i;
}
void merge(int x, int y){
	x = find(x), y = find(y);
	if(x != y){
		f[y] = x;
		sum[x] += sum[y];
	}
}
signed main(){
	int n;
	int cnt = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> del[i];
	for(int i = n; i >= 1; i--){
		f[del[i]] = del[i];
		sum[del[i]] = a[del[i]];
		if(f[del[i] - 1]) merge(del[i] - 1, del[i]);
		if(f[del[i] + 1]) merge(del[i] + 1, del[i]);
		cnt = max(cnt, sum[find(del[i])]);
		ans[i] = cnt;
	}
	for(int i = 2; i <= n; i++) cout << ans[i] << endl;
	cout << 0;
	return 0;
}
