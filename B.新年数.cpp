#include<iostream>
using namespace std;
typedef unsigned long long ll;
int main(){
	int NUM=2020;
	ll t,n;
	cin>>t;
	ll a,b;
	while(t--){
		cin>>n;
		a=n/NUM;
		b=n%NUM;
		if(b>a){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
	return 0;
}
