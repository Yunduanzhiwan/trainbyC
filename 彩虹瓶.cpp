#include<iostream>
#include<string.h>
using namespace std;
int solve(int *num,int n,int m){
	int xu=1;
	int curr=num[0];
	int *ans=new int(m);
	memset(ans,0,sizeof(int)*m);
	int top=-1;
	
	for(int i=0;i<n;++i){
		if(num[i]==xu){
			xu+=1;
		//	cout<<"当前搬出来的 "<<num[i]<<"可用"<<endl;
			while(ans[top]==xu&&top>=0){
		//		cout<<"当前货架 "<<ans[top]<<"可用"<<endl;
				xu+=1;
				--top;
			}
		}else{
		//	cout<<"需求是"<<xu<<" 拿到的是"<<num[i]<<" 得放到货架"<<endl;
			if(top+1==m){
		//		cout<<"超过容量"<<endl; 
				return false;
			}
			ans[++top]=num[i];
			
		}
	}
	if((xu-1)!=n){
		//cout<<"没有满足需求 xu="<<xu<<" n="<<n<<endl; 
		return false;
	}
	
	delete ans;
	return true;
}
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int nums[n];
	for(int i=0;i<k;++i){
		for(int j=0;j<n;++j){
			cin>>nums[j];
		}
		if(solve(nums,n,m)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
	return 0;
} 
