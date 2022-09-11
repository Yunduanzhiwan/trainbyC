#include<iostream>
using namespace std;
int in[5][5]={};
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
bool v[5][5]={};
struct node{
	int x,y;
//	bool v;
}path[5][5];
/*
bfs 
*/ 
node q[100];
void bfs(int n,int m){
	int s=0;
	int f=0;
	q[s++]={0,0};
	node t=q[f++];
	int tx,ty;
	v[0][0]=1;
	while(!(t.x==n-1&&t.y==m-1)){//t.x!=n-1&&t.y!=m-1 ///答案会错误 
		for(int i=0;i<4;++i){
			tx=t.x+dx[i];
			ty=t.y+dy[i];
			
			/*
			检查是否越界 
			*/
		//	cout<<"tx="<<tx<<" ty="<<ty<<"  v[tx][ty]="<<v[tx][ty]<<endl;
			if(v[tx][ty]==0&&tx>=0&&tx<n&&ty>=0&&ty<m&&in[tx][ty]==0){
			//	cout<<"tx="<<tx<<" ty="<<ty<<endl;
				q[s++]={tx,ty};		
				v[tx][ty]=v[t.x][t.y]+1;
				path[tx][ty]={t.x,t.y};
			}
			
			
		}
	//	cout<<"\n--------------------------\n";
		t=q[f++];
	}
}
void dfs(int x,int y)//深搜打印路径 
{
	if(!(x==0&&y==0))
	dfs(path[x][y].x,path[x][y].y);
	printf("(%d, %d)\n",x,y);	
}
int main(){
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			cin>>in[i][j];
		}
	} 
	bfs(5,5);
	dfs(path[4][4].x,path[4][4].y);
	printf("(%d, %d)\n",4,4);	
	return 0;
} 
