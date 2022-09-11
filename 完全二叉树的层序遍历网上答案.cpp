#include<bits/stdc++.h>
#define N 102
using namespace std;
int n;
int a[N],b[N];
int pos;
void build(int id) {
	if(id > n) return ;
	cout<<"正在建立l "<<id<<"<<1="<<(id<<1)<<endl; 
	build(id<<1);
	cout<<"正在建立r "<<id<<"<<1|1="<<(id<<1|1)<<endl;
	build(id<<1|1);
	b[id] = a[++pos];
	cout<<"已经建立"<<id<<" "<<b[id]<<endl;
}
int main() {
	for(int i=0;i<15;++i)
		cout<<"i="<<i<<" "<<(i<<1|1)<<" "<<(i|1)<<endl; 
	
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	build(1);
	for(int i=1; i<n; i++) {
		cout << b[i] << " ";
	}
	cout << b[n];
	return 0;
}

