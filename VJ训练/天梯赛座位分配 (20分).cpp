#include<iostream>
#include<vector>
using namespace std;
#define N 102
int nums[N];
vector<int> v[N];
int vis[N]={0};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	int x=0;
	int sum=0;
	while(true){
		if(sum==n){
			break;
		}
		for(int i=0;i<n;++i){
			if(v[i].size()==nums[i]*10&&vis[i]==0){
				vis[i]=1;
				sum++;
			}
			if(nums[i]*10>v[i].size()){
			 	if(sum<n-1){
					v[i].push_back(++x);
				}
				if(sum==n-1){
					if(x==0){
						x=-1;
					}
					while(nums[i]*10>v[i].size()){
						x+=2;
						v[i].push_back(x);
						
						
					}
				}
			}
		}
		
	}
	
	for(int i=0;i<n;++i){
		cout<<"#"<<(i+1)<<endl;
		int falg=0;
		for(int j=0;j<nums[i]*10;++j){
			if(falg==0){
				falg=1;
				cout<<v[i][j];
			}else{
				cout<<" "<<v[i][j];
			}
			
//			cout<<v[i][j]<<" ";
			if((j+1)%10==0){
				falg=0;
				cout<<endl;
			}
		}
	//	cout<<endl;
	}
	return 0;
} 
