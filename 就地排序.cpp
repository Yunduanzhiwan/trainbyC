#include<iostream>
#include <stdlib.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char nums[n][100];
	
	int flag=1;
	int len=0;
	char *ans;
	char anss[100];
	for(int i=0;i<n;++i){
		cin>>nums[i];
		flag=0; 
		if(i>0&&atoi(nums[i])<atoi(nums[i-1])){//比前面那个小 
			len=strlen(nums[i-1]);
			ans=nums[i];
			for(int j=0;j<len;++j){
				if(nums[i-1][j]=='9'){
					nums[i-1][j]='6';
				}
				if(atoi(nums[i-1])<=atoi(nums[i])){
					flag=1;
					break;
				//	nums[i]=ans;
				}
			}
			if(!flag){
				cout<<"houm"<<endl;
				//后面入手
				 len=strlen(nums[i])-1;
			//	ans=nums[i];
				for(int j=len;j>=0;--j){
					if(nums[i][j]=='6'){
						nums[i][j]='9';
					}
					if(atoi(nums[i-1])<atoi(nums[i])){
						flag=1;
						break;
					}
				}
			}
		}
	}
//	for(int i=0;i<n;++i)cout<<nums[i]<<" ";
//	flag=1;
//	for(int i=0;i<n-1;++i){
//		if(atoi( nums[i] )>atoi(nums[i+1])){
//			flag=0;
//			break;
//		}
//	} 
//	if(flag){
//		for(int i=0;i<n;++i)cout<<nums[i]<<" ";
//	}
	cout<<"flag="<<flag<<endl;
	for(int i=0;i<n;++i)cout<<nums[i]<<" ";	
	cout<<endl;	
	for(int i=0;i<n;++i){
		if(atoi(nums[i])>atoi(nums[i+1])){//比前面面的小  
			cout<<nums[i]<<"小于"<<nums[i+1]<<endl;
		
			len=strlen(nums[i])-1;
			ans=nums[i];
			for(int j=len;j>=0;--j){
				if(nums[i][j]=='6'){
					nums[i][j]='9';
				}
				if(atoi(nums[i])>atoi(nums[i-1])){
					break;
				}
			}
		}
	}
	for(int i=0;i<n;++i)cout<<nums[i]<<" ";	
	
	
	
	return 0;
}
