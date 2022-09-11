#include<iostream>
using namespace std;
const int MAX=10004;
int father[MAX];
int peo[MAX]={0};
int find(int x){
	int start=x;//先找到根父节点
	while(x!=father[x])
		x=father[x];
	int fu=father[start];
	while(start!=x){//路径压缩，把所有节点的父节点，直接指向根节点 
		fu=father[start];
		father[start]=x;
		start=fu;
	}
}
int qure(int son){
	if(son==father[son])return son;
	
	return father[son]=qure(father[son]);
}
void join(int a,int b){
	int fua=find(a);
	int fub=find(b);
	if(fua!=fub){
		 father[fua]=fub;//把a的老大 并到 b（a的小弟也并过去了） 
	}
}
inline void init(){
	for(int i=1;i<=MAX;++i) father[i]=i;
} 
inline int getPeos(){
	int size=0;
	for(int i=0;i<MAX;++i)if(peo[i]) size++;
	return size;
}
int main(){
	int n,m,a,b;
	cin>>n;
	int pre;
	init(); 
	for(int i=0;i<n;++i){
		cin>>m;
		pre=-1;
		for(int j=0;j<m;++j){
			cin>>a;
			peo[a]=1;
			if(pre!=-1){
				join(a,pre);	
			} 
			pre=a;
		}
	}
	b=getPeos();//总人数 
	int size=0;
	cout<<b<<" ";
	for(int i=1;i<=b;++i){
		if(father[i]==i){
			size++;
		}
	}
	cout<<size<<endl;
	cin>>n;
	while(n--){
		cin>>a>>b;
		a=find(a);
		b=find(b);
		if(a==b)cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
	return 0;
} 
