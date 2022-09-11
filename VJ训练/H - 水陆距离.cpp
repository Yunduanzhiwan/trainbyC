#include<iostream>
using namespace std;
#define MAX 805
int m[MAX];
int main(){
	int n,m;
	cin>>n>>m;
	int map[n+2][m+2];
	int i=0;
	for(int i=0;i<=m+1;++i){
		map[0][i]=999;
		map[n+1][i]=999;
	}
	for(int j=0;j<=n+1;++j){
		map[j][0]=999;
		map[j][m+1]=999;
	}
	
	for(int i=1;i<=n;++i){
		string t;
		cin>>t;
		for(int j=1;j<=m;++j){
			int x=(t[j-1]-'0');
			map[i][j]=(x==0?0:999);
		}
	}
	
	cout<<endl;
	for(int i=0;i<=n+1;++i){
		for(int j=0;j<=m+1;++j){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
//	for(int i=1;i<=n;++i){
//	
//		for(int j=1;j<=m;++j){
//			scanf("%d",&map[i][j]);
//		}
//	}
	
//	}
	
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(map[i][j]!=0){
			//	cout<<"is1  "<<i<<" "<<j<<endl;
				map[i][j]=min( min(map[i][j-1],map[i][j+1]), min(map[i-1][j],map[i+1][j])  );
				map[i][j]+=1;
			}
			cout<<map[i][j]<<" "; 
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
/*
4 4
1010
0010
1101
0011

4 3
010
111
111
111


*/

