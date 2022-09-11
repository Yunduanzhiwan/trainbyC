/*
最小旅行路线

景区中有2n个景点，坐标分别是1..2n，
美丽值为1..n的景点各有两个。A,B两人想分别从1出发，
按照美丽值1…n的顺序访问景点，且他们都不会访问那些被对方访问过的景点
(经过景点时可以选择访问，也可以选择不访问)。问两个人最小的旅行线路距离和最小是多少。

*/ 
#include<iostream>
#include<math.h>
#include<vector> 
using namespace std;
#define MAX 100003
vector<int> map[MAX];//最大值 
int main(){
	ios::sync_with_stdio(false);//去除缓存 
	int n;
	cin>>n;
	int x;
	for(int i=1;i<=2*n;++i){
		cin>>x;
		map[x].push_back(i);//价值为x的map放入地点  map[i][j]    第j个价值为i的地点 
	}
	int res=0;//结果 
	res+=(map[1][0]-1+map[1][1]-1);//从1地点分别去到价值为1的两个景点，必须如此 
	for(int i=2;i<=n;++i){//遍历剩下的价值 
				//两种情况取小，最短距离 
		res+= min( (abs(map[i][0]-map[i-1][0])+abs(map[i][1]-map[i-1][1]))  , //1-1 0-1 
				   (abs(map[i][1]-map[i-1][0])+abs(map[i][0]-map[i-1][1]))   );//交叉  1-0 0-1 
	}
	cout<<res<<endl;
	return 0;
} 




//typedef struct Node* proNode;

//struct Node{
//	int jin;
//	int vis;
//	int num;
//}jin[MAX*2];
//bool cmp(struct Node& a,struct Node& b){
//	return a.jin<b.jin;
//}
//int vis[MAX*2]={0};
//queue<proNode> q;
//int main(){
//	ios::sync_with_stdio(false);
//	int n;
//	cin>>n;
//	for(int i=1;i<2*n+1;++i){
//		cin>>jin[i].jin;
//		jin[i].num=i;
//		jin[i].vis=0;
//	}
//	jin[0].jin=0;
//	jin[0].vis=0;
//	jin[0].num=1;
//	
//	q.push(&jin[0]);
//	q.push(&jin[0]);
//	
//	sort(jin+1,jin+2*n+1,cmp);
//	int res=0;
//	while(!q.empty()){
//		proNode t1=q.front();q.pop();
//		proNode t2=q.front();q.pop();
//		int flag1=0;
//		int flag2=0;
//		for(int i=1;i<=2*n;++i){
//			if((t1->jin==jin[i].jin-1)&&jin[i].vis==0&&flag1==0){
//				jin[i].vis=1;
//				q.push(&jin[i]);
//				res+=abs(t1->num-jin[i].num);
//				flag1++;
//			}else if((t2->jin==jin[i].jin-1)&&jin[i].vis==0&&flag2==0){
//				jin[i].vis=1;
//				q.push(&jin[i]);
//				res+=abs(t2->num-jin[i].num);
//				flag2++;
//			}
//			
//			if(flag1&&flag2){
//				break;
//			}
//		}
//	}
//	 
//	cout<<res<<endl;
//	return 0;
//}


/*
#include<iostream>
#include<vector>
#define N 100005
using namespace std;
vector<int> s[N];
int n=0;
int dp[N][2]={0};
int abs(int x){
	if(x>0) return x;
	return -x;
}
int main(){
	ios::sync_with_stdio(false);cin>>n;
	for(int i=1;i<=2*n;i++){
		int x=0;cin>>x;
		s[x].push_back(i);
	}
	dp[1][0]=s[1][0]-1+s[1][1]-1;
	dp[1][1]=s[1][0]-1+s[1][1]-1;
	for(int i=2;i<=n;i++){
		dp[i][0]=dp[i][1]=100000000;
		dp[i][0]=min(abs(s[i][0]-s[i-1][0])+abs(s[i][1]-s[i-1][1])+dp[i-1][0],abs(s[i][0]-s[i-1][1])+abs(s[i][1]-s[i-1][0])+dp[i-1][1]);
		dp[i][1]=min(abs(s[i][1]-s[i-1][0])+abs(s[i][0]-s[i-1][1])+dp[i-1][0],abs(s[i][1]-s[i-1][1])+abs(s[i][0]-s[i-1][0])+dp[i-1][1]);
	}
	cout<<min(dp[n][0],dp[n][1])<<endl;
	return 0;
} 

*/

