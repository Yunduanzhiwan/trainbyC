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
		mmin=min(mmin,x);//����³�����  - 
		mmax=max(mmax,x);//����ϳ����� 
	}
	mmax=m-mmax+mmin+1;//   m-mmax������������� -abs(mmin)=+mmin-->������С����   +1-->����0�˵���� 
	if(mmax>0){//�������� 
		printf("%d\n",mmax);
		
	}else{
		printf("0\n");
	}
	return 0;
}
