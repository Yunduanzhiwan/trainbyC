#include<iostream>
#include<string.h>
#include<queue> 
using namespace std;
int num=0;
char* split(string str,char reg){
	int l=str.length();
	char* res=new char[l];
	for(int i=0;i<l;++i){
		if(str[i]!=reg){	
			res[num++]=str[i];
		}
	}
	return res;
}

queue<char>q;
int main(){
	
	int m;
	int n;
	cin>>m;
	
	string str;
	cin>>str;
	getchar();
	char *t=split(str,',');
	
	for(int i=0;i<num;++i){
		q.push(*(t+i));
	}
	
	int falg=1;
	while(!q.empty()){
		for(int i=0;i<m-1;++i){
			if(!q.empty()){
				q.push(q.front());
				q.pop();
			}
		}
	
		char c=q.front();q.pop();
		if(falg){
			cout<<c;
			falg=0;
		}else{
			cout<<","<<c;
		}
		
	}
		
	return 0;
}
