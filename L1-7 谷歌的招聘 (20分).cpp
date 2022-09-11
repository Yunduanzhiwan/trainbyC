#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h> 
#define MAX 1000+10
using namespace std;
bool issu(long long num){
	for(int i=2;i<=sqrt(num);++i){
		if(num%i==0){
			return false;
		}
	}
	if(num==0)return false;
	return true;
}
int main(void){

	char ch[MAX];
	int n,k;
	cin>>n>>k;
	
	for(int i=0;i<n;++i){
		cin>>ch[i];
	}
	
	int temp=0;
	for(int i=0;i<n;++i){
		if(((ch[i+k-1]-'0')&1)&&((i+k-1)<n)){
			temp=0;
			for(int j=i;j<i+k;++j){
				temp=temp*10+(ch[j]-'0');
			}
			if(issu(temp)){
				for(int j=i;j<i+k;++j){
					cout<<ch[j];
				}
				return 0;
			}
			
		}
	} 

	cout<<"404"<<endl;
	
	return 0;
}
