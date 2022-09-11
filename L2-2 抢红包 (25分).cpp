#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h> 
#define MAX 1000+10
using namespace std;
struct People{
	int q;
	int id;
	int h;
}getr[MAX];
int cmp(const People &a,const People &b){
	if(a.q!=b.q){
		return a.q<b.q;
	}else if(a.h!=b.h){
		return a.h<b.h;
	}else{
		return a.id<b.id;
	}
}
int main(){
	string str="2.718281828459045235360287471352662497757247093699959574966967627724076630353547594571382178525166427427466391932003059921";
	cout<<str.length();
	int n;
	cin>>n;
	int k;
	int t,p;
	int fa;
	for(int i=0;i<n;++i){
		cin>>k;
		fa=0;
		for(int j=0;j<k;++j){
			cin>>t>>p;
			fa+=p;
			getr[t].id=t;
			getr[t].h++;
			getr[t].q+=p;
		}
		getr[i].q-=fa;
	}
	sort(getr,getr+n,cmp);
	for(int i=1;i<=n;++i){
		cout<<getr[i].id<<" "<<getr[i].q/100.0<<endl;
	}
	
	return 0;
}
