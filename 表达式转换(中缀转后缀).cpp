#include<iostream>
#include<map>
#include<stack>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
map<char,int> m;
stack<int> s;
string str;
void init(){
	m['(']=m[')']=1;
	m['+']=m['-']=2;
	m['*']=m['/']=3;
}
void solve(){
	m['(']=m[')']=1;
	m['+']=m['-']=2;
	m['*']=m['/']=3;
	cin>>str;
	char cht;
	int flag=0;
	int len=str.length();
	for(int i=0;i<len;++i){
		if(str[i]=='.'){
			cout<<str[i];
			continue;
		}
		if(m[str[i]]==2&&(i==0||m[str[i-1]]>=1||!isdigit(str[i-1]))){
			cht=str[i];
			if(flag){
				cout<<" "<<cht;
			}else{
				flag=1;
				cout<<cht;
			}
			continue;
		}
		if(str[i]=='('){
			s.push(str[i]);
			continue;
		}
		if(str[i]==')'){
			while(!s.empty()&&s.top()!='('){
				cht=s.top(); 
				if(flag){
						cout<<" "<<cht;
				}else{
					flag=1;
					cout<<cht;
				}
				s.pop();
			}
			s.pop();
			continue;
		}
		if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
			while(!s.empty()&&(m[s.top()]>=m[str[i]])){
				cht=s.top();s.pop();
				if(flag){
					cout<<" "<<str[i];
				}else{
					flag=1;
					cout<<str[i];
				}
			}
			s.push(str[i]);
			
		}else{
			if(str[i-1]=='.'||flag){
				flag=1;
				cout<<cht;
			}else{
				cout<<" "<<cht;
			}
			
		}
		
	}
	while(!s.empty()){
		cht=s.top(); 
		if(flag){
			cout<<" "<<cht;
		}else{
			flag=1;
			cout<<cht;
		}
		s.pop();		
	}
	
}
int main(){
	
	solve();
	
	
	return  0;
}
