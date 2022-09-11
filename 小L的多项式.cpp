#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1005];
ll get(int n,int num){
	ll res=f[0];
    if(num==0)return res%998244353;
	ll t=1;
	for(int i=1;i<=n;++i){
		t=(t%998244353)*(num%998244353)%998244353;
		res=(res+(t*(f[i]%998244353))%998244353)%998244353;
	}
	return res%998244353;
}

int main(){
	ll n;
	cin>>n;
	for(int i=0;i<n+1;++i){
		cin>>f[i];
	}
	ll m,t;
	cin>>m;
	for(int i=0;i<m;++i){
		cin>>t;
		cout<<get(n,t)<<" ";
	}
	return 0;
}
