#include<bits/stdc++.h>
using namespace std;
int b[55];
int dp[55];
int main(){
	int n;
	cin>>n;
	int q0=0;
	dp[0]=0;
	int first=1;
	for(int i=1;i<=n;++i){
		cin>>b[i];
		if(b[i]==0){
			q0++;
			dp[i]=dp[i-1];
		}
		if(b[i]==1){
			//if(dp[i-1]==0)dp[i]=0;
			dp[i]=(dp[i-1]+q0);
			if(first){
				first=0;
				dp[i]=0;
			}
			
			q0=0;
		}
		
	}
	cout<<dp[n]<<endl;
	
	return 0;
}
