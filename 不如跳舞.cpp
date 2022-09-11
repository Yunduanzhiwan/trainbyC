#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<queue>
using namespace std;
char map[103][103];
int nums[103];
int vis[103]={0}; //是否访问过 
queue<int> q;//队列 
int main(){
	ios::sync_with_stdio(false);//清除输出缓存 
	memset(nums,-1,sizeof(nums));
	int n;//输入人数 
	cin>>n;
	
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>map[i][j];

	q.push(0);//把A放进队列 
	nums[0]=-1;//A到B的距离 
	vis[0]=1;//已经访问，后面不可选 
	int t;
	while(!q.empty()){
		t=q.front();//取出一个人 
		q.pop();
		
		//遍历所有人 
		for(int i=0;i<n;++i){
			//查看遍历的人是否是t的朋友，是否被访问过 
			if(map[t][i]=='Y'&&vis[i]==0){
				if(i==1){//通过中间朋友做成了朋友 
					cout<<nums[t]+1<<endl;
					return 0;
				}	
				//把中间朋友放进队列 
				q.push(i);
				vis[i]=1;//设置已访问，避免他的朋友，再次遍历到他，造成无限循环 
				nums[i]=nums[t]+1;//0到这个朋友的中间朋友个数，即，跳舞次数 
			}
		}
	}
	//没有中间朋友 
	cout<<"-1"<<endl;
	return 0;
}
