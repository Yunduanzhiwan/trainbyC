///*
//初始时，S只包含起点s；U包含除s外的其他顶点，且U中顶点的距离为”
//起点s到该顶点的距离”[例如，U中顶点v的距离为(s,v)的长度，然后s和v不相邻，则v的距离为∞]。
//
//从U中选出”距离最短的顶点k”，并将顶点k加入到S中；同时，从U中移除顶点k。
//
//更新U中各个顶点到起点s的距离。之所以更新U中顶点的距离，
//是由于上一步中确定了k是求出最短路径的顶点，从而可以利用k来更新其它顶点的距离；
//例如，(s,v)的距离可能大于(s,k)+(k,v)的距离。
//
//重复步骤(2)和(3)，直到遍历完所有顶点。
//
//
//Dijkstra
//*/ 

#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=405;
int g1[N][N];//铁路 
int g2[N][N];//公路 
int dist[N];//最短距离
int n,m;


void dijkstra(int start,int len,int g[][N],int dis[])
{
	int vis[len];
	queue<int>q;//队列，存剩余的节点 
	for(int i=0;i<len;i++)
	{
		dis[i]=INF;//初始化dist 
		vis[i]=false;
	}
	dis[start]=0;
	vis[start]=true;
	q.push(start);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int i=0;i<len;i++){	
		  if(!vis[i]&&g[u][i]!=INF)
		  {
		  	 int temp=g[u][i]+dis[u];
		  	 if(temp<dis[i])
		  	 {
		  	 	dis[i]=temp;
		  	 	vis[i]=true;
		  	 	q.push(i);
			 }
		  }
		}
	}
}
 
int main()
{
	ios::sync_with_stdio(false);
	
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			g1[i][j]=g1[j][i]=INF;//默认没有铁路 
			g2[i][j]=g2[j][i]=1;///默认全是公路 
		}
	}

	
	int a,b;
	for(int i=0;i<m;++i){
		cin>>a>>b;
		a--;
		b--;
		g1[a][b]=g1[b][a]=1;
		g2[a][b]=g2[b][a]=INF;
	}

	
	dijkstra(0,n,g1,dist);
	
	int res1=dist[n-1];
	
	dijkstra(0,n,g2,dist);
	
	int res2=dist[n-1];
	
	int res=max(res1,res2);
	
	if(res!=INF){
		cout<<res<<endl;
	}else{
		cout<<"-1\n";
	}
	return 0; 
}
