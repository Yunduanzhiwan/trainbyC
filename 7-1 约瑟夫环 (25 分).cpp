#include<bits/stdc++.h>
using namespace std;
const int MAX=3003;
int peos[MAX]={0};
int vis[MAX]={0};
int main(){
	int n,p;
	cin>>n>>p;
	for(int i=0;i<=n;++i)peos[i]=i;
	int ans=1;
	int t=1;
	while(n>0){
		t=1;
//		ans=1;
		while(t!=p){
			
			t++;
			while(vis[ans]){
				ans++;
				if(ans>n){
					ans=1;
				}
				
			}
		}
		if(vis[ans]==0){
			cout<<peos[ans]<<endl;
			vis[ans]=1;
		}
		ans++;
		
		n--;
	}
	
	
	return 0;
} 
