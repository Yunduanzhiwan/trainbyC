#include<iostream>
#include<math.h> 
using namespace std;
const int maxn= 50005;
int g[maxn]={};
//查找最大首领 自己属于自己 
int find(int x){
	int f=x;
	while(f!=g[f]){
		f=g[f];
	}
	int t=x;
	while(t!=f){//路径压缩 
		int k=g[t];
		g[t]=f;
		t=k;
	}
	return f;
}
void join(int a,int b){//两个并在一其，保留其中一个首领 
	if(find(a)!=find(b)){
		g[find(b)]=find(a); 
	}
}
int main(){
	int n,m;
	int x=0;
	while(1){
		x++;
		scanf("%d %d",&n,&m);

		if(n==0&&m==0){
			break;
		}
		for(int i=0;i<n;++i){
			g[i]=i;
		}
		int a,b;
		for(int i=0;i<m;++i){
			scanf("%d %d",&a,&b);
			join(a,b);
		}
		int sum=0;
		for(int i=0;i<n;++i){
			if(g[i]==i){
				++sum;
			}
		}
		printf("Case %d: %d\n",x,sum);
	}
	return 0;
}
