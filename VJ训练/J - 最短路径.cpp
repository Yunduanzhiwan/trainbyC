#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=1005;
int map[N][N];//地图 
int dist[N];//最短距离
int n,m;
void dijkstra(int start,int len,int map[][N],int dis[]){
	int vis[len];
	queue<int>q;//队列，存剩余的节点 
	for(int i=0;i<len;i++){
		dis[i]=INF;vis[i]=false;
	}
	dis[start]=0;
	vis[start]=true;
	q.push(start);
	while(!q.empty()){	
		int MIN=INF;
		int mindex;
		int u=q.front();q.pop();
		for(int i=0;i<n;++i){
			if(map[u][i]!=INF&&vis[i]!=true){
				int temp=map[u][i]+dis[u];
				if(dis[i]>temp){
					dis[i]=temp;
				}
				if(dis[i]<MIN){
					mindex=i;
					MIN=dis[i];
				}
			}
		}
		if(MIN==INF){
			break; 
		}
		q.push(mindex);
		vis[mindex]=true;
	}
}
void dijkstra2(int start,int len,int map[][N],int dis[],int vis[]){
	queue<int>q;//队列，存剩余的节点 
	for(int i=0;i<len;i++){
		dis[i]=INF;vis[i]=false;
	}
	dis[start]=0;
	vis[start]=true;
	q.push(start);
	while(!q.empty()){	
		int MIN=INF;
		int mindex;
		int u=q.front();q.pop();
		for(int i=0;i<n;++i){
			if(map[u][i]!=INF&&vis[i]!=true){
				int temp=map[u][i]+dis[u];
				if(dis[i]>temp){
					dis[i]=temp;
				}
				if(dis[i]<MIN){
					mindex=i;
					MIN=dis[i];
				}
			}
		}
		if(MIN==INF){
			break; 
		}
		q.push(mindex);
		vis[mindex]=true;
	}
}
void dijkstra(int start,int len,int map[][N],int dis[],int vis[]){
	for (int i = 0; i <len; ++i)
		dis[i]=map[start][i];
	vis[start]=1;
	dis[start]=0;
	for (int i =0; i<len; ++i){
		int mindex;
		int MIN=INF;
		for(int j=0;j<len;j++){
			if(vis[j]==0&&dis[j]<MIN){
				mindex=j;
				MIN = dis[j];
			}
		}
		if(MIN==INF)
			break;			//如果是没有路径，他就不在返回了
		vis[mindex]=1;
		for(int j=0;j<len;j++){
			int temp=map[mindex][j]+dis[mindex];
			if(vis[j]==0&&temp<dis[j]){
				dis[j]=temp;	
			}
		}
	}
}
int main(){
	int s,t,a,b,c;
	int vis[N];
	while(scanf("%d%d%d%d",&n,&m,&s,&t)==4&&n&&m){
		memset(map,0x7f,sizeof(map));
			for(int i=0;i<m;++i){
				scanf("%d %d %d",&a,&b,&c);
				a--;
				b--;
				map[a][b]=map[b][a]=min(map[a][b],c);
			}
			//dijkstra(--s,n,map,dist);
			dijkstra(--s,n,map,dist,vis);
			printf("%d\n",dist[--t]);
	}
	return 0;
}
