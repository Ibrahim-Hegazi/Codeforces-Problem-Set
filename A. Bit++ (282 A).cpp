#include <iostream>
using namespace std;
int main(){
    string s;
    int n,cnt{0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
        cnt++;
        else cnt--;
    }cout<<cnt;
}
