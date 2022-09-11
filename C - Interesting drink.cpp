#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define unsigned long long int
int n;

int findByPrice(int *arr,int price){
	int l=0,r=n-1;
	int mid=(n-1)/2;
	if(price<*arr){
		return -1;
	}
	if(price>*(arr+r)){
		return r;
	}
	while(l<=r){
		if((*(arr+mid)==price)|| ( *(arr+mid)<price&&price<*(arr+mid+1) )){
			return mid;
		}
		else if(*(arr+mid)>price){
			r=mid-1;
		}
		else if(*(arr+mid)<price){
			l=mid+1;
		}
		mid=(l+r)/2;
	}
	
	return -1;
}
int main1(){
	n=5;
	int num[6]={3,6,8,10,11};
	int tt=0;
	for(tt=0;tt<13;tt++){
		cout<<"t="<<tt<<": "<<findByPrice(num,tt)<<endl;
	}
}
int main(){
	cin>>n;
	int num[n];
	
	for(int i=0;i<n;++i){
		cin>>num[i];
	}
	sort(num,num+n-1);
	int days;
	cin>>days;
	int price;
	
	int res=0;
	int l,r,t;
	for(int i=0;i<days;++i){
		cin>>price;
		res=0;
		t=n-1;
		t=findByPrice(num,price);
		cout<<t<<endl;
	}
}
