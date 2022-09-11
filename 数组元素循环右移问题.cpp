
#include<iostream>
using namespace std; 
#define MAXn 102 
int nums[MAXn]={0};
int main(void){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	int t;
	while(m--){
		t=nums[n-1];
		for(int i=n-1;i>0;--i){
			nums[i]=nums[i-1]; 
		}
		nums[0]=t;
	}
	
	for(int i=0;i<n-1;++i){
		cout<<nums[i]<<" ";
	}
	cout<<nums[n-1];
	return 0;
}
