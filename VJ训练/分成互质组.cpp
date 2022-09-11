#include<iostream>
#include<vector>
using namespace std;
#define MAX 15
vector<int> v[MAX];//ÿ����һ������ 
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
	if(num==n){//���� 
		return;
	}
	int falg1=0;
	for(int i=0;i<cont;++i){//���е��� 
		int falg=1;
		int size=v[i].size(); 
		for(int j=0;j<size;++j){//����ÿ�����ÿ���� 
			if(gcd(nums[num],v[i][j])!=1){//ֻҪ��һ�����ǻ���������˴�ѭ�� 
				falg=0;//���ǻ��� 
				break;
			}
		}
		if(falg){
			v[i].push_back(nums[num]);;
			falg1=1;
			break;
		} 
	}
	if(falg1==0){//û��ƥ�䵽�����Լ���һ�� 
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
