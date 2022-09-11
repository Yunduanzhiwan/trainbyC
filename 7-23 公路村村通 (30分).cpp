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
		dic[i]=map[1][i];//Ĭ�ϳ�ʼΪ1�Žڵ� ����Ĭ�ϰ�1�ŷŽ����輯�� 
	} 
	
	for(int i=2;i<=n;++i){//һ��ִ��n-1����Сֵ ���ܰ����еĵ���뼯�� 
		tmin=INF;//��Сֵ 
		for(int j=2;j<=n;++j){
			//find min
			if(dic[j]<tmin&&dic[j]!=0){
				tmin=dic[j];
				indmin=j;//�±� 
			}
		}
		// min
		if(tmin!=INF){
			dic[indmin]=0;
			res+=tmin;
			cont++; 
		//�޸�  dic[min][j]  �����⵽���ϵľ��� 
			for(int j=2;j<=n;++j){
				if(map[indmin][j]<dic[j])
					dic[j]=map[indmin][j];
			}
		
		}
		
	}
	return cont==n-1?res:-1;//n���ڵ���뼯�ϵĴ���һ��Ϊn-1�� 
	
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
