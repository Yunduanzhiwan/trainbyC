#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<map>

using namespace std;
stack<double> s;
map<char ,int> Map; 
void init(){
	Map['+']=0;
	Map['-']=0;
	Map['*']=1;
	Map['/']=1;
	Map['(']=-1;
}
int main(){
	
	string str;
	getline(cin,str);
	istringstream strt(str);
	int len=str.length();
	
	double res=0;
	string t;
	strt>>t;
	while(t.length()>0){
	//	cout<<"t="<<t<<endl;
		if(t.length()==1&&(t=="*"||t=="/"||t=="+"||t=="-")){
			double b=s.top();
			cout<<"b="<<b<<endl;
			s.pop();
			double a=s.top();
			cout<<"a="<<a<<endl;
			s.pop();

			if(t=="+"){
				s.push(a+b);
			}
			else if(t=="-"){
				s.push(a-b);
			}
			else if(t=="*"){
				s.push(a*b);
			}
			else if(t=="/"){
				s.push(a/b);
			}
			
		}else{
//			char *tt=t.;
			stringstream strs(t);
			double tin;
			strs>>tin;
			s.push(tin);
		}
		
		
		
		
		
		cout<<"t.top()="<<s.top()<<endl;
		
		
		
		
		
		
		
		
		
		t="";
		strt>>t;
		
	}
	
	printf("%.1lf",s.top());
//	istringstream ss("123 23 4");
//	
////	cout<<ss.str()<<endl;
//	string a;
//	ss>>a;
//	cout<<a<<endl;
	return 0;
} 
