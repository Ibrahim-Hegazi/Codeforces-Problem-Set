#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e6+10;
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define per(i,n,a) for(int i=n;i>=a;i--)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
#define int long long
 
int h,n,m;
char s[20][20][20];
int vis[20][20][20];
int x,y;
int ans=0;
 
int dx[6]={1,-1,0,0,0,0};
int dy[6]={0,0,1,-1,0,0};
int dz[6]={0,0,0,0,1,-1};
struct node {
    int x,y,z;
};
void bfs(int x,int y,int z)
{
    queue<node> q;
    q.push({x,y,z});
    vis[x][y][z]=1;
    ans++;
    
    while(!q.empty())
    {
        node t=q.front();
        q.pop();
 
        for(int i=0;i<6;i++)
        {
            int x1=t.x+dx[i];
            int y1=t.y+dy[i];
            int z1=t.z+dz[i];
            if(x1<1||x1>h||y1<1||y1>n||z1<1||z1>m)    continue;
            if(vis[x1][y1][z1]==0&&s[x1][y1][z1]=='.')
            {
                vis[x1][y1][z1]=1;
                q.push({x1,y1,z1});
                ans++;
            }
                
        }
    }
}
void solve()
{
    cin >> h >> n >> m;
    for(int i=1;i<=h;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=m;k++)    cin >> s[i][j][k];
    
    cin >> x >> y;
    bfs(1,x,y);
    
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    //cin >> T;
    while(T--)
        solve();
}
