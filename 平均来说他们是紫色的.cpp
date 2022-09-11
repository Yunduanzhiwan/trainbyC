#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=1000; 

int n,m; 
void floyd(vector<vector<int> > &distmap,//可被更新的邻接矩阵，更新后不能确定原有边
           vector<vector<int> > &path)//路径上到达该点的中转点
//福利：这个函数没有用除INF外的任何全局量，可以直接复制！
{
    const int &NODE=distmap.size();//用邻接矩阵的大小传递顶点个数，减少参数传递
    path.assign(NODE,vector<int>(NODE,-1));//初始化路径数组 
    for(int k=1; k!=NODE; ++k)//对于每一个中转点
        for(int i=0; i!=NODE; ++i)//枚举源点
            for(int j=0; j!=NODE; ++j)//枚举终点
                if(distmap[i][j]>distmap[i][k]+distmap[k][j])//不满足三角不等式
                {
                    distmap[i][j]=distmap[i][k]+distmap[k][j];//更新
                    path[i][j]=k;//记录路径
                }
}
//void fleury(int e[][N]){
//	int i,j,k;
//	for(k=0;k<n;k++) {
//		 for(i=0;i<n;i++) {
//		 	 for(j=0;j<n;j++)  {
//		 	 	if(e[i][j]>e[i][k]+e[k][j])  {
//		 	 		e[i][j]=e[i][k]+e[k][j];  
//				}
//			  }
//		 }
//	}
//	for(int i=0;i<n;++i)
//		cout<<e[0][i]<<endl;
//}
int main(){
	cin>>n>>m;
vector<vector<int> > path,
          distmap(n,vector<int>(n,INF));//默认初始化邻接矩阵

	int x,y;
	for(int i=0;i<m;++i){
		cin>>x>>y;
		x--;
		y--;
		distmap[x][y]=1;
//		g1[x][y]=1;
//		g1[y][x]=1;
	//	g1[y-1][x-1]=1;
		
	}
	floyd(distmap,path);
//	fleury(g1);
	cout<<distmap[0][n-1]-1<<endl;
	return 0;
} 
