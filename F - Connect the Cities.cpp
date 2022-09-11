#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
int n,m,k;
int dic[550]={0};
int map[550][550]={0};
int vis[550]={0};
int bs[550];
int gets(){
	int res,cont,tmin,indmin;
	res=cont=0;
	for(int i=1;i<=n;++i){
		dic[i]=map[1][i];//Ĭ�ϳ�ʼΪ1�Žڵ� ����Ĭ�ϰ�1�ŷŽ����輯�� 
		vis[i]=0;
	} 
	vis[1]=1; 
	dic[1]=0;
	for(int i=1;i<n;++i){//һ��ִ��n-1����Сֵ ���ܰ����еĵ���뼯�� 
		tmin=INF;//��Сֵ 
		for(int j=1;j<=n;++j){
			//find min
			if(dic[j]<tmin&&!vis[j]){
				tmin=dic[j];
				indmin=j;//�±� 
			}
		}
		if(tmin==INF)
			break;
		// min
		//	cout<<"indmin="<<indmin<<" min="<<tmin<<" res="<<res<<endl;
			vis[indmin]=1;
			dic[indmin]=0;
			res+=tmin;
		//�޸�  dic[min][j]  �����⵽���ϵľ��� 
			for(int j=1;j<=n;++j){
				if(!vis[j]&&map[indmin][j]<dic[j])
					dic[j]=map[indmin][j];
			}
	}
	if(tmin==INF)
		return -1;
	return res; 
}
int main(){
	int a,b,val,num;
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&n,&m,&k);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				map[i][j]=INF;
			}
			map[i][i]=0;
		}
		for(int i=0;i<m;++i){
			scanf("%d%d%d",&a,&b,&val);
			if(map[a][b]>val){
				map[a][b]=map[b][a]=val;	
			}
		}
		for(int i=0;i<k;++i){
			scanf("%d",&num);
			for(int j=1;j<=num;++j){
				scanf("%d",&bs[j]);
			}
			for(int x=1;x<=num;++x){
				for(int y=1;y<=num;++y){
					map[bs[x]][bs[y]]=0;//������Ļ���Ϊ0 
				}
			}
		}
		cout<<gets()<<endl;
	}
	return 0;
} 
