#include <iostream>
using namespace std;
int main(){
	int w;
	cin>>w;
	if(w/2==1){
		cout<<"NO";
		return 0;
	}
	if(w%2!=0)
	cout<<"NO";
	else
	cout<<"YES";
}
