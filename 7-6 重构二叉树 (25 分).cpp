#include<bits/stdc++.h>
#include<stack>
using namespace std;
const int n=27;
char xian[n];
char zhon[n];
char hou[n];
stack<char> s;
vector<char> ch;

void solve(int xl,int xr,int zl,int zr){
	if(xl>xr||zl>zr)return;
	char x=xian[xl];
	int i=zl;
	for(;i<=zr;++i){
		if(zhon[i]==x)break;
	}
	s.push(x);
	solve(xl+(i-zl)+1,xr,i+1,zr);//ÓÒ±ß 
	solve(xl+1,xl+(i-zl),zl,i-1);//×ó±ß 
}

int main(){
	string x,z;
	while(cin>>x>>z){
		
		
		int len=x.length();
		if(x==""||len==0){
			break;
		}
		for(int i=0;i<len;++i){
			xian[i]=x[i];
			zhon[i]=z[i];
		}
		solve(0,len-1,0,len-1);

		
		
		while(!s.empty()){
			cout<<s.top();
			s.pop();
		}		
		cout<<endl;
	}
	
	
	
	return 0;
}
