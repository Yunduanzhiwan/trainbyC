#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>m;
	
	int t=m;
	while(t--){
		cin>>n;
		int lao[n+2];
		for(int i=0;i<=n;++i){
			lao[i]=0;
		}
		
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				int falg=j%i;
				if(falg==0&&lao[j]){
					lao[j]=0;
				}else if(falg==0&&lao[j]==0){
					lao[j]=1;
				}
				
			}
		}
	
		int nums=0;	
		for(int i=1;i<=n;++i){
			if(lao[i]){
				nums++;
			}
		}
		cout<<nums<<endl;
	}
	
	return 0;
}
