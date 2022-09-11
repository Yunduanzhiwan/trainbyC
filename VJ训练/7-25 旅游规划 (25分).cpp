#include<iostream>
#include<queue>
#include<string.h>
#include<vector> 
using namespace std;
#define MAX 505
#define inf 0x3f3f3f3f
class Node{
	public:
		int s,t,len,price;
		Node(){
		}
		Node(int _s,int _t,int _len,int _price):s(_s),t(_t),len(_len),price(_price){//±ß 
		}
		Node(int _t,int _len,int _price):t(_t),len(_len),price(_price){//µã 
		}
		bool operator <(const Node& b)const{
			if(len==b.len)return price<b.price;
			return len<b.len;
		}
}node[MAX];
int vis[MAX];
int dic[MAX];

vector<Node> v[MAX];
priority_queue<Node>pq;
void djstl(int start,int end){
	memset(vis,0,sizeof(vis));
	memset(dic,inf,sizeof(dic));
	
	vis[start]=0;
	dic[start]=0;
	pq.push(Node(start,0,0,0));
	while(!pq.empty()){
		Node tt=pq.top();pq.pop();
		for(int i=0;i<v[tt.s].size();++i){
			if(vis[ v[tt.s]. ])
		}
	} 
	
}

int main(){
	
	
	
	
	return 0;
} 
