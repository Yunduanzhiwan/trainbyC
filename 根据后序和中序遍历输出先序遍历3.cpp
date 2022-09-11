#include<bits/stdc++.h>
#include<stack>
using namespace std;
const int Max=500;
int n;
int zhon[Max];
int hou[Max];
//stack<char> s;
//vector<char> ch;

void solve(int hl,int hr,int zl,int zr){
	if(hl>hr||zl>zr)return;
	int x=hou[hr];
	int i=zl;
	for(;i<=zr;++i){
		if(zhon[i]==x)break;
	}
	cout<<" "<<x;
//	ch.push_back(x);
//	s.push(x);
//	solve()
	solve(hl,hl+(i-zl)-1,zl,i-1);//×ó±ß 
	solve(hl+(i-zl),hr-1,i+1,zr);//ÓÒ±ß 
	return;
}

int main(){
	
		cin>>n;
		
		for(int i=0;i<n;++i){
			cin>>hou[i];
		}
		for(int i=0;i<n;++i){
			cin>>zhon[i];
		}
		cout<<"Preorder:";
		solve(0,n-1,0,n-1);
	//	cout<<endl;
	return 0;
}
