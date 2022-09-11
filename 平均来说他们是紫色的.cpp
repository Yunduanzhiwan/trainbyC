#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=1000; 

int n,m; 
void floyd(vector<vector<int> > &distmap,//�ɱ����µ��ڽӾ��󣬸��º���ȷ��ԭ�б�
           vector<vector<int> > &path)//·���ϵ���õ����ת��
//�������������û���ó�INF����κ�ȫ����������ֱ�Ӹ��ƣ�
{
    const int &NODE=distmap.size();//���ڽӾ���Ĵ�С���ݶ�����������ٲ�������
    path.assign(NODE,vector<int>(NODE,-1));//��ʼ��·������ 
    for(int k=1; k!=NODE; ++k)//����ÿһ����ת��
        for(int i=0; i!=NODE; ++i)//ö��Դ��
            for(int j=0; j!=NODE; ++j)//ö���յ�
                if(distmap[i][j]>distmap[i][k]+distmap[k][j])//���������ǲ���ʽ
                {
                    distmap[i][j]=distmap[i][k]+distmap[k][j];//����
                    path[i][j]=k;//��¼·��
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
          distmap(n,vector<int>(n,INF));//Ĭ�ϳ�ʼ���ڽӾ���

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
