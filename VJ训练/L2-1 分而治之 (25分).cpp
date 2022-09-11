#include<iostream>
#include<string.h>
using namespace std;
int n,m;
int map[10005][10005]; 
int map2[10005][10005]; 

int can(int map[][10005],int num[],int size){
	for(int i=0;i<size;++i){
		for(int j=1;j<=n;++j){
			map[num[i]][j]=map[j][num[i]]=0;
		}
	} 
	
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(map[i][j]){
				return -1;
			}
		}
	}
	
	return 1;
	

}
int main(){
	
	cin>>n>>m;
	int a,b;
	
	for(int i=0;i<=n;++i){
		for(int j=0;j<=n;++j){
			map[i][j]=0;
			map2[i][j]=0;
		}
	}
	for(int i=0;i<m;++i){
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
		map2[a][b]=map2[b][a]=1;
	}
	
	
	int size;
	cin>>size;
	for(int i=0;i<size;++i){
		int num[100];
		int st;
		cin>>st;
		for(int j=0;j<st;++j){
			cin>>num[j];
		}
		
		for(int x=0;x<=n;++x){
			for(int y=0;y<=n;++y){
				map2[x][y]=map[x][y];
			}
		}
		int res=can(map2,num,st);
		if(res==1){
			cout<<"YES\n";
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
