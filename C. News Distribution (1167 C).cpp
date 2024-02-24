#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N=5e6+7;
int parent[N];


void initial(){
    for (int i = 0; i < N; ++i) {
            parent[i]=i;
    }
}

int find(int u){ //Used to find the root of this node
    if(parent[u]==u)
        return u;
    else
        return parent[u]=find(parent[u]); //DP
}

void unionset(int a,int b){
    int r1=find(a);
    int r2=find(b);

    if(r1==r2) {
        return; // will cause a cycle if we connected these two node
        //We can make an external boolean to detect if we entered here or not
        //In other word to detect if we have a cycle or not
    }

    if(r1>r2)//r2 must be the big boi
        swap(r1,r2);

    parent[r2]=r1;
}

int main() {
    int n,m;cin>>n>>m;
    initial();
    for (int i = 0; i < m; ++i) {
        int sz;cin>>sz;
        vector<int>temp(sz+1);
        for (int j = 0; j < sz; ++j) {
            cin>>temp[j];
        }

        for (int j = 0; j < sz-1; ++j) {
            unionset(temp[j],temp[j+1]);
        }
    }

    vector<int>freq(n+1,0);
    for (int i = 0; i <= n; ++i) {
        freq[find(i)]++;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<freq[find(i)]<<" ";
    }
    return 0;
}
