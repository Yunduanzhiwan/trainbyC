#include<iostream>
#include<queue>
using namespace std;
const int Max=9999;
int map[51][51];
int R,C,K;
void init(){
	for(int i=0;i<51;++i){
		for(int j=0;j<51;++j){
			map[i][j]=0;
		}
	}
}
int min(int x,int y,int z){

	int t=x<y?x:y;

	return t<z?t:z;
}


typedef struct {
	int x;
	int y;
	int kt;
	int sum;
}Node; 


void bfs(int x,int y){

	int sum=0;
	int kt=0;
	int tm=10000;
	Node *arrs[tm];
	int ind=0;
	int top=0;
	
	Node node={x,y,0,0};

	arrs[top]=&node;
	sum++;
	
	int tx,ty;
	
	
	Node *t;
	while(sum){
	 
		cout<<"---------------"<<endl;
		cout<<sum<<endl; 
		cout<<"ind="<<ind<<" top="<<top<<endl;
		for(int it=ind;it<=top;it++){
			cout<<arrs[it]->x<<" "<<arrs[it]->y<<endl;
		}
		cout<<"---------------"<<endl;
		if(!arrs[ind]){
			break;
		}

		if(ind==tm){
			ind=0;
		}
		t=NULL;
		t=arrs[ind];
	//	arrs[ind]=NULL;

		ind++;

		sum--;
		
		tx=t->x;ty=t->y;
		cout<<"tx="<<tx<<" ty="<<ty<<endl;
		
		map[tx][ty]=0;
		if(tx==1){
			cout<<t->sum<<endl;
			return;
		} 
		if(map[tx-1][ty]){
			Node nt={tx-1,ty,0,t->sum};
			
			if(top==tm){
				top=-1;
			}
			arrs[++top]=&nt;
			sum++;
			cout<<"x"<<" "<<tx-1<<" "<<ty<<endl;
		}
		if(map[tx][ty-1]&&t->kt<K){
			Node nt={tx,ty-1,t->kt+1,t->sum+1};
			if(top==tm){
				top=-1;
			}
			
		
			
			arrs[++top]=&nt;
			sum++;

			cout<<"z"<<" "<<tx<<" "<<ty-1<<endl;
	
		}
		if(map[tx][ty+1]&&t->kt<K){
			cout<<"y"<<" "<<tx<<" "<<ty+1<<endl;
			Node nt={tx,ty+1,t->kt+1,t->sum+1};
	
			
			if(top==tm){
				top=-1;
			}
			arrs[++top]=&nt;
			sum++;
		}
		cout<<"\n==============end=============\n"<<endl;
	}
	cout<<"-1"<<endl; 
}
int main(){
	freopen("f038.in","r",stdin);
//	freopen("c.out","w",stdout);
	init();
	cin>>R>>C>>K;
	char ch;
	int x,y;
	for(int i=R;i>0;--i){
		for(int j=C;j>0;--j){
			cin>>ch;
			if(ch=='.'){
				map[i][j]=1;
				
			}
			else if(ch=='v'){
				map[i][j]=1;
				x=i;
				y=j;
			}
		}
	}
	
	for(int i=R;i>0;--i){
		for(int j=C;j>0;--j){
			cout<<map[i][j];
		}
		cout<<endl;
	}
	bfs(x,y);

	
	return 0;
}



