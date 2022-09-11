#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int sex[MAX];
string name[MAX];
int vis[MAX];
int n;
void init(){
	for(int i=0;i<=n;++i){
		sex[i]=-1;
		name[i]="";
		vis[i]=0;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;++i){
		
		cin>>sex[i]>>name[i];
	}
	for(int i=1;i<=n/2;++i){
		for(int j=n;j>i;--j){
			if(vis[i]==0&&vis[j]==0&&sex[i]!=sex[j]){
				vis[i]=1;
				vis[j]=1;
				cout<<name[i]<<" "<<name[j]<<endl;
				break;
			}
		}
	}
	
	
} 
