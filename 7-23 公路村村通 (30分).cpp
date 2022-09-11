#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
int n,m;
int dic[1005]={0};
int map[1005][1005]={0};
int gets(){
	int res,cont,tmin,indmin;
	res=cont=0;
	for(int i=1;i<=n;++i){
		dic[i]=map[1][i];//默认初始为1号节点 ，即默认把1号放进铺设集合 
	} 
	
	for(int i=2;i<=n;++i){//一共执行n-1次最小值 才能把所有的点加入集合 
		tmin=INF;//最小值 
		for(int j=2;j<=n;++j){
			//find min
			if(dic[j]<tmin&&dic[j]!=0){
				tmin=dic[j];
				indmin=j;//下标 
			}
		}
		// min
		if(tmin!=INF){
			dic[indmin]=0;
			res+=tmin;
			cont++; 
		//修改  dic[min][j]  集合外到集合的距离 
			for(int j=2;j<=n;++j){
				if(map[indmin][j]<dic[j])
					dic[j]=map[indmin][j];
			}
		
		}
		
	}
	return cont==n-1?res:-1;//n个节点加入集合的次数一共为n-1次 
	
}

void init()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			map[i][j]=INF;
		}
	}
}
int main(){
	cin>>n>>m;
	init();
	int a,b,val;
	for(int i=0;i<m;++i){
		cin>>a>>b>>val;
		map[a][b]=map[b][a]=val;
	}	
	
	int res=gets();
	cout<<res<<endl;
	return 0;
} 
