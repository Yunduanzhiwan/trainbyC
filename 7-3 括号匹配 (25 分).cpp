#include<bits/stdc++.h>

using namespace std;
stack<char> s;
map<char,int> ma;
map<char,int> ma2;
int main(){
	ma['(']=ma[')']=1;
	ma['[']=ma[']']=2;
	ma['{']=ma['}']=3;
	
	ma2['(']=ma2['{']=ma2['[']=1;
	ma2[')']=ma2[']']=ma2['}']=2;
	string str;
//	cin>>str;
    getline(cin,str);
//	str="{[}]"; 
	//cout<<"str="<<str<<endl;
	int len=str.length();
	char top;
	for(int i=0;i<len;++i){
		if(str[i]=='('||str[i]==')'||str[i]=='{'||str[i]=='}'||str[i]=='['||str[i]==']'){
			if(s.empty()){
				s.push(str[i]);	
				continue;
			}
			top=s.top();
			if(ma2[top]==ma2[str[i]]){
				s.push(str[i]);	
			}
			else if(ma[top]!=ma[str[i]]){
				cout<<"no"<<endl;
				return 0;
			}else if(ma[top]==ma[str[i]]&&top!=str[i]){
				s.pop();
			}
		}
	}
	char t;
	while(!s.empty()){
		top=s.top();
		s.pop();
		if(s.empty()){
			cout<<"no"<<endl;
			return 0;
		}
		t=s.top();
		s.pop();
		if(ma[top]!=ma[t]){
			cout<<"no"<<endl;
			return 0;
		}
	}
	cout<<"yes"<<endl;
	return 0;
}
