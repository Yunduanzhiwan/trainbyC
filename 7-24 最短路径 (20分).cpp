#include<iostream>
#include<vector>
#include<string.h>
#include<queue> 
using namespace std;
int n,e,b1,b2;
int vis[50]={0};
int len[50]={0};
vector<vector<int> > v;

int bfs(int bs,int be){
	if(bs==be){
        return 0;
    }
    queue<int> q;
	
	q.push(bs);
	vis[bs]=1;
	len[bs]=0;
    int t=0;
    int size=0;
	while(!q.empty()){
		 t=q.front();q.pop();
		size=v[t].size();
		for(int i=0;i<size;++i){
			if(!vis[v[t][i]]){
				q.push(v[t][i]);
				len[v[t][i]]=len[t]+1;
				vis[v[t][i]]=1;
			}
//			if(v[t][i]==be){
//				return len[v[t][i]];
//			}
		}
	}
	if(vis[be]){
		return len[be];
	}
	
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n>>e;
	v.resize(11);//为v 分配大小，即11个数组 
	for(int i=0;i<e;++i){
        v[i].resize(11);//为每个v[i]分配大小 
		cin>>b1>>b2;
		v[b1].push_back(b2);
		v[b2].push_back(b1);
	}
	cin>>b1>>b2;
	int len=bfs(b1,b2);
	if(len!=-1){
		cout<<"The length of the shortest path between "<<b1<<" and "<<b2<<" is "<<len<<"."<<endl;
	}else{
		cout<<"There is no path between "<<b1<<" and "<<b2<<"."<<endl;
	}
	return 0;
} 
