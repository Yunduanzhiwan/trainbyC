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
	int b=a;  //�ѳ�ʼֵ����b 
	while(a!=fa[a]){
		a=fa[a];  //�ҵ�a�����Ƚڵ� 
	}
	while(b!=a){  //ֱ��b==aΪֹ 
		int temp=fa[b]; //��һ���м����Ϊb�ĸ��׽ڵ� 
		fa[b]=a; //ֱ����b�ĸ��׽ڵ�Ϊa�����Ƚڵ� 
		b=temp;  //b����b�ĸ��׽ڵ� 
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
