
#include <stdio.h>
#include <string.h>
#define MAXN 1005
int N,M,S,T;
int map[MAXN][MAXN],dis[MAXN],vis[MAXN];
int mintwo(int x,int y)
{
	return x<y?x:y;
}
void dikjstra(int S)
{
	for (int i = 1; i <=N; ++i)
		dis[i]=map[S][i];
	vis[S]=1;
	dis[S]=0;
	for (int i = 1; i < N; ++i)
	{
		int pos;
		int min=0x7f7f7f7f;
		for(int j=1;j<=N;j++)
		{
			if(vis[j]==0&&dis[j]<min)
			{
				min = dis[pos=j];
			}
		}
		if(min==0x7f7f7f7f)
			break;			//如果是没有路径，他就不在返回了
		vis[pos]=1;
		for(int k=1;k<=N;k++)
		{
			if(vis[k]==0&&map[pos][k]+dis[pos]<dis[k])
			dis[k]=map[pos][k]+dis[pos];
		}
		//printf("%d   %d\n",pos,dis[pos]);
	}
}
 
 
int main(int argc, char const *argv[])
{
	while(scanf("%d%d%d%d",&N,&M,&S,&T)==4&&N&&M)
	{
		memset(vis,0,sizeof(vis));
		//memset(dis,1<<7,sizeof(dis));
		memset(map,0x7f,sizeof(map));
		for (int i = 1; i <= M; ++i)
		{
			int n1,n2,m;
			scanf("%d %d %d",&n1,&n2,&m);
			map[n1][n2]=map[n2][n1]=mintwo(map[n2][n1],m);
		}
		dikjstra(S);
		printf("%d\n", dis[T]);
	}	
	return 0;	
} 

