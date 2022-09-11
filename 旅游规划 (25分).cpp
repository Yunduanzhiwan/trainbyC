#include<iostream>
#include<queue>
 
#include<string.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=600;

int map[N][N];
int primap[N][N];
int vis[N];
int tlen[N];
int tprice[N];
int dist[N];
int minlen,minprice;
int dijkstra(int st,int len,int map[][N],int end,int& Price){
	int vis[len];
	int dic[len];
	const int INF=0x3f3f3f3f;
	for(int i=0;i<len;++i){
		vis[i]=0;
		dic[i]=INF;
	}
	Price=INF;
	dic[st]=0;
	tprice[st]=0;
	int t;
	int tnum;
	while(1){
		t=-1;
		for(int i=0;i<len;++i){
			if(!vis[i]&&(t==-1|| ( dic[i]<dic[t] || (dic[i]==dic[t]&&tprice[i]<tprice[t])  )   )){
				t=i;
			}
		}
		//ื๎ะก t
		for(int i=0;i<len;++i){
			tnum=dic[t]+map[t][i];
			if(tnum<dic[i]&&!vis[i]){
				dic[i]=tnum;
				tprice[i]=tprice[t]+primap[t][i];
			}else if(tnum==dic[i]&&!vis[i]&&tprice[i]>tprice[t]+primap[t][i]){
				dic[i]=tnum;
				tprice[i]=tprice[t]+primap[t][i];
			}
		}
		if(t==-1){
			break;
		}
		
		vis[t]=1;
	}
	
	if(dic[end]==INF)return -1;
	
	Price=tprice[end];
	return dic[end];
}
int main(){
	ios::sync_with_stdio(false);
	memset(primap,0,sizeof(primap));
	memset(vis,0,sizeof(vis));
	memset(tlen,0,sizeof(tlen));
	memset(tprice,0,sizeof(tprice));
	int n,m,s,d;
	int st,ed,len,price;
	
	minlen=minprice=999;
	
	cin>>n>>m>>s>>d;
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			map[i][j]=map[j][i]=INF;
		}
	} 
	for(int i=1;i<=m;++i){
		cin>>st>>ed>>len>>price;
		map[st][ed]=map[ed][st]=len;
		primap[st][ed]=primap[ed][st]=price;
	}
	
	int minlen=dijkstra(s,n,map,d,minprice);
		
	cout<<minlen<<" "<<minprice<<endl;
	return 0;
}
