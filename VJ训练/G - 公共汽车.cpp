#include<iostream>
#include<stdio.h>
using namespace std;
#define INF 0x3f3f3f
int main(){
	int n;
	long long m;
	scanf("%d %lld",&n,&m);
	long long mmax,mmin,x;
	mmin=0;
	mmax=0;
	x=0;
	int t;
	for(int i=0;i<n;++i){
		scanf("%d",&t);
		x+=t;
		mmin=min(mmin,x);//最大下车人数  - 
		mmax=max(mmax,x);//最大上车人数 
	}
	mmax=m-mmax+mmin+1;//   m-mmax车上最多人数， -abs(mmin)=+mmin-->车上最小人数   +1-->车上0人的情况 
	if(mmax>0){//车上有人 
		printf("%d\n",mmax);
		
	}else{
		printf("0\n");
	}
	return 0;
}
