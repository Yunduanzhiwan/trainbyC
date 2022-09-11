/*

合并果子


经分析，最大的如果先弄了，后面合并会再加上大的，所以当然是最小的合并，用堆（优先队列） 
*/ 

#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,ans;
	cin>>n;
	priority_queue<int, vector<int> ,greater<int> > q;
	for(int i=0;i<n;++i){
		cin>>ans;
		q.push(ans);
	}
	int sum=0;
	int a,b;
	while(q.size()>1){//注意q.size()>0 会造成 堆里面只有一个会再top一次 
		a=q.top();q.pop();
		b=q.top();q.pop();
		sum+=(a+b);
	//	cout<<a<<" b="<<b<<endl; 
		q.push(a+b);
		
	}
	cout<<sum<<endl;
	return 0;
}
