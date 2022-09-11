/*
H - ÀûÈó
*/ 
#include<iostream>
using namespace std;
#define MAX 1000005
int nums[MAX];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	int sum=0;
	int max=-99999;
	for(int i=0;i<n;++i){
		sum+=nums[i];
		if(sum<nums[i]){
			sum=nums[i];
		}
		if(sum>max){
			max=sum;
		}
	}
	cout<<max<<endl;
	return 0;
} 
