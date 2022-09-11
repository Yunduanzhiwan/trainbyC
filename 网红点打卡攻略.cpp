#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
#define INF 0x3f3f3f3f
int map[202][202];
int vis[202]={0};
void init(){
	for(int i=0;i<202;++i){
		for(int j=0;j<202;++j){
			map[i][j]=INF;
		}
			
	}
}
void initvis(){
	for(int i=0;i<202;++i)vis[i]=0;
}
int main(){
	int n,m;
	init();
	cin>>n>>m;
	int x,y,fei;
	for(int i=0;i<m;++i){
		cin>>x>>y>>fei;
		map[x][y]=map[y][x]=fei;
	}
	
	int k;
	cin>>k;
	string str;
	int ans;
	int sum=0;
	int t;
	int curr;
	int maxsum=INF;
	int ind=0;
	int flag=0;
	int size=k;
	for(int i=1;i<=k;++i){
		cin>>ans;
		curr=0;
		sum=0;
		flag=1;
		initvis();
		for(int j=0;j<ans;++j){
			cin>>t;
			if(vis[t]==0){
				sum+=map[curr][t];
				curr=t;
				vis[curr]=1; 
			}else{
				flag=0;
			}
		}
	//	cout<<"i="<<i<<" sum="<<sum<<endl;
		if(flag==0||ans!=n||map[curr][0]==INF){
			size--;
			continue;
		}
		sum+=map[curr][0];
		
		if(sum<maxsum){
			maxsum=sum;
			ind=i;
		}
		else if(sum!=INF&&sum==maxsum&&i<ind){
			ind=i;
		}
	}
	cout<<size<<endl;
	cout<<ind<<" "<<maxsum<<endl;
	return 0;
}
