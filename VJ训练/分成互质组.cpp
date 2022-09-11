#include<iostream>
#include<vector>
using namespace std;
#define MAX 15
vector<int> v[MAX];//每个组一个数组 
int nums[MAX];
int cont=0;
int n;
int gcd(long long x,long long y){
	while(y!=0){
		int t=y;
		y=x%t;
		x=t;
	}
	return x;
}
void dfs(int num){
	if(num==n){//超了 
		return;
	}
	int falg1=0;
	for(int i=0;i<cont;++i){//所有的组 
		int falg=1;
		int size=v[i].size(); 
		for(int j=0;j<size;++j){//遍历每个组的每个数 
			if(gcd(nums[num],v[i][j])!=1){//只要有一个不是互质则结束此次循环 
				falg=0;//不是互质 
				break;
			}
		}
		if(falg){
			v[i].push_back(nums[num]);;
			falg1=1;
			break;
		} 
	}
	if(falg1==0){//没有匹配到，则自己开一个 
		v[cont++].push_back(nums[num]);
	}
	dfs(num+1);
	return;
	
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n; 
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	dfs(0);
	cout<<cont<<endl;

	return 0;
} 
