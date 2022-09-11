#include<iostream>
using namespace std;
const int MAX=10004;
int father[MAX];
int peo[MAX]={0};
int find(int x){
	int start=x;//���ҵ������ڵ�
	while(x!=father[x])
		x=father[x];
	int fu=father[start];
	while(start!=x){//·��ѹ���������нڵ�ĸ��ڵ㣬ֱ��ָ����ڵ� 
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
		 father[fua]=fub;//��a���ϴ� ���� b��a��С��Ҳ����ȥ�ˣ� 
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
	b=getPeos();//������ 
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
