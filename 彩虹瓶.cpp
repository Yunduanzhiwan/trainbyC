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
		//	cout<<"��ǰ������� "<<num[i]<<"����"<<endl;
			while(ans[top]==xu&&top>=0){
		//		cout<<"��ǰ���� "<<ans[top]<<"����"<<endl;
				xu+=1;
				--top;
			}
		}else{
		//	cout<<"������"<<xu<<" �õ�����"<<num[i]<<" �÷ŵ�����"<<endl;
			if(top+1==m){
		//		cout<<"��������"<<endl; 
				return false;
			}
			ans[++top]=num[i];
			
		}
	}
	if((xu-1)!=n){
		//cout<<"û���������� xu="<<xu<<" n="<<n<<endl; 
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
