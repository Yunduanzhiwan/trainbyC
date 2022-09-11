#include<iostream>
using namespace std;
int C(int n,int m){
	int fenzi,fenmu=0;
	for(int i=1,fenzi=1;i<=n;++i)
		fenzi*=i;
	for(int i=1,fenmu=1;i<=m;++i)
		fenmu*=i;
		
	for(int i=1;i<=(n-m);++i){
		fenmu*=i;
	}
	cout<<"res="<<fenzi/fenmu<<endl;
	return fenzi/fenmu;
}
int main(){
	int n,m,a,b;
	cin>>n>>m;
	
	int res=n*(n-1)/2;
	for(int i=0;i<m;++i){
		cin>>a>>b;
	}
	if(res>=(n/2)){
		cout<<n/2<<endl;
	}
	else{
		cout<<0<<endl;
	}
	
	
	return 0;
}
