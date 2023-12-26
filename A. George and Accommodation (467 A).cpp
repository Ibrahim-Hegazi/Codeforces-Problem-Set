#include<iostream>
using namespace std;
 
int main()
{  long long n,coun=0;
 
cin>>n;
for(int i=1;i<=n;++i){
    int r,n;
    cin>>r>>n;
    int d=0;
    d=n-r;
    if(d>=2){
     coun++;
    }
}
cout<<coun;
return 0;
}
