#include<bits/stdc++.h>
using namespace std;
int maxnum=0;
int maxindex=-1;
int nums[1003]={0};
int main(){
	int n,k,t;
	cin>>n;
	while(n--){
		cin>>k;
		while(k--){
			cin>>t;
			nums[t]++;
			if(nums[t]>maxnum||(nums[t]==maxnum&&t>maxindex)){
				maxnum=nums[t];
				maxindex=t;
			}
			
		}
	}
	cout<<maxindex<<" "<<maxnum<<endl;
	
	return 0;
} 

