#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int n,m;
int mapp[10003][10003];
void init(){
	for(int i=0;i<=n;++i){
		for(int j=0;j<=n;++j){
			mapp[i][j]=mapp[j][i]=INF;
		}
	}
}
int main(){
	
	cin>>n>>m;
	init();
	int x,y,l;
	for(int i=0;i<m;++i){
		cin>>x>>y>>l;
		mapp[x][y]=l;
		mapp[y][x]=l;
	}
	
	
	
	int ans=1;
	int res=0;
	int minnum=0;
	for(int i=1;i<n;++i){
	//	minnum=min(minnum,map[ans][i]);
		
	}
	return 0;
}
