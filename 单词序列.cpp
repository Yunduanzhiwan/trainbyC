#include<iostream>
#include<string.h>
#include<math.h>
#include<queue>
using namespace std;
queue<string> q;
bool v[34]={}; //判断是否用过该单词
string s[34];
int path[34]={};
int maxr=0;
bool panduan(string a,string b){
	int len=max(a.length(),b.length());
	int num=0;
	for(int i=0;i<len;++i){
		if(a[i]!=b[i]){
			num++;
			if(num>1){
				return false;
			}
		}
	}
	return (num==1)?true:false;
}

void dfs(int i){
	if(i!=0){
		maxr++;
		dfs(i-1);
	}
}
int main(){
	string st,end;
	cin>>s[0]>>end;
	int n=1;
	while(cin>>s[n]) n++;
	v[0]=1;
	q.push(s[0]);
	string t;
	int zuo=0;
	queue<int> qz;
	qz.push(zuo);
	while(q.empty()==false){
		t=q.front();
		q.pop();
		zuo=qz.front();
		qz.pop();
		if(panduan(t,end)){
			dfs(zuo);
			cout<<maxr+2;
			return 0;
		} 
		for(int i=1;i<n;++i){
			if(panduan(t,s[i])==true&&v[i]==0){
				path[i]=zuo;
				qz.push(i);
				v[i]=1;
				q.push(s[i]);
			}
		}
	}
	cout<<"0";	
	return 0;
}
