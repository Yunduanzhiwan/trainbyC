#include<iostream>
using namespace std;
#define MAX 10003-

int size=0;
int n;
int people[MAX]={0};
int fu[MAX];

int qure(int son){
	if(son==fu[son])return son;
	
	return fu[son]=qure(fu[son]);
}
int find(int a){
	int b=a;  //把初始值赋给b 
	while(a!=fa[a]){
		a=fa[a];  //找到a的祖先节点 
	}
	while(b!=a){  //直到b==a为止 
		int temp=fa[b]; //设一个中间变量为b的父亲节点 
		fa[b]=a; //直接让b的父亲节点为a的祖先节点 
		b=temp;  //b等于b的父亲节点 
	}
	return a;
}
void join(int a,int b){
	int aa=qure(a);
	int bb=qure(b);
	if(aa!=bb){
		fu[aa]=bb;
		size++;
	}
}
int getpeople(){
	int res=0;
	for(int i=1;i<=MAX;++i){
		if(people[i]>0){
			res++;
		}
	}
	return res;
}
void init(){
	
	for(int i=0;i<MAX;++i){
		fu[i]=i;
	}
}

int main(){
	
	int m,t,q;
	cin>>n;
	init();
	for(int i=0;i<n;++i){
		cin>>m;
		q=-1;
		for(int j=0;j<m;++j){
			cin>>t;
			people[t]=1;
				if(q!=-1)
					join(q,t);
			q=t;
		}
	}
	cout<<getpeople()<<" ";
	int numss=0;
	for(int i=1;i<=getpeople();++i){
//		cout<<"fu["<<i<<"]="<<fu[i]<<endl;
		if(fu[i]==i){
			numss++;
		}
	}
	cout<<numss<<endl;
	cin>>n;
	int a,b;
	while(n--){
		cin>>a>>b;
		if(qure(a)==qure(b)){
			cout<<"Y\n";
		}else{
			cout<<"N\n";
		}
	}
	
	return 0;
} 
