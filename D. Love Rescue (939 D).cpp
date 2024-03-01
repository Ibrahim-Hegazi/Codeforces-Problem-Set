#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>parent,sizes;
vector<pair<ll,ll>>ans;
ll findParent(int x)
{
    if(parent[x] == x)
    return x;
    else
    return parent[x] = findParent(parent[x]);
}
void unionBysizes(ll pu, ll pv)
{
    ans.push_back({pu,pv});
    parent[pv] = pu;
    if(sizes[pv] == sizes[pu])
    {
        sizes[pu]++;
    }
}
int main()
{
    ll n; cin>>n;
    string s1,s2; cin>>s1>>s2;
    vector<pair<char,char>>v;
    for (ll i = 0; i < n; i++)
    {
        if(s1[i]!=s2[i])
        {
            v.push_back({s1[i]-'a',s2[i]-'a'});
        }
    }
    parent.resize(26),sizes.resize(26,1);
    for (ll i = 0; i < 26; i++)
    {
        parent[i] = i;
    }
    
    for(auto it : v)
    {
        ll pu = findParent(it.first);
        ll pv = findParent(it.second);
        
        if(pu != pv)
        {
            if(sizes[pu] < sizes[pv])
            swap(pu,pv);
            unionBysizes(pu,pv);
        }
    }
    
    cout<<ans.size()<<endl;
    for(auto it : ans)
    {
        cout<<char(it.first+'a')<<" "<<char(it.second+'a')<<endl;
    }
    
}
