///*
//��ʼʱ��Sֻ�������s��U������s����������㣬��U�ж���ľ���Ϊ��
//���s���ö���ľ��롱[���磬U�ж���v�ľ���Ϊ(s,v)�ĳ��ȣ�Ȼ��s��v�����ڣ���v�ľ���Ϊ��]��
//
//��U��ѡ����������̵Ķ���k������������k���뵽S�У�ͬʱ����U���Ƴ�����k��
//
//����U�и������㵽���s�ľ��롣֮���Ը���U�ж���ľ��룬
//��������һ����ȷ����k��������·���Ķ��㣬�Ӷ���������k��������������ľ��룻
//���磬(s,v)�ľ�����ܴ���(s,k)+(k,v)�ľ��롣
//
//�ظ�����(2)��(3)��ֱ�����������ж��㡣
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
int g1[N][N];//��· 
int g2[N][N];//��· 
int dist[N];//��̾���
int n,m;


void dijkstra(int start,int len,int g[][N],int dis[])
{
	int vis[len];
	queue<int>q;//���У���ʣ��Ľڵ� 
	for(int i=0;i<len;i++)
	{
		dis[i]=INF;//��ʼ��dist 
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
			g1[i][j]=g1[j][i]=INF;//Ĭ��û����· 
			g2[i][j]=g2[j][i]=1;///Ĭ��ȫ�ǹ�· 
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
