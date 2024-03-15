#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int  n,m;cin>>n>>m;
        cout<<max(n,m)<<"\n";
    }
    return 0;
}
