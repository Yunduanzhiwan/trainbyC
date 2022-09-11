#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b,int c){
	if(a-c+b>0&&a-b+c>0&&b-a+c>0)
		return true;
	return false;
}
int main(){
	unsigned long long n,m;
	cin>>n>>m;
	unsigned long long nums[n+1];
	for(int i=0;i<n;++i) cin>>nums[i];
	sort(nums,nums+n);
//	for(int i=0;i<n;++i) cout<<nums[i]<<" ";
//	cout<<endl;
	int size=0;
	int flag=0;
	for(unsigned long long i=0;i<n-1;++i){
		//flag=0;
		for(unsigned long long j=i+1;j<n;++j){
			if(nums[j]<m&&nums[i]-m+nums[j]>0){
				size++;
			}
			else if(nums[i]>m&&nums[i]-nums[j]+m>0){
				size++;
			}
		
//			if(solve(nums[i],nums[j],m)){
//				size++;
//			//	cout<<"{"<<nums[i]<<","<<nums[j]<<"}"<<endl;
//			}
			
		}
	}
	cout<<size<<endl; 
	
	return 0;
}
