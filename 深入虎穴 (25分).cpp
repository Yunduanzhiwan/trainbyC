#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;
#define MAX 100005
int vis[MAX];
vector<int> map[MAX];

int main(){
	int n;
	cin>>n;
	
	int ru=-1;
	int m,t;
	
	for(int i=1;i<=n;++i){
		vis[i]=1;
	}
	for(int i=1;i<=n;++i){
		cin>>m;
		for(int j=0;j<m;++j){
			cin>>t;
			vis[t]=0;
			map[i].push_back(t);
			map[t].push_back(i);
		}
	}
	


	queue<int> q;
	
	//记录入口，没有人通向它 
	for(int i=1;i<=n;++i){
		if(vis[i]==1){
			ru=i;
			vis[i]=0; 
			break;
		}
	}
	
	q.push(ru);
	vis[ru]=1;
	int temp;
	
	while(!q.empty()){
		temp=q.front();
		q.pop();
		for(int i=0;i<map[temp].size();++i){
			if(!vis[map[temp][i]]){
				vis[map[temp][i]]=1;
				q.push(map[temp][i]);
				
			}
		}
	}
	cout<<temp<<endl;
	return 0;
} 
