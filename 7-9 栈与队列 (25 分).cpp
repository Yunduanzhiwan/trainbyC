#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;
int sta[101];
int main(){
	stack<int> s;
	queue<int> q;
	int n;
	cin>>n;
	int k;
	string zhiling;
	for(int i=0;i<n;++i){
		cin>>zhiling;
		if(zhiling=="push"){
			cin>>k;
			s.push(k);
			q.push(k);
		}else{
			if(s.empty()){
				cout<<"error"<<endl;
			}
			if(q.empty()){
				cout<<"error"<<endl;
			}
			s.pop();
			q.pop();
		}
	} 
	int falg=1;
	while(!q.empty()){
		if(falg){
			cout<<q.front();
			falg=0;
		}else{
			cout<<" "<<q.front();
		}
		
		q.pop();
	}
	falg=1;
	cout<<endl;
	int ind=0;
	while(!s.empty()){
		sta[ind++]=s.top();
		
	//	if(falg){
	//		cout<<s.top();
		//	falg=0;
	//	}else{
		//	cout<<" "<<s.top();
	//	}
		s.pop();
	}
	for(int i=ind-1;i>0;--i){
		cout<<sta[i]<<" ";
	}
	cout<<sta[0];
	cout<<endl;
	return 0;
}
